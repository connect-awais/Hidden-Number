#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main()
{
    int grid[3][3], hiddennumber, guess, found=0;
    int row, col;

    srand(time(0));
    
    printf("3x3 Grid:\n\n");
    
    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            grid[row][col]=rand() % 100 + 1;
            printf("%2d ",grid[row][col]);
        }
        printf("\n");
    }

    hiddennumber=grid[rand() % 3][rand() % 3];

    printf("\nTry to find the hidden number in the grid!\n");

    do
    {
        printf("\nEnter your guess:");
        scanf("%d",&guess);

        if(guess == hiddennumber)
        {
            printf("\nCongratulations!You find the hidden number: %d",hiddennumber);
            found = 1;
        }

        else
        {
            printf("\nError!Try Again");
        }
    }
    while(!found);
    getch();
}