#ifndef INGAME_H_INCLUDED
#define INGAME_H_INCLUDED


# include <string.h>
# include "hero.h"
# include "loadedPictures.h"
# include "bandit.h"
# include "allScore.h"

int level=1;

int dead_bandit=0;
int sc=0;   //stage complete
int image, image1;
int pic_x = 0;
int pic_y = 0;
int PIC_X = 1024;
int PIC_Y = 0;


void imageRendering(){
	pic_x -= 10;

	if (pic_x<-1024){

		pic_x = 0;
	}
	PIC_X -= 10;
	if (PIC_X<0){

		PIC_X = 1024;
	}

}

void levelSelect()
{
	//iSetColor(0,162,232);
	//iFilledRectangle(0,0,1024,620);
	
	

	if(level ==1)
	{
		
		iShowBMP(pic_x, pic_y, "Background\\b1.bmp");
		iShowBMP(PIC_Y, PIC_Y, "Background\\b1.bmp");
	





		dead_bandit=0;

		for(int i =0 ;i < bandit_counter ; i++)
		{
			if(band[i].dead == 1)
				dead_bandit ++;
		}

		if(dead_bandit==20)
			sc=1;

		if(sc==1)
			iShowBMP(0,0,"NextStage\\1.bmp");
		
	}

	if(level==2)
	{
		

		iShowBMP(pic_x, pic_y, "Background\\b12.bmp");


		dead_bandit=0;

		for(int i =0 ;i < bandit_counter ; i++)
		{
			if(band[i].dead == 1)
				dead_bandit ++;
		}

		if(dead_bandit==20)
			sc=2;

		if(sc==2)
			iShowBMP(0,0,"NextStage\\1.bmp");
		
		
		
	}



	if(level ==3)
	{
		
		iShowBMP(pic_x, pic_y, "Background\\b2.bmp");
		
		dead_bandit=0;

		for(int i =0 ;i < bandit_counter ; i++)
		{
			if(band[i].dead == 1)
				dead_bandit ++;
		}

		if(dead_bandit==20)
			sc=3;

		if(sc==3)
			iShowBMP(0,0,"NextStage\\1.bmp");
	}
}




void gameStart()
{
	
	levelSelect();

	onScreen_score();


	hero();

	bandit();
	
}

void gameOver()

{
	
	iShowBMP(0,0,"GameOver\\2.bmp");
	iSetColor(255,255,255);
	iRectangle(200,100,400,70);

	
}

#endif // INGAME_H_INCLUDED
