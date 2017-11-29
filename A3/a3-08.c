#include <stdio.h>
int main()
{
    int array[5], i, search = 0;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    for(i = 0; i < 5; i++)
    {
        if(array[i] > search)
        {
            search = array[i];
        }
    }

    for(i = 0; i < 5; i++)
    {
        if(array[i] == search)
        {
            printf("largest number is %d at location %d", search, (i + 1));
        }
    }

    return 0;
}





