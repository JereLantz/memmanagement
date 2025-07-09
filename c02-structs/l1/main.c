#include <stdio.h>
#include <math.h>

struct Coordinates{
    int x;
    int y;
    int z;
};

float calculateDistance(struct Coordinates coords1, struct Coordinates coords2);

int main(){
    struct Coordinates coords1;
    coords1.x = 3;
    coords1.y = 5;
    coords1.z = 15;

    struct Coordinates coords2;
    coords2.x = 5;
    coords2.y = 14;
    coords2.z = 9;

    float distance = calculateDistance(coords1, coords2);
    printf("Distance between coords 1 and 2 is %f\n", distance);

    return 0;
}

float calculateDistance(struct Coordinates coords1, struct Coordinates coords2) {
    return sqrtf(pow((float)(coords1.x - coords2.x), 2) + pow((float)(coords1.y-coords2.y), 2) + pow((float)(coords1.z-coords2.z), 2));
}
