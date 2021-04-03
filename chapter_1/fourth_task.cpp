#include <iostream>

bool checkPalindromePermutation(const std::string& str);

int main()
{
    std::string str = "hello olleh";
    if(checkPalindromePermutation(str))
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    return 0;
}

bool checkPalindromePermutation(const std::string& str)
{
    const int SIZE = 128;
    int table[SIZE] = { 0 };
    
    for(int i = 0; i < str[i]; ++i)
    {
        table[str[i]]++;
    }
    int pos = 0;
    for(int i = 0; i < SIZE; ++i)
    {
        if(table[i] & 1)
        {
            ++pos;
        }
        if(pos > 1)
        {
            return false;
        }
    }
    return true;
}
