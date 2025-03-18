#include<iostream>
#include<cmath>

int sumofDigits(int n)
{
    n=abs(n);    //Ensures n is positive
    if(n==0)
    {
        return 0;
    }
    else return n%10 + sumofDigits(n/10);
}

void isHarshad(int n)
{
    int digitsum=sumofDigits(n);
    
    if(n%digitsum==0)
    {
        std::cout << n << " is a Harshad number";
    }
    
    else
    {
        std::cout << n << " is not a Harshad number";
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
