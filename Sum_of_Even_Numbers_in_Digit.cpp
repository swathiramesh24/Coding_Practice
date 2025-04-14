//Compute the sum of even numbers in the entered digit

//CODE:

#include<iostream>

int sumOfEven(int n)
{
    int sum = 0;
    while(n != 0)
    {
        int a = n%10;
        if(a%2==0)
        {
            sum += a;
        }
        n=n/10;
    }
    return sum;
}

int main()
{
    int N;
    std::cout << "Enter a number:";
    std::cin >> N;
    
    int result = sumOfEven(N);
    
    std::cout << "The sum of even digits in " << N << " is " << result;
    return 0;
}
