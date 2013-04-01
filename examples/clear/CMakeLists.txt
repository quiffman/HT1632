set(SOURCES clear.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../..)

add_executable(clear ${SOURCES} ${MAIN})
target_link_libraries(clear ht1632)

include_directories(${WiringPi_INCLUDE_DIRS})
target_link_libraries (clear ${WiringPi_LIBRARIES})

install(TARGETS clear RUNTIME DESTINATION bin)
