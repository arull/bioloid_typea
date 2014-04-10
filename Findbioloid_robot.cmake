#edit the following line to add the librarie's header files
FIND_PATH(bioloid_robot_INCLUDE_DIR bioloid_robot.h /usr/include/iridrivers /usr/local/include/iridrivers)

FIND_LIBRARY(bioloid_robot_LIBRARY
    NAMES bioloid_robot
    PATHS /usr/lib /usr/local/lib /usr/local/lib/iridrivers) 

IF (bioloid_robot_INCLUDE_DIR AND bioloid_robot_LIBRARY)
   SET(bioloid_robot_FOUND TRUE)
ENDIF (bioloid_robot_INCLUDE_DIR AND bioloid_robot_LIBRARY)

IF (bioloid_robot_FOUND)
   IF (NOT bioloid_robot_FIND_QUIETLY)
      MESSAGE(STATUS "Found bioloid_robot: ${bioloid_robot_LIBRARY}")
   ENDIF (NOT bioloid_robot_FIND_QUIETLY)
ELSE (bioloid_robot_FOUND)
   IF (bioloid_robot_FIND_REQUIRED)
      MESSAGE(FATAL_ERROR "Could not find bioloid_robot")
   ENDIF (bioloid_robot_FIND_REQUIRED)
ENDIF (bioloid_robot_FOUND)

