/* 
5 4 3 2 1
4 3 2 1
3 2 1 
2 1 
1
*/

//CODE:

#include<iostream>

int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
