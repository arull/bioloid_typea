#include "bioloid_robot.h"
#include "exceptions.h"

CBioloid_Robot::CBioloid_Robot()
{
}

void CBioloid_Robot::open(const std::string &dev_id)
{
  try
  {
    TRS232_config config;

    this->serial_port=new CRS232("serial_dev");
    this->serial_port->open((void *)&dev_id);
    config.baud=57600;
    config.num_bits=8;
    config.parity=none;
    config.stop_bits=1;
    this->serial_port->config(&config);
  }
  catch(CException &e)
  {
  }
}

void CBioloid_Robot::send_command(unsigned char button)
{
  this->serial_port->write(&button,1);
}
 
CBioloid_Robot::~CBioloid_Robot()
{
}

