#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c,q,t,d,f;
	char del;
	char adr[25];
	printf("\t========================\n\tSMART SHOPPING SYSTEM\n\t========================");
	printf("\n\n1. Notebook\tRs. 100\n2. Pen\t\tRs. 30\n3. Backpack\tRs. 1500\n4. Calculator\tRs. 800\n5. HeadPhones\tRs. 2000");
	printf("\n\nEnnter Product Choice: ");
	scanf("%d", &c);
	printf("Ennter Product Quantity: ");
	scanf("%d", &q);
	
	//Notebook
	
	if(c == 1)
	{
		t = q*30;
		if(t>=1000 && t<2999)
		{
			f = t*0.95;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 5%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else if(t>3000)
		{
			f = t*0.9;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 10%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else 
		{
			f=t;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 0%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		
		printf("\n\nDo you want to Get delivery of Your Order?? (Y/N)");
		scanf(" %c", &del);
		if(del == 'Y' || del == 'y')
		{
			printf("Enter Your address: ");
			scanf(" %s", adr);
		
			printf("\nOkk!! Your Order Will be delivered to %s in Few days", adr);
		}
		else if( del == 'N' || del == 'n')
		{
			printf("\nOk You can Take Away Your order from our Nearest Branch!!");
		}
			
		printf("\n\nThanks For Shopping See you Soon!!!");
	}
	
	//Pen
	
	
	else if(c == 2)
	{
		t = q*100;
		if(t>=1000 && t<2999)
		{
			f = t*0.95;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 5%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else if(t>3000)
		{
			f = t*0.9;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 10%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else 
		{
			f=t;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 0%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		printf("\n\nDo you want to Get delivery of Your Order?? (Y/N)");
		scanf(" %c", &del);
		if(del == 'Y' || del == 'y')
		{
			printf("Enter Your address: ");
			scanf(" %s", adr);
		
			printf("\nOkk!! Your Order Will be delivered to %s in Few days", adr);
		}
		else if( del == 'N' || del == 'n')
		{
			printf("\nOk You can Take Away Your order from our Nearest Branch!!");
		}
			
		printf("\n\nThanks For Shopping See you Soon!!!");
	}
	
	//backpack
	
	else if(c == 3)
	{
		t = q*1500;
		if(t>=1000 && t<2999)
		{
			f = t*0.95;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 5%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else if(t>3000)
		{
			f = t*0.9;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 10%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else 
		{
			f=t;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 0%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		printf("\n\nDo you want to Get delivery of Your Order?? (Y/N)");
		scanf(" %c", &del);
		if(del == 'Y' || del == 'y')
		{
			printf("Enter Your address: ");
			scanf(" %s", adr);
		
			printf("\nOkk!! Your Order Will be delivered to %s in Few days", adr);
		}
		else if( del == 'N' || del == 'n')
		{
			printf("\nOk You can Take Away Your order from our Nearest Branch!!");
		}
			
		printf("\n\nThanks For Shopping See you Soon!!!");
	}
	
	//Calculator
	
	else if(c == 4)
	{
		t = q*800;
		if(t>=1000 && t<2999)
		{
			f = t*0.95;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 5%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else if(t>3000)
		{
			f = t*0.9;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 10%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else 
		{
			f=t;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 0%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		printf("\n\nDo you want to Get delivery of Your Order?? (Y/N)");
		scanf(" %c", &del);
		if(del == 'Y' || del == 'y')
		{
			printf("Enter Your address: ");
			scanf(" %s", adr);
		
			printf("\nOkk!! Your Order Will be delivered to %s in Few days", adr);
		}
		else if( del == 'N' || del == 'n')
		{
			printf("\nOk You can Take Away Your order from our Nearest Branch!!");
		}
			
		printf("\n\nThanks For Shopping See you Soon!!!");
	}
	
	
	//HeadPhones
	
	else if(c == 5)
	{
		t = q*2000;
		if(t>=1000 && t<2999)
		{
			f = t*0.95;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 5%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else if(t>3000)
		{
			f = t*0.9;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 10%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		else 
		{
			f=t;
			d = t-f;
			printf("\nSubtotal: Rs.%d\nDiscount: 0%%\nTotal Discount of Rs.%d\nAfterDiscount: Rs.%d\n\n=====================\nFinal Bill Rs.%d\n=====================", t,d,f,f);
		}
		printf("\n\nDo you want to Get delivery of Your Order?? (Y/N)");
		scanf(" %c", &del);
		if(del == 'Y' || del == 'y')
		{
			printf("Enter Your address: ");
			scanf(" %s", adr);
		
			printf("\nOkk!! Your Order Will be delivered to %s in Few days", adr);
		}
		else if( del == 'N' || del == 'n')
		{
			printf("\nOk You can Take Away Your order from our Nearest Branch!!");
		}
			
		printf("\n\nThanks For Shopping See you Soon!!!");
	}
	
	else
	{
		printf("Invalid Input Run it Again ");
	}
	
	
}
