# driver source files
SET(sources bioloid_robot.cpp)
# application header files
SET(headers bioloid_robot.h)
# locate the necessary dependencies
FIND_PACKAGE(iriutils REQUIRED)
FIND_PACKAGE(comm REQUIRED)
# add the necessary include directories
INCLUDE_DIRECTORIES(.)
INCLUDE_DIRECTORIES(${iriutils_INCLUDE_DIR})
INCLUDE_DIRECTORIES(${comm_INCLUDE_DIR})
# create the shared library
ADD_LIBRARY(bioloid_robot SHARED ${sources})
# link necessary libraries
TARGET_LINK_LIBRARIES(bioloid_robot ${iriutils_LIBRARY})
TARGET_LINK_LIBRARIES(bioloid_robot ${comm_LIBRARY})
# link necessary libraries
INSTALL(TARGETS bioloid_robot
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib/iridrivers
        ARCHIVE DESTINATION lib/iridrivers)
INSTALL(FILES ${headers} DESTINATION include/iridrivers)
INSTALL(FILES ../Findbioloid_robot.cmake DESTINATION ${CMAKE_ROOT}/Modules/)
ADD_SUBDIRECTORY(examples)
