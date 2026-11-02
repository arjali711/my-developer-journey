#include<stdio.h>
#include<stdlib.h>

int main()
{
	int dob;
	int age = 18;
	char gender = 'M';
	char Name[] = "Arj Ali";
	float height = 5.7;
	
	printf("Enter Your Date of Birth");
	scanf("%d", &dob);
	
	printf("My Name is %s ", Name);
	printf("\nMy Age is %d ", age);
	printf("\nMy Gender is %c ", gender);
	printf("\nMy Height is %.1f ", height);
	printf("My Date of Birth is %d", dob);
}
