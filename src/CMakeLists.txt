project(FirstRPG)
add_executable(FirstRPG Main.cpp Landscape.cpp)
target_link_libraries(FirstRPG ${SDL2_LIBRARY})
install(TARGETS FirstRPG RUNTIME DESTINATION ${BIN_DIR})
