#include <stdio.h>
#include <stdlib.h>

void surface_area(float);
void CubeVolume(float);

int main()
{
    float a;
    printf("Enter lenth of a side:\n");
    scanf("%f", &a);

    // call functions
    surface_area(a);
    CubeVolume(a);

    return 0;
}
// find surface areas
void surface_area(float r)
{
    float area;
    area = (2 * r) * 6;
    printf("Surface area: %f\n", area);
}
// find volume
void CubeVolume(float r)
{
    float volume;
    volume = r * r * r;
    printf("Volume: %f", volume);
}
