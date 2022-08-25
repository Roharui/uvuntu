

# 내부 라이브러리 추가
add_library(uvuntu_config STATIC config.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_config raylib gdi32 winmm)