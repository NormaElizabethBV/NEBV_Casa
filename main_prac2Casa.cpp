//Semestre 2018 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Norma Elizabeth Baca Velazquez			******//
//*************		      Visual Studio 2017			******//
//*************		      Trabajo en Casa    			******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(16, 0, 0);
	glVertex3f(33, 0, 0);
	glVertex3f(33, 1, 0);
	glVertex3f(16, 1, 0);///1

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(14, 1, 0);
	glVertex3f(16, 1, 0);
	glVertex3f(16, 2, 0);
	glVertex3f(14, 2, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(16, 1, 0);
	glVertex3f(33, 1, 0);
	glVertex3f(33, 2, 0);
	glVertex3f(16, 2, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(33, 1, 0);
	glVertex3f(35, 1, 0);
	glVertex3f(35, 2, 0);
	glVertex3f(33, 2, 0);//2

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(13, 2, 0);
	glVertex3f(14, 2, 0);
	glVertex3f(14, 3, 0);
	glVertex3f(13, 3, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(14, 2, 0);
	glVertex3f(35, 2, 0);
	glVertex3f(35, 3, 0);
	glVertex3f(14, 3, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(35, 2, 0);
	glVertex3f(36, 2, 0);
	glVertex3f(36, 3, 0);
	glVertex3f(35, 3, 0);//3

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 3, 0);
	glVertex3f(13, 3, 0);
	glVertex3f(13, 4, 0);
	glVertex3f(12, 4, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(13, 3, 0);
	glVertex3f(16, 3, 0);
	glVertex3f(16, 4, 0);
	glVertex3f(13, 4, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(16, 3, 0);
	glVertex3f(36, 3, 0);
	glVertex3f(36, 4, 0);
	glVertex3f(16, 4, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(36, 3, 0);
	glVertex3f(37, 3, 0);
	glVertex3f(37, 4, 0);
	glVertex3f(36, 4, 0);//4

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 4, 0);
	glVertex3f(13, 4, 0);
	glVertex3f(13, 5, 0);
	glVertex3f(12, 5, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(13, 4, 0);
	glVertex3f(15, 4, 0);
	glVertex3f(15, 5, 0);
	glVertex3f(13, 5, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(15, 4, 0);
	glVertex3f(18, 4, 0);
	glVertex3f(18, 5, 0);
	glVertex3f(15, 5, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(18, 4, 0);
	glVertex3f(19, 4, 0);
	glVertex3f(19, 5, 0);
	glVertex3f(18, 5, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(19, 4, 0);
	glVertex3f(37, 4, 0);
	glVertex3f(37, 5, 0);
	glVertex3f(19, 5, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(37, 4, 0);
	glVertex3f(38, 4, 0);
	glVertex3f(38, 5, 0);
	glVertex3f(37, 5, 0);//5

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11, 5, 0);
	glVertex3f(12, 5, 0);
	glVertex3f(12, 6, 0);
	glVertex3f(11, 6, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 5, 0);
	glVertex3f(19, 5, 0);
	glVertex3f(19, 6, 0);
	glVertex3f(12, 6, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(19, 5, 0);
	glVertex3f(37, 5, 0);
	glVertex3f(37, 6, 0);
	glVertex3f(19, 6, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(37, 5, 0);
	glVertex3f(38, 5, 0);
	glVertex3f(38, 6, 0);
	glVertex3f(37, 6, 0);//6

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11, 6, 0);
	glVertex3f(12, 6, 0);
	glVertex3f(12, 7, 0);
	glVertex3f(11, 7, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 6, 0);
	glVertex3f(18, 6, 0);
	glVertex3f(18, 7, 0);
	glVertex3f(12, 7, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(18, 6, 0);
	glVertex3f(38, 6, 0);
	glVertex3f(38, 7, 0);
	glVertex3f(18, 7, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38, 6, 0);
	glVertex3f(39, 6, 0);
	glVertex3f(39, 7, 0);
	glVertex3f(38, 7, 0);//7

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11, 7, 0);
	glVertex3f(12, 7, 0);
	glVertex3f(12, 8, 0);
	glVertex3f(11, 8, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 7, 0);
	glVertex3f(18, 7, 0);
	glVertex3f(18, 8, 0);
	glVertex3f(12, 8, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(18, 7, 0);
	glVertex3f(38, 7, 0);
	glVertex3f(38, 8, 0);
	glVertex3f(18, 8, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38, 7, 0);
	glVertex3f(39, 7, 0);
	glVertex3f(39, 8, 0);
	glVertex3f(38, 8,0);//8

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11, 8, 0);
	glVertex3f(12, 8, 0);
	glVertex3f(12, 9, 0);
	glVertex3f(11, 9, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 9, 0);
	glVertex3f(17, 9, 0);
	glVertex3f(17,10, 0);
	glVertex3f(12, 10, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(20, 8, 0);
	glVertex3f(25, 8, 0);
	glVertex3f(25, 9, 0);
	glVertex3f(20, 9, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(25, 8, 0);
	glVertex3f(38, 8, 0);
	glVertex3f(38, 9, 0);
	glVertex3f(25, 9, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38, 8, 0);
	glVertex3f(39, 8, 0);
	glVertex3f(39, 9, 0);
	glVertex3f(38, 9, 0);//9

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11, 9, 0);
	glVertex3f(12, 9, 0);
	glVertex3f(12, 10, 0);
	glVertex3f(11 ,10, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 9, 0);
	glVertex3f(17, 9, 0);
	glVertex3f(17, 10,0);
	glVertex3f(12, 10, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(17, 9, 0);
	glVertex3f(20, 9, 0);
	glVertex3f(20, 10, 0);
	glVertex3f(17, 10, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(20, 9, 0);
	glVertex3f(22, 9, 0);
	glVertex3f(22, 10, 0);
	glVertex3f(20, 10, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(22, 9, 0);
	glVertex3f(27, 9, 0);
	glVertex3f(27, 10, 0);
	glVertex3f(22, 10, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(27, 9, 0);
	glVertex3f(38, 9, 0);
	glVertex3f(38, 10, 0);
	glVertex3f(27, 10, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38, 9, 0);
	glVertex3f(39, 9, 0);
	glVertex3f(39, 10, 0);
	glVertex3f(38, 10, 0);//10

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11, 10, 0);
	glVertex3f(12, 10, 0);
	glVertex3f(12, 11, 0);
	glVertex3f(11, 11, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 10, 0);
	glVertex3f(15, 10, 0);
	glVertex3f(15, 11, 0);
	glVertex3f(12, 11, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 10, 0);
	glVertex3f(17, 10, 0);
	glVertex3f(17, 11, 0);
	glVertex3f(15, 11, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(17, 10, 0);
	glVertex3f(21, 10, 0);
	glVertex3f(21, 11 , 0);
	glVertex3f(17, 11, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(21, 10, 0);
	glVertex3f(25, 10, 0);
	glVertex3f(25, 11, 0);
	glVertex3f(21, 11, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(25, 10, 0);
	glVertex3f(26, 10, 0);
	glVertex3f(26, 11, 0);
	glVertex3f(25, 11, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(26, 10, 0);
	glVertex3f(29, 10, 0);
	glVertex3f(29, 11, 0);
	glVertex3f(26, 11, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(29, 10, 0);
	glVertex3f(37, 10, 0);
	glVertex3f(37, 11, 0);
	glVertex3f(29, 11, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(37, 10, 0);
	glVertex3f(39, 10, 0);
	glVertex3f(39, 11, 0);
	glVertex3f(37, 11, 0);//11

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11, 11, 0);
	glVertex3f(15, 11, 0);
	glVertex3f(15, 12, 0);
	glVertex3f(11, 12, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(15, 11, 0);
	glVertex3f(19, 11, 0);
	glVertex3f(19, 12, 0);
	glVertex3f(15, 12, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(19, 11, 0);
	glVertex3f(26, 11, 0);
	glVertex3f(26, 12, 0);
	glVertex3f(19, 12, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(26, 11, 0);
	glVertex3f(27, 11, 0);
	glVertex3f(27, 12, 0);
	glVertex3f(26, 12, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(27, 11, 0);
	glVertex3f(28, 11, 0);
	glVertex3f(28, 12, 0);
	glVertex3f(27, 12, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(28, 11, 0);
	glVertex3f(29, 11, 0);
	glVertex3f(29, 12, 0);
	glVertex3f(28, 12, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(29, 11, 0);
	glVertex3f(31, 11, 0);
	glVertex3f(31, 12, 0);
	glVertex3f(29, 12, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(31, 11, 0);
	glVertex3f(35, 11, 0);
	glVertex3f(35, 12, 0);
	glVertex3f(31, 12, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(35, 11, 0);
	glVertex3f(39, 11, 0);
	glVertex3f(39, 12, 0);
	glVertex3f(35, 12, 0);//12

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 12, 0);
	glVertex3f(14, 12, 0);
	glVertex3f(14, 13, 0);
	glVertex3f(12, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(14, 12, 0);
	glVertex3f(15, 12, 0);
	glVertex3f(14, 13, 0);
	glVertex3f(15, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(15, 12, 0);
	glVertex3f(17, 12, 0);
	glVertex3f(17, 13, 0);
	glVertex3f(15, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(17, 12, 0);
	glVertex3f(19, 12, 0);
	glVertex3f(19, 13, 0);
	glVertex3f(17, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(19, 12, 0);
	glVertex3f(27, 12, 0);
	glVertex3f(27, 13, 0);
	glVertex3f(19, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(27, 12, 0);
	glVertex3f(28, 12, 0);
	glVertex3f(28, 13, 0);
	glVertex3f(27, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(28, 12, 0);
	glVertex3f(29, 12, 0);
	glVertex3f(29, 13, 0);
	glVertex3f(28, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(29, 12, 0);
	glVertex3f(30, 12, 0);
	glVertex3f(30, 13, 0);
	glVertex3f(29, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(30, 12, 0);
	glVertex3f(35, 12, 0);
	glVertex3f(35, 13, 0);
	glVertex3f(30, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(35, 12, 0);
	glVertex3f(37, 12, 0);
	glVertex3f(37, 13, 0);
	glVertex3f(35, 13, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(37, 12, 0);
	glVertex3f(38, 12, 0);
	glVertex3f(38, 13, 0);
	glVertex3f(37, 13, 0);//13

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 13, 0);
	glVertex3f(13, 13, 0);
	glVertex3f(13, 14, 0);
	glVertex3f(12, 14, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(13, 13, 0);
	glVertex3f(16, 13, 0);
	glVertex3f(16, 14, 0);
	glVertex3f(13, 14, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(16, 13, 0);
	glVertex3f(18, 13, 0);
	glVertex3f(18, 14, 0);
	glVertex3f(16, 14, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(18, 13, 0);
	glVertex3f(19, 13, 0);
	glVertex3f(19, 14, 0);
	glVertex3f(18, 14, 0);
	
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(19, 13, 0);
	glVertex3f(20, 13, 0);
	glVertex3f(20, 14, 0);
	glVertex3f(19, 14, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(20, 13, 0);
	glVertex3f(25, 13, 0);
	glVertex3f(25, 14, 0);
	glVertex3f(20, 14, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(25, 13, 0);
	glVertex3f(27, 13, 0);
	glVertex3f(27, 14, 0);
	glVertex3f(25, 14, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(27, 13, 0);
	glVertex3f(28, 13, 0);
	glVertex3f(28, 14, 0);
	glVertex3f(27, 14, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(28, 13, 0);
	glVertex3f(29, 13, 0);
	glVertex3f(29, 14, 0);
	glVertex3f(28, 14, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(29, 13, 0);
	glVertex3f(37, 13, 0);
	glVertex3f(37, 14, 0);
	glVertex3f(29, 14, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(37, 13, 0);
	glVertex3f(38, 13, 0);
	glVertex3f(38, 14, 0);
	glVertex3f(37, 14, 0);//14

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 14, 0);
	glVertex3f(13, 14, 0);
	glVertex3f(13, 15, 0);
	glVertex3f(12, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(13, 14, 0);
	glVertex3f(16, 14, 0);
	glVertex3f(16, 15, 0);
	glVertex3f(13, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(16, 14, 0);
	glVertex3f(20, 14, 0);
	glVertex3f(20, 15, 0);
	glVertex3f(16, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(20, 14, 0);
	glVertex3f(24, 14, 0);
	glVertex3f(24, 15, 0);
	glVertex3f(20, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(24, 14, 0);
	glVertex3f(26, 14, 0);
	glVertex3f(26, 15, 0);
	glVertex3f(24, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(26, 14, 0);
	glVertex3f(27, 14, 0);
	glVertex3f(27, 15, 0);
	glVertex3f(26, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(27, 14, 0);
	glVertex3f(28, 14, 0);
	glVertex3f(28, 15, 0);
	glVertex3f(27, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(28, 14, 0);
	glVertex3f(29, 14, 0);
	glVertex3f(29, 15, 0);
	glVertex3f(28, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(29, 14, 0);
	glVertex3f(30, 14, 0);
	glVertex3f(30, 15, 0);
	glVertex3f(29, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(30, 14, 0);
	glVertex3f(36, 14, 0);
	glVertex3f(36, 15, 0);
	glVertex3f(30, 15, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(36, 14, 0);
	glVertex3f(37, 14, 0);
	glVertex3f(37, 15, 0);
	glVertex3f(36, 15, 0);//15

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 15, 0);
	glVertex3f(13, 15, 0);
	glVertex3f(13, 16, 0);
	glVertex3f(12, 16, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(13, 15, 0);
	glVertex3f(16, 15, 0);
	glVertex3f(16, 16, 0);
	glVertex3f(13, 16, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(16, 15, 0);
	glVertex3f(17, 15, 0);
	glVertex3f(17, 16, 0);
	glVertex3f(16, 16, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(17, 15, 0);
	glVertex3f(19, 15, 0);
	glVertex3f(19, 16, 0);
	glVertex3f(17, 16, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(19, 15, 0);
	glVertex3f(24, 15, 0);
	glVertex3f(24, 16, 0);
	glVertex3f(19, 16, 0);
											
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(24, 15, 0);
	glVertex3f(28, 15, 0);
	glVertex3f(28, 16, 0);
	glVertex3f(24, 16, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(28, 15, 0);
	glVertex3f(29, 15, 0);
	glVertex3f(29, 16, 0);
	glVertex3f(28, 16, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(29, 15, 0);
	glVertex3f(30, 15, 0);
	glVertex3f(30, 16, 0);
	glVertex3f(29, 16, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(30, 15, 0);
	glVertex3f(35, 15, 0);
	glVertex3f(35, 16, 0);
	glVertex3f(30, 16, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(35, 15, 0);
	glVertex3f(36, 15, 0);
	glVertex3f(36, 16, 0);
	glVertex3f(35, 16, 0);//16

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(13, 16, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(14, 17, 0);
	glVertex3f(13, 17, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(14, 16, 0);
	glVertex3f(24, 16, 0);
	glVertex3f(24, 17, 0);
	glVertex3f(14, 17, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(24, 16, 0);
	glVertex3f(25, 16, 0);
	glVertex3f(25, 17, 0);
	glVertex3f(24, 17, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(25, 16, 0);
	glVertex3f(27, 16, 0);
	glVertex3f(27, 17, 0);
	glVertex3f(25, 17, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(27, 16, 0);
	glVertex3f(29, 16, 0);
	glVertex3f(29, 17, 0);
	glVertex3f(27, 17, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(29, 16, 0);
	glVertex3f(35, 16, 0);
	glVertex3f(35, 17, 0);
	glVertex3f(29, 17, 0);//17

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(13, 17, 0);
	glVertex3f(14, 17, 0);
	glVertex3f(14, 18, 0);
	glVertex3f(13, 18, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(14, 17, 0);
	glVertex3f(29, 17, 0);
	glVertex3f(29, 18, 0);
	glVertex3f(14, 18, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(29, 17, 0);
	glVertex3f(30, 17, 0);
	glVertex3f(30, 18, 0);
	glVertex3f(29, 18, 0);//18

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(13, 18, 0);
	glVertex3f(14, 18, 0);
	glVertex3f(14, 19, 0);
	glVertex3f(13, 19, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(14, 18, 0);
	glVertex3f(15, 18, 0);
	glVertex3f(15, 19, 0);
	glVertex3f(14, 19, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(15, 18, 0);
	glVertex3f(28, 18, 0);
	glVertex3f(28, 19, 0);
	glVertex3f(15, 19, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(28, 18, 0);
	glVertex3f(30, 18, 0);
	glVertex3f(30, 19, 0);
	glVertex3f(28, 19, 0);//19

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 19, 0);
	glVertex3f(13, 19, 0);
	glVertex3f(13, 20, 0);
	glVertex3f(12, 20, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(13, 19, 0);
	glVertex3f(14, 19, 0);
	glVertex3f(14, 20, 0);
	glVertex3f(13, 20, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(14, 19, 0);
	glVertex3f(16, 19, 0);
	glVertex3f(16, 20, 0);
	glVertex3f(14, 20, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(16, 19, 0);
	glVertex3f(27, 19, 0);
	glVertex3f(27, 20, 0);
	glVertex3f(16, 20, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(27, 19, 0);
	glVertex3f(29, 19, 0);
	glVertex3f(29, 20, 0);
	glVertex3f(27, 20, 0);//20

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 20, 0);
	glVertex3f(13, 20, 0);
	glVertex3f(13, 21, 0);
	glVertex3f(12, 21, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(13, 20, 0);
	glVertex3f(14, 20, 0);
	glVertex3f(14, 21, 0);
	glVertex3f(13, 21, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(14, 20, 0);
	glVertex3f(16, 20, 0);
	glVertex3f(16, 21, 0);
	glVertex3f(14, 21, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(16, 20, 0);
	glVertex3f(26, 20, 0);
	glVertex3f(26, 21, 0);
	glVertex3f(16, 21, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(26, 20, 0);
	glVertex3f(28, 20, 0);
	glVertex3f(28, 21, 0);
	glVertex3f(26, 21, 0);//21

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 21, 0);
	glVertex3f(13, 21, 0);
	glVertex3f(13, 22, 0);
	glVertex3f(12, 22, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(13, 21, 0);
	glVertex3f(14, 21, 0);
	glVertex3f(14, 22, 0);
	glVertex3f(13, 22, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(14, 21, 0);
	glVertex3f(15, 21, 0);
	glVertex3f(15, 22, 0);
	glVertex3f(14, 22, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(15, 21, 0);
	glVertex3f(17, 21, 0);
	glVertex3f(17, 22, 0);
	glVertex3f(15, 22, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(17, 21, 0);
	glVertex3f(18, 21, 0);
	glVertex3f(18, 22, 0);
	glVertex3f(17, 22, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(18, 21, 0);
	glVertex3f(24, 21, 0);
	glVertex3f(24, 22, 0);
	glVertex3f(18, 22, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(24, 21, 0);
	glVertex3f(26, 21, 0);
	glVertex3f(26, 22, 0);
	glVertex3f(24, 22, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(26, 21, 0);
	glVertex3f(27, 21, 0);
	glVertex3f(27, 22, 0);
	glVertex3f(26, 22, 0); //22

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 22, 0);
	glVertex3f(13, 22, 0);
	glVertex3f(13, 23, 0);
	glVertex3f(12, 23, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(13, 22, 0);
	glVertex3f(15, 22, 0);
	glVertex3f(15, 23, 0);
	glVertex3f(13, 23, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 22, 0);
	glVertex3f(22, 22, 0);
	glVertex3f(22, 23, 0);
	glVertex3f(15, 23, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(22, 22, 0);
	glVertex3f(24, 22, 0);
	glVertex3f(24, 23, 0);
	glVertex3f(22, 23, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(24, 22, 0);
	glVertex3f(26, 22, 0);
	glVertex3f(26, 23, 0);
	glVertex3f(24, 23, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(26, 22, 0);
	glVertex3f(27, 22, 0);
	glVertex3f(27, 23, 0);
	glVertex3f(26, 23, 0);//23

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 23, 0);
	glVertex3f(17, 23, 0);
	glVertex3f(17, 24, 0);
	glVertex3f(12, 24, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(21, 23, 0);
	glVertex3f(23, 23, 0);
	glVertex3f(23, 24, 0);
	glVertex3f(21, 24, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(23, 23, 0);
	glVertex3f(25, 23, 0);
	glVertex3f(25, 24, 0);
	glVertex3f(23, 24, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(25, 23, 0);
	glVertex3f(26, 23, 0);
	glVertex3f(26, 24, 0);
	glVertex3f(25, 24, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(26, 23, 0);
	glVertex3f(27, 23, 0);
	glVertex3f(27, 24, 0);
	glVertex3f(26, 24, 0); //24

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 24, 0);
	glVertex3f(15, 24, 0);
	glVertex3f(15, 25, 0);
	glVertex3f(12, 25, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(22, 24, 0);
	glVertex3f(24, 24, 0);
	glVertex3f(24, 25, 0);
	glVertex3f(22, 25, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(24, 24, 0);
	glVertex3f(26, 24, 0);
	glVertex3f(26, 25, 0);
	glVertex3f(24, 25, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(26, 24, 0);
	glVertex3f(27, 24, 0);
	glVertex3f(27, 25, 0);
	glVertex3f(26, 25, 0); //25

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, 25, 0);
	glVertex3f(13, 25, 0);
	glVertex3f(13, 26, 0);
	glVertex3f(12, 26, 0);

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(23, 25, 0);
	glVertex3f(27, 25, 0);
	glVertex3f(27, 26, 0);
	glVertex3f(23, 26, 0);//26

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(24, 26, 0);
	glVertex3f(27, 26, 0);
	glVertex3f(27, 27, 0);
	glVertex3f(24, 27, 0);//27

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(26, 27, 0);
	glVertex3f(27, 27, 0);
	glVertex3f(27, 28, 0);
	glVertex3f(26, 28, 0);//28

	

	glEnd();
	glFlush();
	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	//glOrtho(1.0, 50.0,1.0, 50.0, 50.0, -2.5);
	glOrtho(0.0, 50.0, 0.0, 50.0, 0.0, 2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (1, 1);	//Posicion de la Ventana
  glutCreateWindow    ("Trabajo Casa NEBV"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

