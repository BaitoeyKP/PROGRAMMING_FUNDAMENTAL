#include <stdio.h>
#include <math.h>
int main()
{
    float Weight;
    float Height;
    float BMI;
    printf("Weight(kg) : ");
    scanf("%f", &Weight);
    printf("Height(m) : ");
    scanf("%f", &Height);
    BMI = Weight / pow(Height, 2);
    if (Weight < 0 || Height < 0)
    {
        printf("ERROR");
    }
    else if (BMI >= 0 && BMI < 18.5)
    {
        printf("BMI = %.2f (Underweight)", BMI);
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        printf("BMI = %.2f (Normal Weight)", BMI);
    }
    else if (BMI >= 25.0 && BMI <= 29.9)
    {
        printf("BMI = %.2f (Overweight)", BMI);
    }
    else if (BMI >= 30.0)
    {
        printf("BMI = %.2f (Obesity)", BMI);
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}
