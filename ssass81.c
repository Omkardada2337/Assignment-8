// Question 1
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)  
                printf("* ");
        printf("\n");
    }

    getch();
    return 0;
}