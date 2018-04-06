#include <stdio.h>
#include <stdlib.h>


int larger(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int greatest = larger(10000, 1000);
    printf("%i×î´ó\n", greatest);
    return 0;

}

