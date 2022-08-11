// Question 18
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    system("cls");

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i <= 5 && j >= 6 - i && j <= 4 + i)
            {
                printf("* ");
            }

            else if (i > 5 && (i + j) <= 14 && j >= (i - 4))
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