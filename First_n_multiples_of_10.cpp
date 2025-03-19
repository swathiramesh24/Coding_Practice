/*
Write a program that takes an integer N as input and calculates the sum of the firs of 10.

Example 1:
Input: N = 5
Multiples of 10:10, 20, 30, 40, 50
Sum: 10+20+30+40+50=150

Output:
Sum of first 5 multiples of 10 is: 150

Example 2:
Input: N = 10
Multiples of 10:10, 20, 30, 40, 50, 60, 70, 80, 90, 100
Sum: 550

Output:
Sum of first 10 multiples of 10 is: 550
*/

#include<iostream>

int sumofTens(int n)
{
    return 10* ((n*(n+1))/2);
}

int main()
{
    int n;
    std::cout << "Enter a range:";
    std::cin >> n;
    
    int result = sumofTens(n);
    std::cout << "The sum of first " << n << " multiples of 10 is: " << result;
    return 0;
}
