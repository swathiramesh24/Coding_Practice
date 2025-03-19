/*
A great kingdom hides its treasure behind a three-digit secret code. The gate will open only if the code is divisible by 9.
Your task is to check whether the given three-digit number N can unlock the treasure.

Input:
N (A three-digit number)

Output:

• Print "Yes" if N is divisible by 9.

• Otherwise, print "No".

Example 1:
Input:
162

Output:
Yes
(The treasure gate opens!)

Example 2:
Input:
245

Output: 
No 
(The gate remains locked!)
*/

#include<iostream>

void isDivisibleBy9(int n)
{
    if(n%9==0)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }
}

int main()
{
    int n;
    std::cout << "Enter the code:";
    std::cin >> n;
    
    isDivisibleBy9(n);
    return 0;
}

