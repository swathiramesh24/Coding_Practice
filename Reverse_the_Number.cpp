//Input a number and print its reverse.

//CODE

#include<iostream>

int reverseNumber(int n)
{
    int reversed = 0;
    
    while(n != 0)
    {
        int a=n%10;
        reversed = reversed * 10 + a;
        n=n/10;
    }
    return reversed;
}

int main()
{
    int N;
    std::cout << "Enter a number:";
    std::cin >> N;
    
    int result = reverseNumber(N);
    
    std::cout << "Reversed Number: " << result;
    return 0;
}
