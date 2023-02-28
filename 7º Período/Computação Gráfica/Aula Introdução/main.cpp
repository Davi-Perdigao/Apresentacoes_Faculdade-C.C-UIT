// Quadrado.c
// Um programa OpenGL simples que desenha um
// quadrado em uma janela GLUT.
#include <windows.h>
#include <gl/glut.h>
// Fun��o callback chamada para fazer o desenho
void Desenha(void)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	// Limpa a janela de visualiza��o
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Especifica que a cor corrente � vermelha
	// R G B
	glColor3f(1.0f, 0.0f, 0.0f);
	
	// Desenha um quadrado na cor corrente
	glBegin(GL_QUADS);
		glVertex2i(100,150);
		glVertex2i(100,100);
		// Especifica que a cor corrente � azul
		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2i(150,100);
		glVertex2i(150,150);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2f(0.2, 0.6);
		glVertex2f(0.2, 0.90);
		glVertex2f(0.35, 0.90);
		glVertex2f(0.35, 0.75);
	glEnd ( );
	
	// Executa os comandos OpenGL
	glFlush();
}

// Inicializa par�metros de rendering
void Inicializa (void)
{
	// Define a cor de fundo da janela de visualiza��o como preta
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
// Fun��o callback chamada quando o tamanho da janela � alterado
void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
	// Evita a divisao por zero
	if(h == 0) h = 1;
	
	// Especifica as dimens�es da Viewport
	glViewport(0, 0, w, h);
	
	// Inicializa o sistema de coordenadas
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	// Estabelece a janela de sele��o (left, right, bottom, top)
	if (w <= h)
		gluOrtho2D (0.0f, 250.0f, 0.0f, 250.0f*h/w);
	else
		gluOrtho2D (0.0f, 250.0f*w/h, 0.0f, 250.0f);
}
// Programa Principal
int main(int argc, char** argv) {
	glutInit(&argc, argv); // Initialize GLUT
	/*
	avisa a GLUT que tipo de modo de exibi��o deve ser usado quando a janela � criada. 
	Neste caso os argumentos indicam a cria��o de uma janela single-buffered (GLUT_SINGLE) 
	com o modo de cores RGBA (GLUT_RGB). O primeiro significa que todos os comandos de desenho 
	s�o feitos na janela de exibi��o. Uma alternativa � uma janela double-buffered, onde os 
	comandos de desenho s�o executados para criar uma cena fora da tela para depois rapidamente 
	coloc�-la na view (ou janela de visualiza��o). Este m�todo � geralmente utilizado para produzir 
	efeitos de anima��o. O modo de cores RGBA significa que as cores s�o especificadas atrav�s do 
	fornecimento de intensidades dos componentes red, green e blue separadas.
	*/
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutInitWindowSize(400,350); //especifica o tamanho em pixels da janela GLUT
	glutInitWindowPosition(10,10); //especifica a localiza��o inicial da janela GLUT, que neste caso � o canto superior esquerdo da tela do computador [Woo 1999]
	glutCreateWindow("Quadrado");
	glutDisplayFunc(Desenha);
	/*
	estabelece a fun��o "AlteraTamanhoJanela" previamente definida como a 
	fun��o callback de altera��o do tamanho da janela. Isto �, sempre que 
	a janela � maximizada, minimizada, etc., a fun��o "AlteraTamanhoJanela" 
	� executada para reinicializar o sistema de coordenadas.
	*/
	glutReshapeFunc(AlteraTamanhoJanela); 
	Inicializa();
	glutMainLoop();
}
