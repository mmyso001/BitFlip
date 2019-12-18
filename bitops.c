/*
*Meekaeel Mysorewala
* Description: This program reads user input of a number from 0-1000, then the user picks a bit position to flip
* using the XOR operator that position is flipped and the new number is given.
*/


#include <stdio.h>

int main()
{	//local variables
	char userChoice = 'y';
	int num = 0;
	int bit = 0;
	int finalNum = 0;
	while(userChoice == 'y' || userChoice == 'Y') // prompts user for a number, uses a loop to check the bounderies
	{
		int checkerNum = 0;
		while(!checkerNum)
		{
			printf("Please choose a whole number from 0 to 1000\n");
			scanf("%d", &num);
			while(getchar()!= '\n');
			if(num >= 0 && num <= 1000)
			{
				checkerNum = 1;
			}
			else
			{
				printf("The number must be between 0 and 1000 please enter a valid number\n");
			}
		}
		int checkerBit = 0;
		while(!checkerBit) //prompts the user to enter a bit position, uses a loop to check the bounderies
		{
			printf("Please enter the position of bit you would like to change from 0-31\n");
			scanf("%d", &bit);
			while(getchar()!= '\n');
			if(bit >= 0 && bit <= 31)
			{
				checkerBit = 1;
			}
			else
			{
				printf("The position must be between 0 and 31 please enter a valid position\n");
			}
		}
		printf("Before flipping the position your number was %d\n",num);
		finalNum = num ^ (1 << bit);// uses the XOR operator to flip the nth bit and saves the new number
		printf("After flipping the %d position the result is %d\n",bit,finalNum);
		printf("Would you like to do the operation again? Enter 'Y' or 'y' if yes\n");
		scanf("%c",&userChoice);
		while(getchar()!= '\n');
	}
	return 0;
}
