cmake_minimum_required(VERSION 2.8.3)

find_package(catkin REQUIRED COMPONENTS roscpp cv_bridge image_transport)
find_package(OpenCV REQUIRED)

project(c_vision)

catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})

#build the recognition node
add_executable(cognitive_vision src/Callbacks.cpp
                                src/CognitiveDetector.cpp
                                src/DBSCAN.cpp
                                src/Dispatcher.cpp  
                                src/FeatureDetector.cpp
                                src/HighLevelDetector.cpp
                                src/HoughDetector.cpp 
                                src/ImageView.cpp 
                                src/LineFilter.cpp
                                src/main.cpp)

#link libriaries
target_link_libraries(cognitive_vision ${catkin_LIBRARIES})

#install launch files
install(DIRECTORY launch/
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/launch
)