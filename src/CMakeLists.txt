# driver source files
SET(sources bioloid_robot.cpp)
# application header files
SET(headers bioloid_robot.h)
# locate the necessary dependencies
# add the necessary include directories
INCLUDE_DIRECTORIES(.)
# create the shared library
ADD_LIBRARY(bioloid_robot SHARED ${sources})
# link necessary libraries
INSTALL(TARGETS bioloid_robot
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib/iridrivers
        ARCHIVE DESTINATION lib/iridrivers)
INSTALL(FILES ${headers} DESTINATION include/iridrivers)
INSTALL(FILES ../Findbioloid_robot.cmake DESTINATION ${CMAKE_ROOT}/Modules/)
ADD_SUBDIRECTORY(examples)
