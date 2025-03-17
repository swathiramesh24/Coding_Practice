/*
Write a program that takes two integers, N and M (N ≤ M), as input and finds the sum prime numbers in the range [N, M].

Example:

Input: N = 10, M = 20

Prime numbers in range: 11, 13, 17, 19

Sum: 11+13+17+1960

Output:

Sum of prime numbers from 10 to 20 is: 60
*/

#include<iostream>

//check prime 
bool isPrime(int n)
{
    if(n<2)
    return false;
    
    else if(n==2 || n==3)
    return true;
    
    else if(n%2==0 || n%3==0)
    return false;
    
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
    
    return true;
}

//sum of prime
int sumofPrime(int N, int M)
{
    int sum=0;
    for(int i=N; i<=M; i++)
    {
        if(isPrime(i))
        {
        sum+=i;
        }
    }
    return sum;
}

//main function
int main()
{
    int N,M;
    
    std::cout << "Enter the starting point(N):";
    std::cin >> N;
    
    std::cout << "Enter the ending point(M):";
    std::cin >> M;
    
    if(N>M || N<1 || M<1)
    {
        std::cout << "Enter a vaild range N<=M, N,M>1";
    }
    
    int sum = sumofPrime(N,M);
    std::cout << "Sum of prime numbers from " << N << " to " << M << " is " << sum;
    return 0;
}
