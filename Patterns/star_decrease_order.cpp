/*

*****
****
***
**
*

*/

//CODE:

#include<iostream>

int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            std::cout<< "*";
        }
        std::cout<< "\n";
    }
    return 0;
}
