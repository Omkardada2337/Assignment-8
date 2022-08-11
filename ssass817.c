// Question 17
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i == 1 || j == i || j == 10 - i)
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