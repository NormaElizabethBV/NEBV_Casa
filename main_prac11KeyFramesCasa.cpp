//Semestre 2018- 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Baca Velazquez Norma Elizabeth										******//
//*************		Visual Studio 2010									******//
//************************************************************//
//************************************************************//

#include "texture.h"
#include "figuras.h"
#include "Camera.h"

#include "cmodel/CModel.h"

//NEW//////////////////NEW//////////////////NEW//////////////////NEW////////////////
static GLuint ciudad_display_list;	//Display List for the Monito


//NEW// Keyframes
//Variables de dibujo y manipulacion
float posX =0, posY = 2.5, posZ =-3.5;
float angAnt=0.0;
float angMun = 0.0;
float angMan =0.0;
float angNMeni = 0.0;
float angNAnu = 0.0;
float angNMed = 0.0;
float angNInd = 0.0;
float angNPul = 0.0;
float angTMeni = 0.0;
float angTAnu = 0.0;
float angTMed = 0.0;
float angTInd = 0.0;
float angTPul = 0.0;
GLfloat Position[]= { 0.0f, 3.0f, 0.0f, 1.0f };			// Light Position
GLfloat Position2[]= { 0.0f, 0.0f, -5.0f, 1.0f };

#define MAX_FRAMES 5
int i_max_steps = 90;
int i_curr_steps = 0;


typedef struct _frame
{
	//Variables para GUARDAR Key Frames
	float posX;		//Variable para PosicionX
	float posY;		//Variable para PosicionY
	float posZ;		//Variable para PosicionZ
	float incX;		//Variable para IncrementoX
	float incY;		//Variable para IncrementoY
	float incZ;		//Variable para IncrementoZ
	float angAnt;
	float angTMeni;
	float angTAnu;
	float angTMed;
	float angTInd;
	float angTPul;
	float IncMeni;
	float IncAnu;
	float IncMed;
	float IncInd;
	float IncPul;

	
}FRAME;

FRAME KeyFrame[MAX_FRAMES];
int FrameIndex=0;			//introducir datos
bool play=false;
int playIndex=0;


//NEW//////////////////NEW//////////////////NEW//////////////////NEW////////////////

int w = 500, h = 500;
int frame=0,time,timebase=0;
char s[30];

CCamera objCamera;	//Create objet Camera

GLfloat g_lookupdown = 0.0f;    // Look Position In The Z-Axis (NEW) 

int font=(int)GLUT_BITMAP_HELVETICA_18;


void saveFrame ( void )
{
	
	printf("frameindex %d\n",FrameIndex);			

	KeyFrame[FrameIndex].posX=posX;
	KeyFrame[FrameIndex].posY=posY;
	KeyFrame[FrameIndex].posZ=posZ;
	 
	KeyFrame[FrameIndex].angTMeni=angTMeni;
	KeyFrame[FrameIndex].angTAnu=angTAnu;
	KeyFrame[FrameIndex].angTMed=angTMed;
	KeyFrame[FrameIndex].angTInd=angTInd;
	KeyFrame[FrameIndex].angTPul=angTPul;
	
			
	FrameIndex++;
}

void resetElements( void )
{
	posX=KeyFrame[0].posX;
	posY=KeyFrame[0].posY;
	posZ=KeyFrame[0].posZ;

	angTMeni=KeyFrame[0].angTMeni;
	angTAnu=KeyFrame[0].angTAnu;
	angTMed=KeyFrame[0].angTMed;
	angTInd=KeyFrame[0].angTInd;
	angTPul=KeyFrame[0].angTPul;
}

void interpolation ( void )
{
	KeyFrame[playIndex].incX = (KeyFrame[playIndex + 1].posX - KeyFrame[playIndex].posX) / i_max_steps;	
	KeyFrame[playIndex].incY = (KeyFrame[playIndex + 1].posY - KeyFrame[playIndex].posY) / i_max_steps;	
	KeyFrame[playIndex].incZ = (KeyFrame[playIndex + 1].posZ - KeyFrame[playIndex].posZ) / i_max_steps;	

	KeyFrame[playIndex].IncMeni = (KeyFrame[playIndex + 1].angTMeni - KeyFrame[playIndex].angTMeni) / i_max_steps;
	KeyFrame[playIndex].IncAnu = (KeyFrame[playIndex + 1].angTAnu - KeyFrame[playIndex].angTAnu) / i_max_steps;	
	KeyFrame[playIndex].IncMed = (KeyFrame[playIndex + 1].angTMed - KeyFrame[playIndex].angTMed) / i_max_steps;
	KeyFrame[playIndex].IncInd = (KeyFrame[playIndex + 1].angTInd - KeyFrame[playIndex].angTInd) / i_max_steps;
	KeyFrame[playIndex].IncPul = (KeyFrame[playIndex + 1].angTPul - KeyFrame[playIndex].angTPul) / i_max_steps;	
	


}



		

GLuint createDL() 
{
	GLuint ciudadDL;
	//GLuint cieloDL;

	// Create the id for the list
	ciudadDL = glGenLists(1);
	// start list
	glNewList(ciudadDL,GL_COMPILE);
	// call the function that contains 
	// the rendering commands
		//ciudad();
		//monito();
	// endList
	glEndList();

	return(ciudadDL);
}
			
void InitGL ( GLvoid )     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo	

	glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing

	//Configuracion luz
	glLightfv(GL_LIGHT0, GL_POSITION, Position);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, Position2);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	glEnable(GL_AUTO_NORMAL);
	glEnable(GL_NORMALIZE);


	//END NEW//////////////////////////////

	objCamera.Position_Camera(0,2.5f,3, 0,2.5f,0, 0, 1, 0);

	//NEW Crear una lista de dibujo
	ciudad_display_list = createDL();

	//NEW Iniciar variables de KeyFrames
	for(int i=0; i<MAX_FRAMES; i++)
	{
		KeyFrame[i].posX =0;
		KeyFrame[i].posY =0;
		KeyFrame[i].posZ =0;
		KeyFrame[i].incX =0;
		KeyFrame[i].incY =0;
		KeyFrame[i].incZ =0;
		KeyFrame[i].angTMeni =0;
		KeyFrame[i].angTAnu =0;
		KeyFrame[i].angTMed =0;
		KeyFrame[i].angTInd =0;
		KeyFrame[i].angTPul=0;
		KeyFrame[i].IncMeni=0;
		KeyFrame[i].IncAnu=0;
		KeyFrame[i].IncMed=0;
		KeyFrame[i].IncInd=0;
		KeyFrame[i].IncPul=0;
	}
	//NEW//////////////////NEW//////////////////NEW///////////

}

void pintaTexto(float x, float y, float z, void *font,char *string)
{
  
  char *c;     //Almacena los caracteres a escribir
  glRasterPos3f(x, y, z);	//Posicion apartir del centro de la ventana
  //glWindowPos2i(150,100);
  for (c=string; *c != '\0'; c++) //Condicion de fin de cadena
  {
    glutBitmapCharacter(font, *c); //imprime
  }
}

void prisma(void)
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glLoadIdentity();
	glPushMatrix();
	

	glRotatef(g_lookupdown,1.0f,0,0);

		gluLookAt(	objCamera.mPos.x,  objCamera.mPos.y,  objCamera.mPos.z,	
					objCamera.mView.x, objCamera.mView.y, objCamera.mView.z,	
					objCamera.mUp.x,   objCamera.mUp.y,   objCamera.mUp.z);
	

glPushMatrix();		
			//Manita aqui
	glRotatef(90,0,0,1);	
		//antebrazo
	glTranslatef(2.25, 0, 0);
	glRotated(angAnt,0, 0, 1.0);
	glPushMatrix();
		glScaled(4, 2, 2);
		glColor3f(1, 0, 0);
		prisma();
	glPopMatrix();
	//muñeca
	glRotated(angMun,0, 1.0, 0.0);
	glTranslatef(2.25, 0, 0);
	glPushMatrix();
		glScaled(0.5, 2, 2);
		glColor3f(3, 2, 4);
		prisma();
	glPopMatrix();
	//mano
	glRotated(angMan,0.0, 0.0, 1.0);
	glTranslatef(1.25, -0.12, 0);
	glPushMatrix();
	glScaled(2, 3, 2);
	glColor3f(0, 1, 1);
	prisma();
	glPopMatrix();

//Dedo Indice
	//Falange
	glPushMatrix();
	glTranslatef(1.5, -0.6, 0);
	glRotated(angTInd,0,1,0);
	glPushMatrix();
	glScaled(0.5, 0.3, 1);
	glColor3f(0.7, 0.5, 0.5);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 1);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 1);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
	glPopMatrix();
//Dedo Pulgar
	glPushMatrix();
	//Falange
	glTranslatef(1.5, -1.3, 0);
	glRotated(angTPul,0,1,0);
	glPushMatrix();
	glScaled(0.5, 0.3, 1);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 1);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 1);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
	glPopMatrix();//rotend

//Dedo Meñique
	//Falange
	glPushMatrix();
	glRotated(angTMeni,0.0, 1.0, 0.0);
	glTranslatef(1.7, 1.2, 0);
	glPushMatrix();
	glScaled(0.2, 0.2, 0.3);
	glColor3f(0,0.5, 0.5);
	prisma();
	glPopMatrix();
	//Falangina
	//glRotated(angNa,0.0, 1.0, 0.0);
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
		glScaled(0.5, 0.2, 0.3);
		glColor3f(1, 0, 1);
		prisma();
	glPopMatrix();
	//Falangeta
	//glRotated(angTa,0.0, 1.0, 0.0);
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
		glScaled(0.5, 0.1, 0.3);
		glColor3f(1, 1, 1);
		prisma();
	glPopMatrix();
	glPopMatrix();

//Anular
	glPushMatrix();
	//Falange
	glTranslatef(1.5,0.6, 0);
	glRotated(angTAnu,0,1,0);
	glPushMatrix();
	glScaled(0.2, 0.2, 1);
	glColor3f(1, 0.5, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 1);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 1);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
	glPopMatrix();
//Dedo Medio
	glPushMatrix();
	//Falange
	glTranslatef(1.5, -0.1, 0);
	glRotated(angTMed,0,1,0);
	glPushMatrix();
	glScaled(0.5, 0.3, 1);
	glColor3f(1, 0, 0.5);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 1);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 1);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
	glPopMatrix();
		

glPopMatrix();
	glPopMatrix();
		glDisable(GL_TEXTURE_2D);
		glDisable(GL_LIGHTING);
			glColor3f(1.0,0.0,0.0);
			pintaTexto(-11,12.0,-14.0,(void *)font,"Practica 11");
			pintaTexto(-11,8.5,-14,(void *)font,s);
			glColor3f(1.0,1.0,1.0);
		glEnable(GL_TEXTURE_2D);

	glutSwapBuffers ( );

}

void animacion()
{

	//Movimiento del monito
	if(play)
	{		
		
		if(	i_curr_steps >= i_max_steps) //end of animation between frames?
		{			
			playIndex++;		
			if(playIndex>FrameIndex-2)	//end of total animation?
			{
				printf("termina anim\n");
				playIndex=0;
				play=false;
			}
			else //Next frame interpolations
			{
				i_curr_steps = 0; //Reset counter
				//Interpolation
				interpolation();

			}
		}
		else
		{
			//Draw animation
			posX+=KeyFrame[playIndex].incX;
			posY+=KeyFrame[playIndex].incY;
			posZ+=KeyFrame[playIndex].incZ;

			angTMeni+=KeyFrame[playIndex].IncMeni;
			angTAnu+=KeyFrame[playIndex].IncAnu;
			angTMed+=KeyFrame[playIndex].IncMed;
			angTInd+=KeyFrame[playIndex].IncInd;
			angTPul+=KeyFrame[playIndex].IncPul;
			i_curr_steps++;
		}
		
	}


	glutPostRedisplay();
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

	// Tipo de Vista
	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':   //Movimientos de camara
		case 'W':
			objCamera.Move_Camera( CAMERASPEED+0.2 );
			break;

		case 's':
		case 'S':
			objCamera.Move_Camera(-(CAMERASPEED+0.2));
			break;

		case 'a':
		case 'A':
			objCamera.Strafe_Camera(-(CAMERASPEED+0.4));
			break;

		case 'd':
		case 'D':
			objCamera.Strafe_Camera( CAMERASPEED+0.4 );
			break;

		case 'k':		//
		case 'K':
			if(FrameIndex<MAX_FRAMES)
			{
				saveFrame();
			}

			break;

		case 'l':						
		case 'L':
			if(play==false && (FrameIndex>1))
			{

				resetElements();
				//First Interpolation				
				interpolation();

				play=true;
				playIndex=0;
				i_curr_steps = 0;
			}
			else
			{
				play=false;
			}
			break;

			case 'p':						
			angTMeni++;
			break;

		case 'P':						
			angTMeni--;
			break;

		case 'o':						
			angTAnu++;
			break;

		case 'O':						
			angTAnu--;
			break;

        case 'i':
			angTMed++;
			break;

		case 'I':						
			angTMed--;
			break;

	     case 'u':						
			angTInd++;
			break;

		case 'U':						
			angTInd--;
			break;
		case 'y':						
			angTPul++;
			break;

		case 'Y':						
			angTPul--;
			break;

     
		case 'm':						
			angMan++;
			break;

	 case 'M':						
			angMan--;
			break;


        
	 case 'n':						
			angMun++;
			break;

      case 'N':						
			angMun--;
			break;

      case 'b':						
			angAnt++;
			break;

      case 'B':						
			angMun--;
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
			break;        
		default:        // Cualquier otra
			break;
  }

  glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
	case GLUT_KEY_PAGE_UP:
		objCamera.UpDown_Camera(CAMERASPEED);
		break;

	case GLUT_KEY_PAGE_DOWN:
		objCamera.UpDown_Camera(-CAMERASPEED);
		break;

    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		g_lookupdown -= 1.0f;
		break;

    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		g_lookupdown += 1.0f;
		break;

	case GLUT_KEY_LEFT:
		objCamera.Rotate_View(-CAMERASPEED);
		break;

	case GLUT_KEY_RIGHT:
		objCamera.Rotate_View( CAMERASPEED);
		break;

    default:
		break;
  }
  glutPostRedisplay();
}

void menuKeyFrame( int id)
{
	switch (id)
	{
		case 0:	//Save KeyFrame
			if(FrameIndex<MAX_FRAMES)
			{
				saveFrame();
			}
			break;

		case 1:	//Play animation
			if(play==false && FrameIndex >1)
			{

				resetElements();
				//First Interpolation
				interpolation();

				play=true;
				playIndex=0;
				i_curr_steps = 0;
			}
			else
			{
				play=false;
			}
			break;


	}
}


void menu( int id)
{
	
}



int main ( int argc, char** argv )   // Main Function
{
  int submenu;
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (500, 500);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 11"); // Nombre de la Ventana
  //glutFullScreen     ( );         // Full Screen
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut funci�n de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutIdleFunc		  ( animacion );

  submenu = glutCreateMenu	  ( menuKeyFrame );
  glutAddMenuEntry	  ("Guardar KeyFrame", 0);
  glutAddMenuEntry	  ("Reproducir Animacion", 1);
  glutCreateMenu	  ( menu );
  glutAddSubMenu	  ("Animacion Monito", submenu);
 
  glutAttachMenu	  (GLUT_RIGHT_BUTTON);


  glutMainLoop        ( );          // 

  return 0;
}