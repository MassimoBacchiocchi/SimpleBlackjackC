#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
		
		int num;
		int play;
		int com;
		int lower;
		int upper;
		int card1;
		int card2;
		int new;
		int newcard;
		int draw;
		lower = 1;
		upper = 11;
		num = 0;
		play = 0;
		com = 0;
		card1 = 0;
		card2 = 0;
		new = 0;
		newcard = 0;
		draw = 1;
		srand(time(0));
		
		
		//setting up computer cards
		num = (rand() % (upper - lower + 1 )) + lower;
		com = com + num;
		printf("\n Computer drew: ");
		printf("%d", com);
		num = (rand() % (upper - lower + 1 )) + lower;
		com = com + num;
			
		//setting up player cards
		num = (rand() % (upper - lower + 1 )) + lower;
		card1 = num;
		num = (rand() % (upper - lower + 1 )) + lower;
		card2 = num;
			
		printf("\n Player drew: ");
		printf("%d", card1);
		printf("\n Player drew: ");
		printf("%d", card2);
		play = card1 + card2;
		printf("\n Player has a total of: ");
		printf("%d", play);
			
		printf("\n----------------------------------------------------------------------------------");
			
		//player hits
			
		printf("\n Would you like to hit? Enter 1 for hit or 0 for stand: ", draw);
		scanf(" %d", &draw);
		while( draw == 1){
			num = (rand() % (upper - lower + 1 )) + lower;
			newcard = num;
			printf("\n Player drew: ");
			printf("%d", newcard);
			play = play + newcard;
			printf("\n Player has a total of: ");
			printf("%d", play);
			printf("\n Would you like to hit again? Enter 1 for hit or 0 for stand: ", draw);
			scanf(" %d", &draw);
		}
			
		printf("\n Player has a total of: ");
		printf("%d", play);
			
			
			
			
		//computer must draw till 17
		while(com < 17) {
			num = (rand() % (upper - lower + 1 )) + lower;
			com = com + num;
		}
		printf("\n Computer has: ");
		printf("%d", com);
			
		printf("\n----------------------------------------------------------------------------------");
			
		//player bust
		if(play > 21) {
			printf("\n Player has bust");
			printf("\n Computer Wins!");
		}
		//computer bust
		else if(com > 21) {
			printf("\n Computer has bust");
			printf("\n Player Wins!");
		}
		//determine winner
		else if(play > com) {
			printf("\n Player Wins!");
		}
		else if (play < com) {
			printf("\n Computer Wins!");
		}
		else {
			printf("\n Push");
			printf("\n Draw!");
		}

}