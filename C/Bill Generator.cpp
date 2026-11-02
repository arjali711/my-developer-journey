#include<stdio.h>

int main()
{
	int u,p,d;
	printf("=======================================\n WELCOME TO BILL GENERATOR\n=======================================\n");
	printf("\nEnter the Units Consumed: ");
	scanf("%d", &u);
	
	if(u >= 1 && u <= 100)
	{
		printf("\nYou have consumed %d Units", u);
		p = u*10;
		if (p > 5000)
		{
			printf("\nYou got an Discount of 10% Your total bill is %d: ", p*0.9);
		}
		else
		{
			printf("\nYour Total Bill is %d", p);
		}
	}
	
	else if(u >= 101 && u <= 200)
	{
		printf("\nYou have consumed %d Units", u);
		p = u*15;
		d = p*0.9;
		if (p > 5000)
		{
			printf("\nYou got an Discount of 10% Your total bill is %d: ", d);
		}
		else
		{
			printf("\nYour Total Bill is %d", p);
		}
	}
	else if(u >= 201 && u <= 300)
	{
		printf("\nYou have consumed %d Units", u);
		p = u*20;
		d = p*0.9;
		if (p > 5000)
		{
			printf("\nYou got an Discount of 10% Your total bill is %d: ", d);
		}
		else
		{
			printf("\nYour Total Bill is %d", p);
		}
	}
	else if(u > 300)
	{
		printf("\nYou have consumed %d Units", u);
		p = u*25;
		d = p*0.9;
		if (p > 5000)
		{
			printf("\nYou got an Discount of 10%% Your total bill is %d: ", d);
		}
		else if (p<5000)
		{
			printf("\nYour Total Bill is %d", p);
		}
	}
	
	
}
