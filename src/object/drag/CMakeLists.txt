
# 내부 라이브러리 추가
add_library(uvuntu_drag STATIC drag.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_drag raylib gdi32 winmm)