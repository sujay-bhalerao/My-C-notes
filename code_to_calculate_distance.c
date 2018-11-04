#include<stdio.h>
#include<stdlib.h>

void main()
{
  	printf("Program for calculating distance \n\n");
	  
    int speed, time, distance;

	  printf("\n Enter speed in MPH : \n");
     		scanf("%d",&speed);
	
    printf("\n Enter time in hours : \n");
		    scanf("%d",&time);

		distance = speed * time;

	  printf("\n Travelling at %d MPH for %d hours covers %d miles.\n ", speed, time, distance);

}
