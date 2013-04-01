set(SOURCES matrixshapes.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../..)

add_executable(matrixshapes ${SOURCES} ${MAIN})
target_link_libraries(matrixshapes ht1632)

include_directories(${WiringPi_INCLUDE_DIRS})
target_link_libraries (matrixshapes ${WiringPi_LIBRARIES})

install(TARGETS matrixshapes RUNTIME DESTINATION bin)
