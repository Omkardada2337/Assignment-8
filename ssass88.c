// Question 8
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j, k;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        k = 1;
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("%d ", (j < 5) ? k++ : k--);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}