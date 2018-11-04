/* Sujay : code 1
 * how to find unitss in a number of dozens */

#include <stdio.h>
#include <stdlib.h>


void main()
{
	int units ,dozens; 
	
	printf("\n Enter no of dozens to be calculated in units : ");
	scanf("%d",&dozens);

	units = dozens * 12;

	printf("\n %d units are there in %d dozens \n",units, dozens);

}
