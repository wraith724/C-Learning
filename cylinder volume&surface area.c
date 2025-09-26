/*
Name:Peter Ngubiru
Reg No.:CT101/G/26455/25
Description:a program to calculate area of a cylinder
*/

#include <stdio.h>
#include <math.h> 

int main() {
    
    float radius, height;
    float volume, surface_area;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume
    volume = M_PI * pow(radius, 2) * height;

    // Calculate surface area
    surface_area = (2 * M_PI * radius * height) + (2 * M_PI * pow(radius, 2));

    // Display answer
    printf("\nVolume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);

    return 0;

}
