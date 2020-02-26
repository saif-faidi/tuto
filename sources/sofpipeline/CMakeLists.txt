add_library(
    softpipeline
    src/softpipeline.c
    src/softpipeline.h
)

target_include_directories(softpipeline PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")