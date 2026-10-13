#include <stdio.h>

int biggest2(void) {
    int a, b;

    printf("Please Enter Two different values\n");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d Is Largest\n", a);
    }
    else if (b > a)
    {
        printf("%d is Largest\n", b);
    }
    else
    {
        printf("Both are Equal\n");
    }

    //return 0;
}
