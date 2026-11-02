#include<stdio.h>
int main()
{
	int choice,score,ns,marks;
	while(choice != 4)
	{
		printf("\n\nStudent Grade And Performance Analyzer\n\n1)Analyze Single Student\n2)Calculate Class Statistics\n3)View Grading System Rules\n4)Exit Program\n");
		printf("Enter Your Choice: ");
		scanf("%d", &choice);
		
		//choice 1
		
		if(choice ==1)
		{
			printf("Enter A single Combined Score of the Student (0-100): ");
			scanf("%d", &score);
			
			if(score <0 || score>100)
			{
				printf("\nInavlid Score Inputted PLease Enter Score Between 0-100");
			}
			
			if (score >= 80 && score <= 100)
			{
				printf("\nStudent Got An A+ Grade! ");
			}
			else if(score >= 70 && score <=79)
			{
				printf("\nStudent Got An A Grade!");
			}
			else if(score >= 60 && score <=69)
			{
				printf("\nStudent Got An B Grade!");
			}
			else if(score >= 50 && score <=59)
			{
				printf("\nStudent Got An C Grade!");
			}
			else if(score >= 40 && score <=49)
			{
				printf("\nStudent Got An D Grade!");
			}
			else if (score >= 0 && score < 40)
			{
				printf("\nStudent is Failed!");
			}
		}
		
		//choice 2
		
		if(choice == 2)
		{
			printf("How many Student Score you want to input? ");
			scanf("%d", &ns);
			int avg,high=0,low=0;
			for(int i=1; i<=ns; i++)
			{
				printf("Enter the marks for student %d: ", i);
				scanf("%d", &marks);
				
				if(i == 1)
				{
					high = marks;
					low = marks;
				}
				else
				{
					if(marks > high){
						high  = marks;
					}
					if (marks < low){
						low = marks;
					}
				}
				
				
			}
			printf("\nThe Highest Marks are %d", high);
			printf("\nThe Lowest Marks are %d", low);
		}
		
		//Choice 3
		if(choice == 3)
		{
			printf("The Grading System is as Follow: ");
			printf("\n\nMarks 80-100--Grade = A+\nMarks 70-79---Grade = A\nMarks 60-69---Grade = B\nMarks 50-59---Grade = C\nMarks 40-49---Grade = D\nMarks 0-39----Grade = F");
			
		}
		
		
	}
}
