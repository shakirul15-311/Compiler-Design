#include <stdio.h>
int main()
{
    int array[5], i, search, match = 0;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &search);
    printf("\n");
    for(i = 0; i < 5; i++)
    {
        if(array[i] == search)
        {
            printf("%d was found at location %d", search, (i + 1));
            match = 1;
            break;
        }
    }

    if (match == 0)

        printf("%d was not found", search);

    return 0;
}



