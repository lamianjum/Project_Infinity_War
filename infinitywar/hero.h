#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED


# include <string.h>
# include "loadedPictures.h"
//# include "bandit.h"
//# include "inGame.h"

typedef struct hero_power_loc hero_power_loc;

struct hero_power_loc
{
	int x;
	int y;
	int laser_index;

}laser_loc[12];

int hero_dead = 0;

int hero_life = 200 ;
int hero_mana = 200 ;

int hero_walk_index = 0;
int hero_punch_index = 0;
int hero_kick_index = 0;
int hero_jump_index = 0;

 
int hero_dir = 2;
int temp_dir ;  //eita disi coz laser er directory haate rakha lage


int hero_dx = 5;
int hero_dy = 4;

int hero_jump_dy = 30;
int hero_jump_time_count = 0;

int hero_power_index = 0; // power mode a thakar time a hero er bodyr je change hoy oitar jonno

int hero_laser_throw_timer = -3 ;   // hero ready hobe laser marar jonno... 2bar ghurte ghurte hero haat naray felbe..ar eita nirdharon kore kotokkhn laser ber hobe

int laser_on = 0;


int hero_walk_x = 100;
int hero_walk_y = 0;


int hero_state=0;
//0=stealth
//1=walk
//2=punch
//3=kick
//4=power
//5=jump
//6=run-optional-dibo na-pera lage


/*
hero_power() is used to control the variables while the hero is in power mode
*/

void hero_power()
{


	hero_power_index++;

	if(hero_power_index >=5)
		hero_power_index = 3;
		
	hero_laser_throw_timer++;

	if(hero_laser_throw_timer ==0)
	{
		laser_on =1;
		laser_loc[0].x = hero_walk_x + 40;
		
		if(hero_selector==1)
		laser_loc[0].y = hero_walk_y -3; 

		if(hero_selector==2)
		laser_loc[0].y = hero_walk_y +5; 
		
		if(hero_selector==3)
		laser_loc[0].y = hero_walk_y +5;
		//bat er jonno +5   ar firzen er jonno -3  
	}



	if(hero_laser_throw_timer >=10 )
	{
		
		hero_power_index =  0;
		hero_laser_throw_timer = -3;
		hero_state = 0;

	}

}

/*
hero_power_render() is used render the images when the hero is in power mode
*/

void hero_power_render()
{
	if(hero_dir == 2)
	{
		
		iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y , Hero_power[hero_power_index]);
	}

	else if(hero_dir == 1)
	{
		if(hero_power_index < 3)
			iShowBMPAlternativeSkipBlack( hero_walk_x  , hero_walk_y , Hero_power_mirror[hero_power_index]);
		else
		iShowBMPAlternativeSkipBlack( hero_walk_x-128  , hero_walk_y , Hero_power_mirror[hero_power_index]);
	}


}

/*
hero_laser_initialize() is used to initialize the laser before using
*/
void hero_laser_initialize()

{
	laser_loc[0].laser_index = 0;   
	laser_loc[1].laser_index = 1;
	laser_loc[2].laser_index = 1;
	laser_loc[3].laser_index = 1;
	laser_loc[4].laser_index = 1;
	laser_loc[5].laser_index = 1;
	laser_loc[6].laser_index = 1;
	laser_loc[7].laser_index = 1;
	laser_loc[8].laser_index = 1;
	laser_loc[9].laser_index = 1;
	laser_loc[10].laser_index = 1;

	for(int i=0 ; i<=10 ;i++)
		{
			laser_loc[i].x = -100;
			laser_loc[i].y = -100;
			
		}
}

/*
hero_laser() is used to control the variables while the laser is in motion
*/


void hero_laser()
{

	if(laser_on != 0 )                   
	{
		
		laser_on++;


		for(int i = 10; i >= 1 ; i--)         //for(int i = hero_laser_timer ; i >= 1 ; i--)
		{

			laser_loc[i].x = laser_loc[i - 1].x ;
			laser_loc[i].y = laser_loc[i - 1].y ;
		}

		if(temp_dir == 2)
			laser_loc[0].x =  laser_loc[0].x+128 ;
		if(temp_dir == 1)
			laser_loc[0].x =  laser_loc[0].x-128;


		if(laser_on>=25)            // if er bhitor jei condition dibo oikhaner value laser kotokkhn cholbe oita bole
		{
			

			for(int i=0 ; i<=10 ;i++)
			{
				laser_loc[i].x = -100;
				laser_loc[i].y = -100;
			}

			laser_on =0;
		}


	}

	
}

/*
hero_laser_render() is used render the laser images when the laser is in motion
*/


void hero_laser_render()
{
	if(temp_dir == 2)
		for( int i=0 ; i <= 10 ; i++ )
			
			iShowBMPAlternativeSkipBlack(laser_loc[i].x, laser_loc[i].y, Hero_laser[laser_loc[i].laser_index]);

	if(temp_dir == 1)
		for( int i=0 ; i <= 10 ; i++ )
			
			iShowBMPAlternativeSkipBlack(laser_loc[i].x, laser_loc[i].y, Hero_laser_mirror[laser_loc[i].laser_index]);
}


/*
hero_walk() is used to control the variables while the hero is in walking mode
*/

void hero_walk()
{
	hero_walk_index++;
	if(hero_walk_index >= 3)
	{
		hero_walk_index = 0;
		hero_state =0;
	}
}

/*
hero_walk_render() is used to render the images when the hero is in walking mode
*/

void hero_walk_render()
{
	if(hero_dir == 2)
		iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y , Hero_walk[hero_walk_index]);

	else if(hero_dir == 1)
		iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y , Hero_walk_mirror[hero_walk_index]);
}

/*
hero_punch() is used to control the variables while the hero is in punch mode
*/


void hero_punch()
{

	hero_punch_index++;
	if(hero_punch_index >= 4)
		{
			hero_punch_index=0;
			hero_state =0;
		}
}


/*
hero_punch_render() is used render the images when the hero is in punching mode
*/

void hero_punch_render()
{
	if(hero_dir == 2)
		iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y , Hero_punch[hero_punch_index]);

	else if(hero_dir == 1)
		iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y , Hero_punch_mirror[hero_punch_index]);
}

/*
hero_kick() is used to control the variables while the hero is in kick mode
*/


void hero_kick()
{
	hero_kick_index++;
	if(hero_kick_index >= 4)
		{
			hero_kick_index=0;
			hero_state =0;
		}
}

/*
hero_kick_render() is used render the images when the hero is in kicking mode
*/

void hero_kick_render()
{
	if(hero_dir == 2)
		iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y , Hero_kick[hero_kick_index]);

	else if(hero_dir == 1)
		iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y , Hero_kick_mirror[hero_kick_index]);
}

/*
hero_jump() is used to control the variables while the hero is in jump mode
*/


void hero_jump()
{

	if( hero_jump_time_count < 2 && hero_jump_time_count >= 0)
		hero_jump_index=0;


	if( hero_jump_time_count >= 2 && hero_jump_time_count <=7)
		{
			hero_jump_index=1;
			hero_walk_y = hero_walk_y + hero_jump_dy;

		}

	if( hero_jump_time_count >= 8 && hero_jump_time_count <=13)
		{
			hero_jump_index=1;
			hero_walk_y = hero_walk_y - hero_jump_dy;

		}


	if( hero_jump_time_count >=14 &&  hero_jump_time_count < 16)
		hero_jump_index=0;

	if(hero_jump_time_count >= 16)
	{
		hero_jump_time_count = 0;
		hero_jump_index = 0;
			hero_state = 0;
	}

	hero_jump_time_count++ ;
	
}

/*
hero_jump_render() is used render the images when the hero is in jump mode
*/

void hero_jump_render()
{
	if(hero_dir == 2)
		iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y , Hero_jump[hero_jump_index]);

	else if(hero_dir == 1)
		iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y , Hero_jump_mirror[hero_jump_index]);
}


/*
hero() function is used to determine which pictures are to rennder according
to the hero_state variable 

*/
 
void hero()
{

	iShowBMP(35 , 525 , Hero_thumb[0] );      // these are the codes for showing hero life and mana ..also hero thumbnail picture

	iSetColor(100,100,255);
	iFilledRectangle (140 , 525 , 220 ,60);

	iSetColor(17, 21 , 176);
	iFilledRectangle(150 ,560, 200 , 15);
	iFilledRectangle(150 ,535, 200 , 15);

	iSetColor(255,0,0);
	iFilledRectangle(150 ,560, hero_life , 15);

	iSetColor(0,0,255);
	iFilledRectangle(150 ,535, hero_mana , 15);


	//hero_bandit_collision();

	hero_laser_render(); //always render hoitase screen er baire ..kaajer time a ashbe..kaaj seshe furut

	if(hero_state==0)
	{
		if(hero_dir == 2)
			iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y ,  Hero_stand[0]);

		else if(hero_dir == 1)         
			iShowBMPAlternativeSkipBlack( hero_walk_x , hero_walk_y ,  Hero_stand_mirror[0]);
	}

	if(hero_state==1)
		hero_walk_render();

	if(hero_state==2)
		hero_punch_render();

	if(hero_state==3)
		hero_kick_render();

	if(hero_state==4)
		hero_power_render();

	if(hero_state==5)
		hero_jump_render();
}

#endif // HERO_H_INCLUDED
