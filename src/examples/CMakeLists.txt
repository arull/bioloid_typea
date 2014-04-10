# create an example application
ADD_EXECUTABLE(bioloid_robot_test bioloid_robot_test.cpp)
# link necessary libraries
TARGET_LINK_LIBRARIES(bioloid_robot_test bioloid_robot)
