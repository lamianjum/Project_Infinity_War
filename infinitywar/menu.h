#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED


# include <string.h>
# include "loadedPictures.h"
# include "hero.h"
# include "loadedPictures.h"

int mode = 1;

/*
menu_interface() holds the images that is needed for the menu

*/

void menu_interface()
{
	/*iShowBMP(0,0,"menu images\\menu items\\menu background.bmp");

	//iSetColor(255,0,0);
	//iFilledRectangle(300,295,180,30);
	iShowBMPAlternativeSkipBlack(0,0,"menu images\\menu items\\start game.bmp");

	//iSetColor(255,0,0);
	//iFilledRectangle(300,245,180,30);
	iShowBMPAlternativeSkipBlack(0,0,"menu images\\menu items\\load game.bmp");

	//iSetColor(255,0,0);
	//iFilledRectangle(290,195,205,30);	
	iShowBMPAlternativeSkipBlack(0,0,"menu images\\menu items\\instructions.bmp");

	//iSetColor(255,0,0);
	//iFilledRectangle(300,145,180,30);
	iShowBMPAlternativeSkipBlack(0,0,"menu images\\menu items\\high score.bmp");

	//iSetColor(255,0,0);
	//iFilledRectangle(350,105,70,30);
	iShowBMPAlternativeSkipBlack(0,0,"menu images\\menu items\\exit.bmp");
	*/
	iShowBMP(0,0,"menu images\\menu items\\menu.bmp");
	iShowBMPAlternativeSkipBlack(10,30,"menu images\\menu items\\about.bmp");
}

/*
the hero_selection() function shows the hero selection menu
*/

void hero_selection()
{
	iShowBMP(0,0,"menu images\\hero_selection\\hero_selection.bmp");

	

	//hero_selector_func();

	
	
}


void highScore()
{
	iShowBMP(0,0,"menu images\\menu items\\hsr.bmp");
}

void instructions()
{
	iShowBMP(0,0,"menu images\\menu items\\inst.bmp");
	
}





void aboutus()
{
  iShowBMP(0,0,"menu images\\menu items\\aboutus.bmp");

}

#endif // MENU_H_INCLUDED
