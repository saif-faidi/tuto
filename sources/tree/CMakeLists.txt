add_library(
    tree
    src/tree.c
    src/tree.h
)

target_include_directories(tree PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")