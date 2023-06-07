#include <stdio.h>
#include <stdlib.h>

double convertArea(double value, int from, int to);

int main() {
    double value;
    int from, to;
    printf("WELCOME TO MY UNIT CONVERTER\n");
    printf("==============================\n");
    printf("Measurements you can convert: \n");
    printf("1. Square kilometers\n");
    printf("2. Square meters\n");
    printf("3. Square miles\n");
    printf("4. Square yards\n");
    printf("5. Square feet\n");
    printf("6. Square inches\n");
    printf("7. Hectare\n");
    printf("8. Acre\n\n");
    printf("Convert from:");

    scanf("%d", &from);

    printf("Convert to: ");
    scanf("%d", &to);

    printf("Enter the value to convert: ");
    scanf("%lf", &value);

    double areaResult = convertArea(value, from, to);
    printf("------------------------------\n");
    printf("%.2f is the converted value\n", areaResult);
    printf("------------------------------");

    return 0;
}

double convertArea(double value, int from, int to) {
    double conversionRates[] = {
        1.0,           // square kilometers to square kilometers
        1000000.0,     // square meters to square kilometers
        0.386102,      // square miles to square kilometers
        1195990.0463,  // square yards to square kilometers
        10763910.4167, // square feet to square kilometers
        1550000000.0,  // square inches to square kilometers
        100.0,         // hectares to square kilometers
        247.105381    // acres to square kilometers
    };

    double result = value * conversionRates[from - 1] / conversionRates[to - 1];
    return result;
}
