
# 서브 디렉토리 추가
add_subdirectory(cursor)
add_subdirectory(button)

# 내부 라이브러리 추가
add_library(uvuntu_object STATIC object.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_object raylib gdi32 winmm)