#include <windows.h>
#include <gl/glut.h>
#include <math.h>
// Vari�veis para controlar a cor dos elementos da paisagem
int mudarRotacao = 0;
int mudarEscala = 0;
int mudarPosicao = 0;

// Fun��o para reconhecer Inputs do Teclado
void keyboardInput(unsigned char key, int x, int y){
	if(key == 27){
		exit(0);
	}
	else if(key == 82 || key == 114){
		if(mudarRotacao == 0){
			mudarRotacao = 1;
		}
		else{
			mudarRotacao = 0;
		}
		glutPostRedisplay();
	}
	else if(key == 83 || key == 115){
		if(mudarEscala == 0){
			mudarEscala = 1;
		}
		else{
			mudarEscala = 0;
		}
		glutPostRedisplay();
	}
	else if(key == 84 || key == 116){
		if(mudarPosicao == 0){
			mudarPosicao = 1;
		}
		else{
			mudarPosicao = 0;
		}
		glutPostRedisplay();
	}
}

void Desenha(void) {
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  // Limpa a janela de visualiza��o
  glClear(GL_COLOR_BUFFER_BIT);
  // Especifica que a cor corrente � vermelha
  // R G B
  glColor3f(1.0f, 0.0f, 0.0f);
  if(mudarRotacao == 1){
	glRotatef(180, 0, 0, 1);
  }
  if(mudarEscala == 1){
	glScalef(1.5, 1.5, 0.0);
  }
  if(mudarPosicao == 1){
	glTranslatef(-50, 40, 0.0);
  }
  // triangulo com uma cor a partir de cada v�rtice
  glBegin(GL_TRIANGLES);
  	glColor3f(1,0,0);
  	glVertex3f(-50, -50, 0);
  	glColor3f(0,1,0);
  	glVertex3f(0, 0, 0);
	glColor3f(0,0,1);
	glVertex3f(50, -50, 0);
  glEnd();
  // Executa os comandos OpenGL
  glFlush();
}

// Inicializa par�metros de rendering
void Inicializa(void) {
  // Define a cor de fundo da janela de visualiza��o como preta
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
// Fun��o callback chamada quando o tamanho da janela � alterado
void AlteraTamanhoJanela(GLsizei w, GLsizei h) {
  // Evita a divisao por zero
  if (h == 0) h = 1;
  // Especifica as dimens�es da Viewport
  glViewport(0, 0, w, h);
  // Inicializa o sistema de coordenadas
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  // Estabelece a janela de sele��o (left, right, bottom, top)
  if (w <= h)
    gluOrtho2D(-200.0f, 200.0f, -175.0f, 175.0f * h / w);
  else
    gluOrtho2D(-200.0f, 200.0f, -175.0f, 175.0f * h / w);
}
// Programa Principal
int main(int argc, char ** argv) {
  glutInit( & argc, argv); // Initialize GLUT
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(400, 350);
  glutInitWindowPosition(10, 10);
  glutCreateWindow("Triangulo");
  glutKeyboardFunc(keyboardInput);
  glutDisplayFunc(Desenha);
  glutReshapeFunc(AlteraTamanhoJanela);
  Inicializa();
  glutMainLoop();
}
