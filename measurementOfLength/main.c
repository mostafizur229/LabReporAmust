#include <stdio.h>

int main() {

    float lengthFeet, widthFeet;

    printf("Enter length in feet:  \n");
    scanf("%f", &lengthFeet);

    printf("Enter width : \n");
    scanf("%f", &widthFeet);

    float lengthMeters = lengthFeet * 0.3048;
    float widthMmeters = widthFeet * 0.3048;
    float areaMeters = lengthMeters * widthMmeters;

    printf("The area of the land is %.2f square meters.\n", areaMeters);
    return 0;
}
