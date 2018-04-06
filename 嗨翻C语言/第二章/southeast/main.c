#include <stdio.h>
#include <stdlib.h>

void go_south_east(int *lat, int *lon)
{
    *lat -= 1;
    *lon += 1;
}


int main()
{
    int latitude = 32;
    int longitude = -64;

    go_south_east(&latitude, &longitude);
    printf("µ±«∞Œª÷√:[%d, %d]\n", latitude, longitude);

    return 0;
}
