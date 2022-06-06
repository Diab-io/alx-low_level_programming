#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0){
		printf("is positive");
	}else if (n<0){
		printf("is negative");
	}else{
		printf("is zero");
	}
	return 0;
}
