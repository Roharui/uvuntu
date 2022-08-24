
# 내부 라이브러리 추가
add_library(raylib_loader STATIC imgLoader.cpp)

# 외부 라이브러리 추가
target_link_libraries(raylib_loader raylib gdi32 winmm)