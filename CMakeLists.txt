
cmake_minimum_required(VERSION 2.8.3)
project(arjun_kapoor)

SET(CMAKE_INSTALL_PREFIX /usr/local/flytos/flytapps CACHE PATH "Cmake install prefix path for flytapps" FORCE)

add_definitions(-std=c++11)

find_package(catkin REQUIRED COMPONENTS cpp_api)
find_package(Boost REQUIRED COMPONENTS system python)
find_package(PythonLibs 2.7 REQUIRED)
include_directories(${catkin_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})

add_executable(arjunkapoor_int arjunkapoor_int.cpp)
target_link_libraries(arjunkapoor_int ${catkin_LIBRARIES} ${Boost_LIBRARIES} ${PYTHON_LIBRARIES}) 

install(TARGETS arjunkapoor_int
  DESTINATION /flyt/userapps/onboard_user/install/arjun_kapoor_custom_app/ COMPONENT Runtime
)
