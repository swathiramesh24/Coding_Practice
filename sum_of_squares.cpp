//Write a program that takes two integers N and M (N ≤ M) and prints the sum of squares of all numbers in the range [N, M].

//CODE:

#include<iostream>

int sumOfSquares(int a, int b)
{
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        sum += i*i;
    }
    return sum;
}

int main()
{
    int N,M;
    std::cout<< "Enter the starting range,N:";
    std::cin>>N;
    
    std::cout<< "Enter the ending range,M:";
    std::cin>>M;
    
    int result=sumOfSquares(N,M);
    
    std::cout<< '\n' << "The of sqaures of numbers between " << N << " and " << M << " is " << result;
    return 0;
}
