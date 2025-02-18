cmake_minimum_required(VERSION 3.8)
project(dichotomous_keys)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_library(Files src/FileType.cpp src/FileType.h src/tron.h)
target_include_directories(FileType PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(Dkeys main.cpp)
target_link_libraries(DKeys PUBLIC includes)



install(TARGETS
  DKeys
  DESTINATION lib/${PROJET_NAME}/
)