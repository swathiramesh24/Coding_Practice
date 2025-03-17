#include<iostream>

int sumofNum(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum += i;
        }
    }
    return sum;
}

void isPerfect(int n)
{
    if(sumofNum(n)==n)
    std::cout << n << " is a perfect number";
    
    else
    {
       std::cout << n << " is not a  perfect number"; 
    }
}

int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    
    isPerfect(n);
    return 0;
}
