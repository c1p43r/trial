#include <stdio.h>
int main()
{
    int n, i, range;

    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("Enter the range: ");
    scanf("%d", &range);

    for(i=1; i <= range; i++)
    {
        printf("%2d * %2d = %2d \n", n, i, n*i);
    }

    return 0;
}
