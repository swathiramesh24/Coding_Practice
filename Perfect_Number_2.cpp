#include<iostream>

int sumofNum(int n)
{
    int sum=1;
    for(int i=2;i*i<n;i++)      //Instead of checking till n we check till square root of n for factors
    {
        if(n%i==0)
        {
            sum += i;
            if (i != n / i) 
                sum += n / i;
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
