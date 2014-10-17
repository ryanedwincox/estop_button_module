cmake_minimum_required(VERSION 2.4.6)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)
set(ROS_BUILD_TYPE RelWithDebInfo)
rosbuild_init()

rosbuild_gensrv()

set(SOURCE_FILES
  src/estopControl.cpp
manifest.xml
mainpage.dox
Makefile
  ${MOC_FILES}
)

include_directories(/usr/include/eigen3 /usr/include/)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
rosbuild_add_library(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${QT_LIBRARIES})
