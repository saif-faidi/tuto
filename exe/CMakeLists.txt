
add_executable(exe main.c)
target_link_libraries(exe PRIVATE  softpipeline)
target_link_libraries(exe PRIVATE  tree)