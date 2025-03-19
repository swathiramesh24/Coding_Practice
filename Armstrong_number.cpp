//Sum of cubes of digits is equal to the digit itself

#include<iostream>
#include<cmath>

int sumofCubes(int n)
{
    int sum=0;
    while(n>0)
    {
        int digit= n%10;
        sum += digit * digit * digit;
        n=n/10;
    }
    return sum;
}

void isArmstrong(int a)
{
    int cubeSum=sumofCubes(a);
    if(cubeSum==a)
    {
        std::cout<< a << " is an Armstrong Number";
    }
    else
    {
        std::cout<< a << " is not an Armstrong Number";
    }
}

int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    
    isArmstrong(n);
    return 0;
}
