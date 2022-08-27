
# 내부 라이브러리 추가
add_library(uvuntu_page STATIC page.cpp titleBar.cpp closeButton.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_page raylib gdi32 winmm)