cmake_minimum_required(VERSION 3.30)
project(FirstQTWindows)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)

# Путь к Qt (проверь, что папка существует!)
set(Qt6_DIR "C:/Qt/6.9.0/mingw_64/lib/cmake/Qt6")

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(FirstQTWindows main.cpp)

target_link_libraries(FirstQTWindows PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)
