cmake_minimum_required(VERSION 3.23)

project(template C)

set(APP_NAME ${PROJECT_NAME}-app)
set(CORE_NAME ${PROJECT_NAME}-core)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

function(column_print_list TITLE LIST_VAR)
    message(STATUS "${TITLE}")
    foreach(item IN LISTS ${LIST_VAR})
        message(STATUS "${item}")
    endforeach()
endfunction()

option(BUILD_TESTING "Build tests" ON)

if(BUILD_TESTING)
    enable_testing()
endif()

add_subdirectory(source/${APP_NAME})
add_subdirectory(source/${CORE_NAME})
