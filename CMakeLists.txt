cmake_minimu_required(VERSION )
project(ATM_Simulator)
set(CMAKE_CXX_STANDARD 11)
add_executable(ATM ../)

if (MSVC)
  add_compile_options(/W3 /WX)
endif()