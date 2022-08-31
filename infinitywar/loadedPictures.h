
#ifndef LOADEDPICTURES_H_INCLUDED
#define LOADEDPICTURES_H_INCLUDED


# include <string.h>

int hero_selector = 0 ;  //eita diya konta select hobe oita bujhay..initially 0..coz kisui hobe na taile


//Hero_variable_declarations

char Hero_thumb[6][50] ; 

char Hero_stand[6][50] ;

char Hero_stand_mirror[6][50] ;

char Hero_walk[6][50] ;

char Hero_walk_mirror[6][50] ;

char Hero_punch[6][50];

char Hero_punch_mirror[6][50] ;

char Hero_kick[6][50] ;

char Hero_kick_mirror[6][50] ;

char Hero_jump[6][50] ;

char Hero_jump_mirror[6][50] ;

char Hero_power[6][50] ;

char Hero_power_mirror[6][50] ;

char Hero_laser[6][50] ;

char Hero_laser_mirror[6][50] ;


//all hulk images

char hulk_thumb[6][50] = { "hulk\\hulk.bmp" } ;

char hulk_stand[6][50] = {"hulk\\hulk_stand\\1.bmp"};

char hulk_stand_mirror[6][50] = { "hulk\\mirror\\hulk_stand\\1.bmp" } ;

char hulk_walk[6][50] = { "hulk\\hulk_walk\\1.bmp", "hulk\\hulk_walk\\2.bmp", "hulk\\hulk_walk\\3.bmp", "hulk\\hulk_walk\\4.bmp", "hulk\\hulk_walk\\5.bmp" };

char hulk_walk_mirror[6][50] = { "hulk\\mirror\\hulk_walk\\1.bmp", "hulk\\mirror\\hulk_walk\\2.bmp", "hulk\\mirror\\hulk_walk\\3.bmp", "hulk\\mirror\\hulk_walk\\4.bmp", "hulk\\mirror\\hulk_walk\\5.bmp"};

char hulk_punch[6][50] = { "hulk\\hulk_punch\\1.bmp", "hulk\\hulk_punch\\2.bmp", "hulk\\hulk_punch\\3.bmp", "hulk\\hulk_punch\\4.bmp" };

char hulk_punch_mirror[6][50] = { "hulk\\mirror\\hulk_punch\\1.bmp", "hulk\\mirror\\hulk_punch\\2.bmp", "hulk\\mirror\\hulk_punch\\3.bmp", "hulk\\mirror\\hulk_punch\\4.bmp" };

char hulk_kick[6][50] = { "hulk\\hulk_kick\\1.bmp", "hulk\\hulk_kick\\2.bmp", "hulk\\hulk_kick\\3.bmp", "hulk\\hulk_kick\\4.bmp" };

char hulk_kick_mirror[6][50] = { "hulk\\mirror\\hulk_kick\\1.bmp", "hulk\\mirror\\hulk_kick\\2.bmp", "hulk\\mirror\\hulk_kick\\3.bmp", "hulk\\mirror\\hulk_kick\\4.bmp" };

char hulk_jump[6][50] = { "hulk\\hulk_jump\\1.bmp" ,"hulk\\hulk_jump\\2.bmp" };

char hulk_jump_mirror[6][50] = { "hulk\\mirror\\hulk_jump\\1.bmp" ,"hulk\\mirror\\hulk_jump\\2.bmp" };




//all captain america images
 
char cap_thumb[6][50] = { "cap\\cap.bmp" } ;

char cap_stand[6][50] = { "cap\\cap_stand\\1.bmp" } ;

char cap_stand_mirror[6][50] = { "cap\\mirror\\cap_stand\\1.bmp" } ;

char cap_walk[6][50] = {"cap\\cap_walk\\1.bmp", "cap\\cap_walk\\2.bmp", "cap\\cap_walk\\3.bmp", "cap\\cap_walk\\4.bmp","cap\\cap_walk\\5.bmp","cap\\cap_walk\\6.bmp"};

char cap_walk_mirror[6][50] = {"cap\\mirror\\cap_walk\\1.bmp", "cap\\mirror\\cap_walk\\2.bmp", "cap\\mirror\\cap_walk\\3.bmp", "cap\\mirror\\cap_walk\\4.bmp","cap\\mirror\\cap_walk\\5.bmp","cap\\mirror\\cap_walk\\6.bmp"};

char cap_punch[6][50] = { "cap\\cap_punch\\1.bmp", "cap\\cap_punch\\2.bmp","cap\\cap_punch\\3.bmp","cap\\cap_punch\\4.bmp" };


char cap_punch_mirror[6][50] = { "cap\\mirror\\cap_punch\\1.bmp", "cap\\mirror\\cap_punch\\2.bmp","cap\\mirror\\cap_punch\\3.bmp","cap\\mirror\\cap_punch\\4.bmp" };

char cap_kick[6][50] = { "cap\\cap_kick\\1.bmp", "cap\\cap_kick\\2.bmp", "cap\\cap_kick\\3.bmp", "cap\\cap_kick\\4.bmp" };

char cap_kick_mirror[6][50] = { "cap\\mirror\\cap_kick\\1.bmp", "cap\\mirror\\cap_kick\\2.bmp", "cap\\mirror\\cap_kick\\3.bmp", "cap\\mirror\\cap_kick\\4.bmp" };

char cap_jump[6][50] = { "cap\\cap_jump\\1.bmp" ,"cap\\cap_jump\\2.bmp" };

char cap_jump_mirror[6][50] = { " cap\\mirror\\cap_jump\\1.bmp" ,"cap\\mirror\\cap_jump\\2.bmp" };

char cap_power[6][50] = {"cap\\cap_power\\1.bmp" , "cap\\cap_power\\2.bmp" ,"cap\\cap_power\\3.bmp" ,"cap\\cap_power\\4.bmp" ,"cap\\cap_power\\5.bmp"};

char cap_power_mirror[6][50] = { "cap\\mirror\\cap_power\\1.bmp" , "cap\\mirror\\cap_power\\2.bmp" ,"cap\\mirror\\cap_power\\3.bmp" ,"cap\\mirror\\cap_power\\4.bmp" ,"cap\\mirror\\cap_power\\5.bmp" };

char cap_shield[6][50] = { "cap\\cap_shield\\1.bmp" } ;

char cap_shield_mirror[6][50] = { "cap\\mirror\\cap_shield\\1.bmp"} ; 



//All iron man image
char iron_thumb[6][50] = { "iron\\iron.bmp" };

char iron_stand[6][50] = { "iron\\iron_stand\\1.bmp" };

char iron_stand_mirror[6][50] = { "iron\\mirror\\iron_stand\\1.bmp" };

char iron_walk[6][50] = { "iron\\iron_walk\\1.bmp","iron\\iron_walk\\2.bmp","iron\\iron_walk\\3.bmp","iron\\iron_walk\\4.bmp","iron\\iron_walk\\5.bmp","iron\\iron_walk\\6.bmp" };

char iron_walk_mirror[6][50] = { "iron\\mirror\\iron_walk\\1.bmp","iron\\mirror\\iron_walk\\2.bmp","iron\\mirror\\iron_walk\\3.bmp","iron\\mirror\\iron_walk\\4.bmp","iron\\mirror\\iron_walk\\5.bmp","iron\\mirror\\iron_walk\\6.bmp"};

char iron_punch[6][50] = { "iron\\iron_punch\\1.bmp", "iron\\iron_punch\\2.bmp", "iron\\iron_punch\\3.bmp","iron\\iron_punch\\4.bmp"};

char iron_punch_mirror[6][50] = { "iron\\mirror\\iron_punch\\1.bmp", "iron\\mirror\\iron_punch\\2.bmp", "iron\\mirror\\iron_punch\\3.bmp","iron\\mirror\\iron_punch\\4.bmp"};

char iron_kick[6][50] = { "iron\\iron_kick\\1.bmp","iron\\iron_kick\\2.bmp","iron\\iron_kick\\3.bmp","iron\\iron_kick\\4.bmp" };

char iron_kick_mirror[6][50] = { "iron\\mirror\\iron_kick\\1.bmp","iron\\mirror\\iron_kick\\2.bmp","iron\\mirror\\iron_kick\\3.bmp","iron\\mirror\\iron_kick\\4.bmp"};

char iron_jump[6][50] = { "iron\\iron_jump\\1.bmp","iron\\iron_jump\\2.bmp" };

char iron_jump_mirror[6][50] = { "iron\\mirror\\iron_jump\\1.bmp","iron\\mirror\\iron_jump\\2.bmp" };

char iron_power[6][50] = { "iron\\iron_power\\1.bmp", "iron\\iron_power\\2.bmp", "iron\\iron_power\\3.bmp", "iron\\iron_power\\4.bmp", "iron\\iron_power\\5.bmp", "iron\\iron_power\\6.bmp"};

char iron_power_mirror[6][50] = { "iron\\mirror\\iron_power\\1.bmp", "iron\\mirror\\iron_power\\2.bmp", "iron\\mirror\\iron_power\\3.bmp", "iron\\mirror\\iron_power\\4.bmp", "iron\\mirror\\iron_power\\5.bmp", "iron\\mirror\\iron_power\\6.bmp",};

char iron_laser[6][50] = { "iron\\iron_laser\\1.bmp","iron\\iron_laser\\2.bmp","iron\\iron_laser\\3.bmp","iron\\iron_laser\\4.bmp","iron\\iron_laser\\5.bmp","iron\\iron_laser\\6.bmp" };

char iron_laser_mirror[6][50] = { "iron\\mirror\\iron_laser\\1.bmp", "iron\\mirror\\iron_laser\\2.bmp", "iron\\mirror\\iron_laser\\3.bmp", "iron\\mirror\\iron_laser\\4.bmp", "iron\\mirror\\iron_laser\\5.bmp","iron\\mirror\\iron_laser\\6.bmp" };







//function to load pictures according to the selected hero in the hero selection window

void hero_selector_func()

{
	if(hero_selector==1)

		for(int i =0 ; i<6 ;i++)
		{
			strcpy( Hero_thumb[i] , hulk_thumb[i]);

			strcpy( Hero_stand[i] , hulk_stand[i]);

			strcpy( Hero_stand_mirror[i] , hulk_stand_mirror[i]);

			strcpy( Hero_walk[i] , hulk_walk[i]);

			strcpy( Hero_walk_mirror[i] , hulk_walk_mirror[i]);

			strcpy( Hero_punch[i] , hulk_punch[i]);

			strcpy( Hero_punch_mirror[i] , hulk_punch_mirror[i]);

			strcpy( Hero_kick[i] , hulk_kick[i]);

			strcpy( Hero_kick_mirror[i] , hulk_kick_mirror[i]);

			strcpy( Hero_jump[i] ,  hulk_jump[i]);

			strcpy( Hero_jump_mirror[i] , hulk_jump_mirror[i]);

		
		}

	if(hero_selector==2)

		for(int i =0 ; i<6 ;i++)
		{
			strcpy( Hero_thumb[i] , cap_thumb[i]);

			strcpy( Hero_stand[i] , cap_stand[i]);

			strcpy( Hero_stand_mirror[i] , cap_stand_mirror[i]);

			strcpy( Hero_walk[i] , cap_walk[i]);

			strcpy( Hero_walk_mirror[i] , cap_walk_mirror[i]);

			strcpy( Hero_punch[i] , cap_punch[i]);

			strcpy( Hero_punch_mirror[i] , cap_punch_mirror[i]);

			strcpy( Hero_kick[i] , cap_kick[i]);

			strcpy( Hero_kick_mirror[i] , cap_kick_mirror[i]);

			strcpy( Hero_jump[i] ,  cap_jump[i]);

			strcpy( Hero_jump_mirror[i] , cap_jump_mirror[i]);

			strcpy( Hero_power[i] , cap_power[i]);

			strcpy( Hero_power_mirror[i] , cap_power_mirror[i]);

			strcpy( Hero_laser[i] , cap_shield[i]);

			strcpy( Hero_laser_mirror[i] , cap_shield_mirror[i]);
		}
	if (hero_selector == 3)

		for (int i = 0; i<6; i++)
		{
			strcpy(Hero_thumb[i], iron_thumb[i]);

			strcpy(Hero_stand[i], iron_stand[i]);

			strcpy(Hero_stand_mirror[i], iron_stand_mirror[i]);

			strcpy(Hero_walk[i], iron_walk[i]);

			strcpy(Hero_walk_mirror[i], iron_walk_mirror[i]);

			strcpy(Hero_punch[i], iron_punch[i]);

			strcpy(Hero_punch_mirror[i], iron_punch_mirror[i]);

			strcpy(Hero_kick[i], iron_kick[i]);

			strcpy(Hero_kick_mirror[i], iron_kick_mirror[i]);

			strcpy(Hero_jump[i], iron_jump[i]);

			strcpy(Hero_jump_mirror[i], iron_jump_mirror[i]);

			strcpy(Hero_power[i], iron_power[i]);

			strcpy(Hero_power_mirror[i], iron_power_mirror[i]);

			strcpy(Hero_laser[i], iron_laser[i]);

			strcpy(Hero_laser_mirror[i], iron_laser_mirror[i]);
		}
}


//load all bandit images

char Bandit_stand[1][50] = { "Bandit\\Bandit_stand\\1.bmp" };

char Bandit_stand_mirror[1][50] = { "Bandit\\mirror\\Bandit_stand\\1.bmp" };

char Bandit_walk[4][50] = {"Bandit\\Bandit_walk\\1.bmp", "Bandit\\Bandit_walk\\2.bmp", "Bandit\\Bandit_walk\\3.bmp", "Bandit\\Bandit_walk\\4.bmp"};

char Bandit_walk_mirror[4][50] = {"Bandit\\mirror\\Bandit_walk\\1.bmp", "Bandit\\mirror\\Bandit_walk\\2.bmp", "Bandit\\mirror\\Bandit_walk\\3.bmp", "Bandit\\mirror\\Bandit_walk\\4.bmp"};

char Bandit_punch[4][50] = {"Bandit\\Bandit_punch\\1.bmp", "Bandit\\Bandit_punch\\2.bmp", "Bandit\\Bandit_punch\\3.bmp", "Bandit\\Bandit_punch\\4.bmp"};

char Bandit_punch_mirror[4][50] = {"Bandit\\mirror\\Bandit_punch\\1.bmp", "Bandit\\mirror\\Bandit_punch\\2.bmp", "Bandit\\mirror\\Bandit_punch\\3.bmp", "Bandit\\mirror\\Bandit_punch\\4.bmp"};

#endif  LOADEDPICTURES_H_INCLUDED
