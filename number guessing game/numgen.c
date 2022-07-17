#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// the stdlib. h and time. h are standard libaries for the rand and time
 
int main()
{
	int num, numguessed, nguess=1;
	srand(time(0)); //return time in seconds
	num = rand()%100+1;// gives random numbers
	printf("start guessing the number %d\n", num);
	return 0;
}