#include"svs.hpp"


float positions[6] = {
    -0.5f, -0.5f,
     0.0f,  0.5f,
     0.5f, -0.5f
};
void glew_init(){
GLenum err = glewInit();
if (GLEW_OK != err)
{
  /* Problem: glewInit failed, something is seriously wrong. */
  std::cout << "Glew Error :- \n"<< glewGetErrorString(err) << std::endl;
}
//fprintf(stdout, "Status: Using GLEW %s\n", glewGetString(GLEW_VERSION));
std::cout << "Glew Version:- "<< glewGetString(GLEW_VERSION) << std::endl;
}

void draw_triangle(){
    /* Create OpenGL Buffer -- Vertex Buffer*/
    GLuint buffer;
    glGenBuffers(1,&buffer);
    glBindBuffer(GL_ARRAY_BUFFER,buffer);
    glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), positions, GL_STATIC_DRAW);
}