/* 
      * 
    * * * 
  * * * * * 
* * * * * * * 

*/

//CODE:

#include<iostream>

int main()
{
    int rows=4;
    for(int i=0;i<=rows;i++)
    {
        for(int j=0;j<=rows-i-1;j++){
            std::cout << "  ";
        }
        for(int k=0;k<2*i-1;k++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}
