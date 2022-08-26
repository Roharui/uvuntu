
# 서브 디렉토리 추가
add_subdirectory(texture)
add_subdirectory(block)
add_subdirectory(drag)
add_subdirectory(cursor)
add_subdirectory(icon)
add_subdirectory(taskbar)
add_subdirectory(page)

# 내부 라이브러리 추가
add_library(uvuntu_object STATIC object.cpp) 

# 외부 라이브러리 추가
target_link_libraries(uvuntu_object raylib gdi32 winmm)