cmake_minimum_required(VERSION 3.25)
project(FirstQTWindows VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(FirstQTWindows main.cpp)

target_link_libraries(FirstQTWindows PRIVATE
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
)

# Для Windows: запрет консоли
if(WIN32)
    set_target_properties(FirstQTWindows PROPERTIES WIN32_EXECUTABLE TRUE)
endif()

