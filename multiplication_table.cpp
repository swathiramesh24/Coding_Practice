//Take an integer N and print its multiplication table up to 10

//CODE:

#include<iostream>

void multiplicationTable(int n,int m)
{
    for(int i=1;i<=m;i++)
    {
        std::cout << n << " * " << i << " = " << n*i << "\n";
    }
}

int main()
{
    int N,M;
    std::cout<< "Enter a value to get the multiplication table:";
    std::cin >> N;
    
    std::cout << "Enter the ending value of multiplication:";
    std::cin >> M;
    
    multiplicationTable(N,M);
    return 0;
}
