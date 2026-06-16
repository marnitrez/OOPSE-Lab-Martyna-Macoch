cmake_minimum_required(VERSION 3.16)

project(QtConsoleApp LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core LinguistTools)

set(TS_FILES QtConsoleApp_en_PL.ts)

add_executable(QtConsoleApp
  main.cpp
  ${TS_FILES}
  node.h
  node.cpp
)
target_link_libraries(QtConsoleApp PRIVATE Qt${QT_VERSION_MAJOR}::Core)

if(COMMAND qt_create_translation)
    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

include(GNUInstallDirs)
install(TARGETS QtConsoleApp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
