//Harshad number means the sum of digits of the number is a factor of the number


#include<iostream>
#include <cmath>

int sumofDigits(int n)
{
    n=abs(n);
    int sum=0;
    while(n>0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

void isHarshad(int a)
{
    int digitsum=sumofDigits(a);
    if(a%digitsum==0)
    {
        std::cout << a << " is a Harshad number";
    }
    
    else
    {
        std::cout << a << " is not a Harshad number";
    }
}

int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    
    isHarshad(n);
    return 0;
}
