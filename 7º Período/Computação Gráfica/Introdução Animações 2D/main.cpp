#include <windows.h>
#include <gl/glut.h>
#include <math.h>
#include <iostream>
// Vari�veis para controlar a transforma��o geom�trica dos elementos da tela
int mudarRotacao = 0;
int aumentarTamanho = 0;
int diminuirTamanho = 0;
int mudarPosicao = 0;
float angulo = 0;
int gira = 0;
int txv1 = -50;
int tyv1 = -50;
int txv2 = 0;
int tyv2 = 0;
int txv3 = 50;
int tyv3 = -50;
float escala = 1.5;

// Fun��o para reconhecer Inputs do Teclado
void keyboardInput(unsigned char key, int x, int y){
	if(key == 27){ //tecla ESC
		exit(0); //sair da aplica��o
	}
	else if(key == 82 || key == 114){  //tecla R
		mudarRotacao = 1;
		glRotatef(180, 0, 0, 1);
		glutPostRedisplay();
		
	}
	else if(key == 65 || key == 97){ //tecla A
		aumentarTamanho = 1;
		escala += 0.1;
		glLoadIdentity();
		glScalef(escala, escala, 0.0);
		glutPostRedisplay();
		aumentarTamanho = 0;
	}
	else if(key == 68 || key == 100){ //tecla D
		diminuirTamanho = 1;
		escala -= 0.1;
		glLoadIdentity();
		glScalef(escala, escala, 0.0);
		glutPostRedisplay();
		diminuirTamanho = 0;
	}
	else if(key == 84 || key == 116){ //tecla T
		mudarPosicao = 1;
		glTranslatef(-50, 40, 0.0);
		glutPostRedisplay();
		mudarPosicao = 0;
	}
	else if(key == 71 || key == 103){ //tecla G
		if(gira == 0){
			gira = 1;
		}
		glutPostRedisplay();
	}
	else if(key == 80 || key == 112){ //tecla P
		if(gira == 1){
			gira = 0;
		}
		glutPostRedisplay();
	}
	else if(key == 79 || key == 111){ //tecla O
		txv1 = -50;
		tyv1 = -50;
		txv2 = 0;
		tyv2 = 0;
		txv3 = 50;
		tyv3 = -50;
		if(mudarRotacao == 1){
			glRotatef(-180, 0, 0, 1);
		}	
		gira = 0;
		glLoadIdentity();
		glScalef(escala = 1.5, escala = 1.5, 0.0);
		glutPostRedisplay();
	}
}
// Fun��o para desenhar um Tri�ngulo com uma cor a partir de cada v�rtice
void Triangulo(){
	glBegin(GL_TRIANGLES);
  	glColor3f(1,0,0);
  	glVertex3f(txv1, tyv1, 0);
  	glColor3f(0,1,0);
  	glVertex3f(txv2, tyv2, 0);
	glColor3f(0,0,1);
	glVertex3f(txv3, tyv3, 0);
  glEnd();
}

// Fun��o para reconhecer Inputs do Mouse
void MouseInput(int button, int state, int x, int y){
	switch(button){
		case GLUT_LEFT_BUTTON: if (state == GLUT_DOWN) escala-=0.1f; break;
		case GLUT_RIGHT_BUTTON: if (state == GLUT_UP) escala+=0.1f; break;
	}
	glLoadIdentity();
	gluOrtho2D (-escala, escala, -escala, escala);
	glutPostRedisplay();
}

void TeclasEspeciais(int key, int x, int y){
	switch (key){ // setas do teclado
		case GLUT_KEY_UP: tyv1 += 10.0f; tyv2 += 10.0f; tyv3 += 10.0f; break;
		case GLUT_KEY_DOWN: tyv1 -= 10.0f; tyv2 -= 10.0f; tyv3 -= 10.0f; break;
		case GLUT_KEY_LEFT: txv1 -= 10.0f; txv2 -= 10.0f; txv3 -= 10.0f; break;
		case GLUT_KEY_RIGHT: txv1 += 10.0f; txv2 += 10.0f; txv3 += 10.0f; break;
	}
	glutPostRedisplay(); 
}

void Desenha(void) {
  glMatrixMode(GL_MODELVIEW);
  // Limpa a janela de visualiza��o
  glClear(GL_COLOR_BUFFER_BIT);
  // Especifica que a cor corrente � vermelha R G B
  glColor3f(1.0f, 0.0f, 0.0f);
  // Comando para fazer uma anima��o do tri�ngulo girando
  if(gira == 1){
  	angulo += 0.1;
  	glRotatef(angulo,0,0,1);
  }
  // Triangulo com uma cor a partir de cada v�rtice
  Triangulo();
  // Executa os comandos OpenGL
  glutSwapBuffers();
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
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(400, 350);
  glutInitWindowPosition(10, 10);
  glutCreateWindow("Triangulo");
  glutKeyboardFunc(keyboardInput);
  glutMouseFunc(MouseInput);
  glutSpecialFunc(TeclasEspeciais);
  glutDisplayFunc(Desenha);
  glutIdleFunc(Desenha);
  glutReshapeFunc(AlteraTamanhoJanela);
  Inicializa();
  glutMainLoop();
}
