#include <stdio.h>
int main()
{
    int array[5], i, j, key;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    for (j = 1; j < 5; j++)
    {
        key = array[j];
        i = j - 1;
        while (i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = key;
    }
    for(i = 4; i >= 0; i--)
        printf("%d\t", array[i]);

    return 0;
}






