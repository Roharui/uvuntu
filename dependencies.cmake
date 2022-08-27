# 의존성 추가

# 이미지 로더 의존성
add_dependencies(uvuntu_loader uvuntu_utils)
# Detactor 의존성
add_dependencies(uvuntu_detactor uvuntu_utils)
# object 의존성
add_dependencies(uvuntu_object uvuntu_loader uvuntu_detactor)
# object 상속 개체 의존성
add_dependencies(uvuntu_texture uvuntu_object)
# obj 개체 의존성
add_dependencies(uvuntu_cursor uvuntu_texture)
add_dependencies(uvuntu_icon uvuntu_texture)
add_dependencies(uvuntu_taskbar uvuntu_icon)
add_dependencies(uvuntu_page uvuntu_drag)
# dirver 의존성
add_dependencies(
  uvuntu_driver 
  uvuntu_objmanager
  uvuntu_cursor 
  uvuntu_icon 
  uvuntu_utils 
  uvuntu_loader 
  uvuntu_detactor
)