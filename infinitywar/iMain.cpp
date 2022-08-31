
# include "iGraphics.h"
# include <string.h>
# include "bitmap_loader.h"
# include "menu.h"
# include "inGame.h"
# include "hero.h"
# include "loadedPictures.h"
# include "bandit.h"
# include "allScore.h"

int mposx,  mposy;
bool musicOn = true;
bool punch = true;
bool screen = true;
void iDraw()
{
	
	iClear();
      if(mode==1)
		menu_interface();

	else if(mode==2)
		gameStart();

	else if(mode==3)
		aboutus();

	else if(mode==4)
		instructions();

	else if(mode==5)
		highScore();

	else if(mode==6)
		hero_selection();

	else if(mode==7)
		gameOver();
	
//else if(mode==8)
	//	sound();


}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx >= 143 && mx <= 304 && my >= 369 && my <= 421 && mode == 1)
		{
			mode = 6; //start game 
		}

		if(mx >= 10 && mx <= 64 && my >= 30 && my <= 94 && mode == 1)
		{
			mode = 3; //about us 
		}

		if(mx >= 410 && mx <= 568 && my >= 150 && my <= 199 && mode == 1)
		{
			mode = 4; //instruction 
		}

		if(mx >= 279 && mx <= 436 && my >= 258 && my <= 307 && mode == 1)
		{
			mode = 5; //highscore 
		}

		//if(mx >= 956 && mx <= 1000 && my >= 21 && my <= 42 && mode == 1)
		{
			//mode = 8; //sound on/of 
		}

		if(mx >= 543 && mx <= 702 && my >= 37 && my <= 89 && mode == 1)
		{
			exit(0); //end game
		}

		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	//place your code here

 mposx = mx;
 mposy = my;
 if(mx== 2){}        /*Something to do with mx*/
 else if(my== 2){}   /*Something to do with my*/

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
		if (key == 'm')
	{
		if (musicOn)
		{
			musicOn = false;
			PlaySound(0, 0, 0);
		}
		else
		{
			musicOn = true;
			PlaySound("music\\m.wav", NULL, SND_LOOP | SND_ASYNC);

		}
		}
	if(key == 'q')
	{
		score++;
	}

	//used for going to the main menu

	if(key == 27)
	{
		mode = 1;
	}

	if(key == 'l')
	{
		level ++;
		if(level==4)
			level=1;
	}

	if(key == 'a' && hero_state != 5 && hero_state != 4)
	{
		hero_state = 2;
		if (screen)
			PlaySound("music\\huha.wav", NULL, SND_ASYNC);


	}

	if(key == 's' && hero_state != 5 && hero_state != 4)
	{
		hero_state = 3;
		if (punch)
			PlaySound("music\\punch.wav", NULL,  SND_ASYNC);

	}

	if(key == 'd' && hero_state != 5)
	{
		temp_dir = hero_dir;
		hero_mana = hero_mana - 40;
		hero_state = 4;
		
		
	}

	if(key == ' ' && hero_state != 4)
	{
		
		hero_state = 5;
		
	}

	if(key == 'h' && mode == 6)
	{
		
		hero_selector = 1;
		hero_selector_func();
		mode = 2;
		
	}

	if(key == 'c' && mode == 6)
	{
		
		hero_selector = 2;
		hero_selector_func();
		mode = 2;
		
	}
	if (key == 'l' && mode == 6)
	{

		hero_selector = 3;
		hero_selector_func();
		mode = 2;

	}

	if(key == '\r' && mode == 7)
	{
		
		mode = 1 ;
		
	}

	if(key == '\r' && mode == 2 && sc==1)
	{
		if(level <3)
		level++ ;
		if(level>3)
			mode = 1;
		bandit_initialize();
		sc=0;
		
	}
	if (key == '\r' && mode == 2 && sc == 2)
	{
		if (level <3)
			level++;
		if (level>3)
			mode = 1;
		bandit_initialize();
		sc = 0;

	}
	if (key == '\r' && mode == 2 && sc == 3)
	{
		if (level <3)
			level++;
		if (level>3)
			mode = 1;
		bandit_initialize();
		sc = 0;

	}
	
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

if(key == GLUT_KEY_END)
	{
		exit(0);
	}

	if(key == GLUT_KEY_UP && mode ==2  && hero_state != 5 && hero_state != 4)
	{
		
		if(hero_walk_y >=250)
			hero_walk_y = hero_walk_y;

		else
			hero_walk_y = hero_walk_y + hero_dy ;     //border logic

		
		hero_state=1;
		
	}

	if(key == GLUT_KEY_DOWN && mode ==2 && hero_state != 5 && hero_state != 4)
	{
		
		if(hero_walk_y <= 10)
			hero_walk_y = hero_walk_y;
		else
			hero_walk_y = hero_walk_y - hero_dy ;      //border logic

		
		hero_state=1;
		
	}
	if(key == GLUT_KEY_RIGHT && mode ==2 && hero_state != 4)
	{
		
		hero_walk_x = hero_walk_x + hero_dx ;
		hero_dir = 2;
		
		if(hero_state !=5) //jump er moddhe direction change korar jonno
		hero_state=1;
		
	}

	if(key == GLUT_KEY_LEFT && mode==2 && hero_state != 4)
	{
		
		if(hero_walk_x <= -10)
			hero_walk_x = hero_walk_x;

		else
		hero_walk_x = hero_walk_x - hero_dx ;    //border logic


		hero_dir = 1;
		
		if(hero_state !=5)  //jump er moddhe direction change korar jonno
		hero_state=1;
		
	}

}

void hero_change()
{
	hero_laser();

	if(mode == 2 && hero_state == 1)
		hero_walk();

	if(mode == 2 && hero_state == 2)
		hero_punch();

	if(mode == 2 && hero_state == 3)
		hero_kick();

	if(mode == 2 && hero_state == 4)
		hero_power();

	if(mode == 2 && hero_state == 5)
		hero_jump();

	

}

/*

bandit_change() is called through iSetTimer() to
monitor any change in bandit movement throughout the game

*/


void bandit_change()
{
	if (mode == 2  && hero_state != 5)
		bandit_walk_and_punch();
}

/*

bandit_coming() is called through iSetTimer and is used to control the number 
of bandits that will enter the screen at a given time

*/

void bandit_coming()
{
	if(mode == 2)
		if(bandit_counter < 20)
			bandit_counter++;

}
//
int main()
{
	if (musicOn)
		PlaySound("music\\m.wav", NULL, SND_LOOP | SND_ASYNC);
	bandit_initialize();


	hero_laser_initialize();
	


	iSetTimer(100,bandit_change);

	iSetTimer(4000,bandit_coming);

	iSetTimer(100,hero_change);
	iSetTimer(80, imageRendering);
	

	
	//place your own initialization codes here.
	iInitialize(1024, 620, "infinity war");
	return 0;
}
