project(ht1632)
CMAKE_MINIMUM_REQUIRED(VERSION 2.4.5 FATAL_ERROR)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/Modules)

find_package (WiringPi REQUIRED)
include_directories(${WiringPi_INCLUDE_DIRS})

set( HT1632_SOURCES HT1632.cpp glcdfont.c bit_array.c Print.cpp )
set( HT1632_HEADERS HT1632.h bit_array.h Printable.h Print.h )

add_library( ht1632 STATIC ${HT1632_SOURCES} )

set( MAIN ${CMAKE_SOURCE_DIR}/main.cpp)

subdirs(examples/basicdemo)
subdirs(examples/matrixdemo)
subdirs(examples/matrixshapes)
subdirs(examples/clear)

