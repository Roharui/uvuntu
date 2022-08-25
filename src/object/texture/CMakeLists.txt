
# 내부 라이브러리 추가
add_library(uvuntu_texture STATIC texture.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_texture raylib gdi32 winmm)