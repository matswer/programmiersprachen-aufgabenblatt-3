# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  )
add_executable (aufgabe2bis4
  aufgabe2bis4.cpp
)
add_executable (aufgabe6
  aufgabe6.cpp
)
add_executable (aufgabe9
  aufgabe9.cpp
)
add_executable (aufgabe10
  aufgabe10.cpp
)
add_executable (Circle
  Circle.cpp
)

add_executable (aufgabe5
  aufgabe5.cpp
)
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  glew.c
  tests.cpp
  )
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )


