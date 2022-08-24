
# 내부 라이브러리 추가
add_library(uvuntu_button STATIC button.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_button raylib gdi32 winmm)