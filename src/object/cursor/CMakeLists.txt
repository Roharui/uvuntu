

# 내부 라이브러리 추가
add_library(uvuntu_cursor STATIC cursor.cpp) 

# 외부 라이브러리 추가
target_link_libraries(uvuntu_cursor raylib gdi32 winmm)