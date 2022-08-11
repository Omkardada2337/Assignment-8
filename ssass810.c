// Question 10
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j, k;
    system("cls");

    for (i = 1; i <= 4; i++)
    {
        k = 0;
        for (j = 1; j <= 7; j++)
        {
            (j < 5) ? k++ : k--; //VERY VERY IMPORTANT
            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%d ", k);
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
