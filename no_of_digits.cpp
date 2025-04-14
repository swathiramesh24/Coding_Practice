/*
Problem:
Input a number and count the number of digits in it.

Example:
Input: 12345
Output: Number of digits: 5
  */

//CODE:

#include<iostream>


int countDigits(int n)
{
    int count = 0;
    
    if (n == 0)
    {
        std::cout << "Enter a valid digit" << "\n";
        return 1;
    }
    
    n = std::abs(n);
    
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{
    int N;
    std::cout << "Enter a number:";
    std::cin >> N;
    
    int result = countDigits(N);
    
    std::cout << "Number of digits in " << N << " is " << result;
    return 0;
}
