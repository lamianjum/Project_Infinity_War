#ifndef BANDIT_H_INCLUDED
#define BANDIT_H_INCLUDED


# include "hero.h"
# include <string.h>
# include "loadedPictures.h"
# include "allScore.h"

typedef struct bandit_group bd_grp ;


int bandit_counter = -1;
int bandit_dx = 5 ;
int bandit_dy = 4 ;


//state description
//0 = stand 
//1 = walk
//2 = punch


/*
structure to store the information of multilebandite units
*/

struct bandit_group
{
	int x ;
	int y ;

	int walk_index ;
	int punch_index ;

	int dir ;

	int state ;

	int life;

	int dead;

}band[25];


/*
bandit_initialize() function is used to initialize the starting values for all the bandits
*/

void bandit_initialize()
{
	for(int i = 0 ; i < 25 ; i++)
	{
		band[i].x = 850 ;
		band[i].y = rand() % 250 ;

		band[i].walk_index = 0 ;
		band[i].punch_index = 0 ;

		band[i].dir = 1 ;

		band[i].state = 1 ;

		band[i].life = 50 ;

		band[i].dead = 0 ;
	
	}
}

/*
bandit_walk_and_punch() is used to control the variables while the bandit is in walk and punch mode
*/

void bandit_walk_and_punch()
{
	for(int i = 0 ; i < bandit_counter ; i++ )    //code for bandit walking and punching
	{

		if(band[i].life <=0)
		{
			band[i].dead = 1;
			
			//hero_mana = hero_mana + 20 ;
			band[i].x = 1000 ;
			band[i].y = 1000 ;
		}


		
		if(band[i].x <= hero_walk_x + 35 && band[i].x >= hero_walk_x - 35  && band[i].y >= hero_walk_y && band[i].y <= hero_walk_y + 5 && hero_state != 2 && hero_state != 3 && band[i].dead == 0 )  // code for bandit punching

		{
			band[i].state = 2;

			band[i].punch_index++ ;

			if(band[i].punch_index >= 3)
				band[i].punch_index = 0 ;
			
			if(hero_life > 0)
			hero_life--; 

			if(hero_life <= 0)
				mode = 7;
		}


		else if(band[i].dead == 0)                    // code for bandit walking
		{
			band[i].state = 1;

			band[i].walk_index++ ;

			if(band[i].walk_index >= 3)

				band[i].walk_index = 0;
		
		
			if(band[i].x > hero_walk_x)
			{
				band[i].dir = 1;
				band[i].x = band[i].x - bandit_dx ; 
			}

			if(band[i].x < hero_walk_x)
			{
				band[i].dir = 2;
				band[i].x = band[i].x + bandit_dx ;
			}

			if(band[i].y > hero_walk_y)
			{
	
				band[i].y = band[i].y - bandit_dy ; 
			}

			if(band[i].y < hero_walk_y)
			{	

				band[i].y = band[i].y + bandit_dy ;
			}

		}

	}
}

/*
bandit_walk_and_punch_render() is used to render the images while the bandit is in walk and punch mode
*/

void bandit_walk__and_punch_render()
{
	
	for(int i = 0; i < bandit_counter ; i++)
	{
		if( band[i].dir == 2 && band[i].state == 1 && band[i].dead == 0 )
			iShowBMPAlternativeSkipBlack( band[i].x , band[i].y , Bandit_walk[band[i].walk_index]);

		if( band[i].dir == 1 && band[i].state == 1 && band[i].dead == 0 )
			iShowBMPAlternativeSkipBlack( band[i].x , band[i].y , Bandit_walk_mirror[band[i].walk_index]);

		if( band[i].dir == 2 && band[i].state == 2 && band[i].dead == 0 )
			iShowBMPAlternativeSkipBlack( band[i].x , band[i].y , Bandit_punch[band[i].punch_index]);

		if( band[i].dir == 1 && band[i].state == 2 && band[i].dead == 0  )
			iShowBMPAlternativeSkipBlack( band[i].x , band[i].y , Bandit_punch_mirror[band[i].punch_index]);
	}
	
}

/*
hero_bandit_collision() holds the logic for hero ad bandit collision and all the outcome may occure because of it
*/
void hero_bandit_collision()
{
	if(hero_dir == 2)
		{
			for(int i = 0 ; i < bandit_counter ; i++ )

				if(band[i].x <= hero_walk_x + 35 && band[i].x >= hero_walk_x  && band[i].y >= hero_walk_y && band[i].y <= hero_walk_y + 5 && ( hero_state == 2 || hero_state == 3) && band[i].dead == 0)
					{
						band[i].life = band[i].life - 55 ; 
						score = score + 100 ;
					}
		}

}


/*
bandit() function is used for determining the bandit state depending on the hero_state

*/

void bandit()
{

	hero_bandit_collision();

	if(hero_state == 5)
	{
		for(int i = 0 ; i <= bandit_counter ; i++ )
		{
		if(band[i].dir == 2)
			iShowBMPAlternativeSkipBlack( band[i].x , band[i].y ,  Bandit_stand[0] );

		else if(band[i].dir == 1)         
			iShowBMPAlternativeSkipBlack( band[i].x , band[i].y ,  Bandit_stand_mirror[0] );
		}
	}

	
	else 
		
		bandit_walk__and_punch_render();

	
		
}







#endif // BANDIT_H_INCLUDED
