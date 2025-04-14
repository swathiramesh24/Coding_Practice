//Input a temperature in Fahrenheit and convert it to Celsius

//CODE

#include<iostream>
#include<cmath>

float converter(float f)
{
    float c = (f-32.0) * (5.0/9.0);
    return c;
}

int main()
{
    float F;
    
    std::cout << "Enter the temperature (In Fahrenheit) : ";
    std::cin >> F;
    
    float result = converter(F);
    
    std::cout << "The Celsius temperature for " << F << " degree F is " << result;
    return 0;
}
