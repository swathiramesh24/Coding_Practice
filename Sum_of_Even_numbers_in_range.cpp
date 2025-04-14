//Given N and M, find the sum of all even numbers in the range [N, M]

//CODE

#include<iostream>

int sumofEven(int n, int m)
{
    int sum = 0;
    for(int i=n; i<=m; i++)
    {
        if(i%2==0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int N,M;
    
    std::cout << "Enter the starting range:";
    std::cin >> N;
    
    std::cout << "Enter the ending range:";
    std::cin >> M;
    
    int result = sumofEven(N,M);
    
    std::cout << "The sum of even digits from " << N << " to " << M << " is " << result;
    return 0;
}
