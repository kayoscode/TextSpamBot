cmake_minimum_required(VERSION 3.8)

SET(PROJ_NAME SpamBot)

project(${PROJ_NAME})

file(GLOB SCR
    "src/*.cpp"
)

add_executable(${PROJ_NAME}
    "${SCR}"
)
