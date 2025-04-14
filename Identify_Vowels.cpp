//Input a string and count how many vowels are in it.

//CODE

#include<iostream>
#include<string>

int findVowels(std::string a)
{
    int count = 0;
    
    for(char c : a)  //range-based for loop in C++. It's a simpler way to loop through each character in a string (or elements in any container like arrays, vectors, etc.).
    {
        c = tolower(c);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    std::string A;
    
    std::cout << "Enter a word:";
    std::getline(std::cin, A);
    
    int result = findVowels(A);
    
    std::cout << "Number of vowels in " << A << " is " << result;
    return 0;
}
