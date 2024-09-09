cmake_minimum_required(VERSION 3.10)

project(connect_four)

set(CMAKE_C_STANDARD 99)

set(SRC
    src/choice_matrix.c
    src/playrs.c
    src/game.c
)
set(INCLUDE
    include/choice_matrix.h
    include/playrs.h
    include/game.h
)

add_library(core
    ${SRC}
    ${CORE_SRC}
)
add_executable(connect_four
    main.c
)

target_link_libraries(connect_four PRIVATE core)

set_target_properties(connect_four PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}"
)
