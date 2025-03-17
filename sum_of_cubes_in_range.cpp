/*
Write a program that takes two integers, N and M (N ≤ M), as input and calculates the cubes of all numbers in the range [N, M].

Rules

Example:

Input: N = 2, M = 4

Calculations:

2^3+3^3+4^3=8+27+64=99

Output:

Sum of cubes from 2 to 4 is: 99
*/

#include<iostream>

long long cubeofNum(int a)
{
  long long sum = (a*(a+1))/2;
  return sum*sum;
}

int main()
{
  int N,M;

  std::cout << "Enter the starting point(N):";
  std::cin >> N;

  std::cout << "Enter the ending point(M):";
  std::cin >> M;

  if(N>M || N<1 || M<1)
  {
    std::cout << "Enter a vaild range, N<=M, N and M are positive";
  }

  long long result = cubeofNum(M) - cubeofNum(N-1);
  std::cout << "Sum of cubes from " << N << " to " << M << " is " << result;
  return 0;
}
