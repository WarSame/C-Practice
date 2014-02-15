/*
Graeme Cliffe
Combination Lock Solver
Given a stdio input of #1 #2 #3 #4, with
1 - number of digits on the lock, from 1 to 255
2, 3, 4 - digits for the opening code, from 0 to N-1
Print to stdio output the number of rotations required to open the lock
Lock starts at 0
For the first number, spin the lock 2 times clockwise, and then rotate it
to the code number
For the second number spin the lock a full time counter clockwise, then
spin to the code number
For the last number spin the lock clockwise to the code number
*/
#include <stdio.h>
int main(int argc, char** argv){
	int numDig;
	int openDig1, openDig2, openDig3;
	printf("%s", "Enter the lock number count and 3 code numbers(# # # #):");
	scanf("%d %d %d %d", &numDig, &openDig1, &openDig2, &openDig3);
	int spinsRequired = findSpins(numDig, openDig1, openDig2, openDig3);
	printf("%d\n", spinsRequired);
	return 1;
}
int findSpins(int numDig, int dig1, int dig2, int dig3){
	//Where a spin is a incremental change in the number of the lock
	int numSpins = 0;
	numSpins += 3*numDig;//From the required spins on #1 and #2
	numSpins += dig1;//Spin from 0 to your first digit
	 //Spin from your first digit counter clock wise to your second
	numSpins += (numDig - dig2 + dig1)%numDig;
	//Spind from your second digit to your final
	numSpins += (numDig - dig2 + dig3)%numDig;
	return numSpins;
}
