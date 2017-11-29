#include <stdio.h>
int main()
{
    int array[5], i, j, key = 0, key1;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++)
    {
        if(array[i] >= key)
        {
            key = array[i];
        }
    }
    for(i = 0; i < 5; i++)
    {
        if(array[i] == key)
        {
            printf("largest number is %d at location %d", key , (i + 1));
            break;
        }
    }
    key1 = 100;
    for(j = 0; j < 5; j++)
    {
        if(array[j] <= key1)
        {
            key1 = array[j];
        }
    }
    for(j = 0; j < 5; j++)
    {
        if(array[j] == key1)
        {
            printf("smallest number is %d at location %d", key1 , (j + 1));
            break;
        }
    }
    return 0;
}






