 // Question 13
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j, k;
    system("cls");

    for (i = 1; i <= 7; i++)
    {
        k = 64;
        for (j = 1; j <= 13; j++)
        {
            (j < 8) ? k++ : k--; //VERY VERY IMPORTANT
            if (j <= 8 - i || j >= 6 + i)
            {
                printf("%c ", k);
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
