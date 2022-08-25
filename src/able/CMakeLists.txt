
# 내부 라이브러리 추가
add_library(uvuntu_clickable STATIC clickable.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_clickable raylib gdi32 winmm)