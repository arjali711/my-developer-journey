
#include <stdio.h>

int main()
{
    int start, end, sum = 0, count = 0;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    if (start > end)
    {
        printf("Error: Start must be less than or equal to end.");
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            if (i % 6 == 0 && i % 9 != 0)
            {
                printf("%d ", i);
                sum = sum + i;
                count++;
            }
        }

        printf("\nCount: %d", count);
        printf("\nSum: %d", sum);
    }

    return 0;
}

