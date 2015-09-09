/*
 * Card Counter C Program
 * by Anne, Sophie, Haley, Raagini
 */

#include <stdio.h>
#include <stdlib.h>

/* declare function prototypes */
int increment_counter (int count, int val);
int get_card_val (int val, char card_name[]);

/*
 * Main function
 * Loops, prompting user for card input
 * Ends when user inputs 'X'
 */
int main (){
	char card_name[3];
	int count =0;
	int val;
	while (card_name[0] != 'X'){
		printf("Enter card name\n");
		scanf("%2s", card_name);
		
		val = get_card_val (val, card_name);
		if (val == 0)
		{
			continue;
		}

		count = increment_counter (count, val);
		printf("Current count %i\n", count);
	}
	return 0;
}

/*
 * Updates the value of count based on the value of val
 * Returns new count
 */
int increment_counter (int count, int val)
{
	if (val != 10)
	{
		count++;
	}
	else if (val == 10)
	{
		count--;
	}

	return count;
}

/*
 * Updates card val based on the name of the card
 * Returns new value
 */
int get_card_val (int val, char card_name[])
{
	switch(card_name[0])
	{
		case 'J':
		case 'Q':
		case 'K':
			val = 10;
			break;
		case 'X':
			val = 0;
		default:
			val = atoi(card_name);
			if (val < 1 || val > 10)
			{
				printf("Invalid card value. Try again\n");
				val = 0;
			}
	}

	return val;
}