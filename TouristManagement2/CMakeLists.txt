cmake_minimum_required(VERSION 3.5)

project(TouristManagement2 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

                         #Sql这一句必须写，这个qt5以上版本好像自带sqlite的使用环境
find_package(Qt5 COMPONENTS Widgets Sql REQUIRED)
#find_package(Qt5 COMPONENTS Core Sql REQUIRED)
#include_directories(${Qt5Core_INCLUDE_DIRS} ${Qt5Sql_INCLUDE_DIRS})


if(ANDROID)
  add_library(TouristManagement2 SHARED
    main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
  addpackage.cpp
  addpackage.h
  addpackage.ui
  registertourist.cpp
  registertourist.h
  registertourist.ui
  findpackage.cpp
  findpackage.h
  findpackage.ui
  findtourist.cpp
  findtourist.h
  findtourist.ui
  databaseheader.h
  TryAgain.h
  )
else()
  add_executable(TouristManagement2
    main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
  addpackage.cpp
  addpackage.h
  addpackage.ui
  registertourist.cpp
  registertourist.h
  registertourist.ui
  findpackage.cpp
  findpackage.h
  findpackage.ui
  findtourist.cpp
  findtourist.h
  findtourist.ui
  databaseheader.h
  TryAgain.h
  )
endif()
                                                #这个Qt5:Sql 非常关键，没有这一句，前面怎么做都是徒劳
target_link_libraries(TouristManagement2 PRIVATE Qt5::Widgets Qt5::Sql)
#target_link_libraries(TouristManagement2 Qt5::Core Qt5::Sql)


