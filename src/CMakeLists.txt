cmake_minimum_required(VERSION 3.16.6)

add_library(${PROJECT_NAME} SHARED ${CMAKE_CURRENT_SOURCE_DIR}/city.cc)
add_executable(${PROJECT_NAME}_unittest ${CMAKE_CURRENT_SOURCE_DIR}/city-test.cc)
target_link_libraries(${PROJECT_NAME} sse4_2)
target_link_libraries(${PROJECT_NAME}_unittest ${PROJECT_NAME} )

enable_testing()
add_test(cityhashxx_unittest_CTEST cityhashxx_unittest)