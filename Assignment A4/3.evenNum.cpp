#include <stdio.h>

int main()
{
    int i, n;

    // Input upper limit of even number from user
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are: \n", n);

    i=2;
    while(i<=n)
    {
        printf("%d ", i);

        i += 2;
    }

    return 0;
}
