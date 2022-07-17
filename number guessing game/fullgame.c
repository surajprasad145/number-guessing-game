#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// the stdlib. h and time. h are standard libaries for the rand and time
 
int main()
{
	int num, numguessed, nguess=1;
	srand(time(0)); //return time in seconds
	num = rand()%100+1;// gives random numbers
	printf("start guessing the number \n");
	//lets start the loop
	do {
		printf("the number between 1-100 is : \n") ;
		scanf("%d", &numguessed) ;
		if(numguessed>num) {
		printf("please enter the lower number\n") ;
		}
		else if (numguessed<num) {
			printf("enter the bigger number please\n") ;
			}
			else{
				printf("the number is gussed after %d attempts\n", nguess) ;
				}
				nguess++;
				}while(numguessed!=num) ;
	return 0;
}