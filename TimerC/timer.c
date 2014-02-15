#include <stdio.h>
#include "timer.h"
int main(int argc, char** argv) {
	printf("%s", "Enter a time length you want to count down:");
	int timerLength;
	scanf("%d", &timerLength);
	runTime(timerLength);
	return 1;
}
void runTime(int i){
	while (i>0){
		i--;
		printf("%d\n", i);
		sleep(1);
	}
	printf("%s\n", "Timer finished.");
}
