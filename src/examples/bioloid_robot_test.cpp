#include "bioloid_robot.h"
#include <iostream>

std::string serial_dev="/dev/ttyUSB0";

int main(int argc, char *argv[])
{
  unsigned char data;
  CBioloid_Robot robot;

  robot.open(serial_dev);

  std::cin >> data;
}
