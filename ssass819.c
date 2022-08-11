// Question 18
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    system("cls");

    for (i = 1; i <= 13; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            if (i == 4 && j == 8)
            {
                printf("M y S i r G ");
                j = 14;
            }

            if (i <= 4 && ((j >= 5 - i && j <= 6 + i) || (j >= 14 - i && j <= 15 + i)))
            {
                printf("* ");
            }
            else if (i > 4 && ((i + j <= 23) && (j >= i - 3)))
            {
                printf("* ");
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