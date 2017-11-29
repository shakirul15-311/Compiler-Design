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
        if(array[i] < 10)
        {
            printf("%d\t", array[i]);
        }
    }

    return 0;
}
