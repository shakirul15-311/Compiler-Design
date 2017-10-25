#include <stdio.h>
#include<conio.h>

int main()
{
    int i,j,row,col;
    printf("row:");
    scanf("%d",&row);
    printf("col:");
    scanf("%d",&col);

    for (i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("*");
        }
        printf("\n");
    }


    //getch();
    return 0;
}
