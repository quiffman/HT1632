set(SOURCES basicdemo.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../..)

add_executable(basicdemo ${SOURCES} ${MAIN})
target_link_libraries(basicdemo ht1632)

include_directories(${WiringPi_INCLUDE_DIRS})
target_link_libraries (basicdemo ${WiringPi_LIBRARIES})

install(TARGETS basicdemo RUNTIME DESTINATION bin)
