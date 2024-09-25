//program to calculate the volume and surface area of a cylinder
#include <stdio.h>

int main() {
    float radius, height, volume, surface_area;
    float pi = 3.14285;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Enter the height: ");
    scanf("%f", &height);

    volume = pi*radius*radius*height;
    printf("The volume is %.3f units cubed\n", volume);

    surface_area = (2*pi*radius*radius)+(2*pi*radius*height);
    printf("The surface area is %.3f squared units\n", surface_area);
    return 0;
}