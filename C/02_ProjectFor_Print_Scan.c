#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char character[15];
	int level;
	float HP;
	
	printf("Enter Your Hero Name: ");
	scanf("%s",&character);
	
	printf("\nEnter Your Hero's Level: ");
	scanf("%d", &level);
	
	printf("\nEnter Your Hero's HP: ");
	scanf("%f", &HP);
	
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t=========================================");
	printf("\n\t\t\t\t=\n\t\t\t\t=\n\t\t\t\t=\n\t\t\t\t=\n\t\t\t\t=\tHERO NAME IS:\t\t %s", character);
	printf("\n\n\t\t\t\t\n\t\t\t\t=\n\t\t\t\t=\n\t\t\t\t=\tHERO LEVEL:\t\t%d", level);
	printf("\n\n\t\t\t\t\tHERO's HP:\t\t%f", HP);
	printf("\n\t\t\t\t=========================================");
	
}
