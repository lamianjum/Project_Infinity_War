#ifndef ALLSCORE_H_INCLUDED
#define ALLSCORE_H_INCLUDED


int score = 0 ;

char score_string[20];

/*

funtion to show the player score while the player is in game
*/

void onScreen_score()
{
	iSetColor(0 , 0 , 0);
	iText(860, 560, "Score: ", GLUT_BITMAP_TIMES_ROMAN_24);

	itoa(score , score_string , 10);
	iText(940, 560, score_string, GLUT_BITMAP_TIMES_ROMAN_24);
}

#endif // ALLSCORE_H_INCLUDED
