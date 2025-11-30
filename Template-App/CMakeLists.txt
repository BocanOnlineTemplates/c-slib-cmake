message(STATUS "[${APP_NAME}]: Configuring...")

file(GLOB_RECURSE APP_ALL_C_SOURCES
    CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"
)

column_print_list("[${APP_NAME}]: All Sources:" APP_ALL_C_SOURCES)

add_executable(${APP_NAME}
    ${APP_ALL_C_SOURCES}
)

target_include_directories(${APP_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(${APP_NAME}
    PRIVATE
        ${CORE_NAME}
)


