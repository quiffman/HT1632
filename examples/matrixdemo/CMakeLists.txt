set(SOURCES matrixdemo.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../..)

add_executable(matrixdemo ${SOURCES} ${MAIN})
target_link_libraries(matrixdemo ht1632)

include_directories(${WiringPi_INCLUDE_DIRS})
target_link_libraries (matrixdemo ${WiringPi_LIBRARIES})

install(TARGETS matrixdemo RUNTIME DESTINATION bin)
