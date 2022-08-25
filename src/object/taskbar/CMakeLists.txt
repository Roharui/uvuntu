
# 내부 라이브러리 추가
add_library(uvuntu_taskbar STATIC taskbar.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_taskbar raylib gdi32 winmm)