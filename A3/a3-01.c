#include <stdio.h>
int main()
{
    int array[5], i;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}
