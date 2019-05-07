# CMAKE FOR CLIENT CODE/SRC DIRECTORY 

include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(mylib main.cpp myCalculatorLib.cpp)

install(TARGETS mylib DESTINATION ${PROJECT_SOURCE_DIR}/install/bin_src)