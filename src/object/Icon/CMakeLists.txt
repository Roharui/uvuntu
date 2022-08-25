
# 내부 라이브러리 추가
add_library(uvuntu_icon STATIC icon.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_icon raylib gdi32 winmm)