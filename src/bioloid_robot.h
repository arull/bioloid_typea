#ifndef _BIOLOID_ROBOT_H
#define _BIOLOID_ROBOT_H

#include "rs232.h"

class CBioloid_Robot
{
  private:
    CRS232 *serial_port;
  public:
    CBioloid_Robot();
    void open(const std::string &dev_id);
    void send_command(unsigned char button);
    ~CBioloid_Robot();
};

#endif
