#include <iostream>

bool checkPermutation(const std::string&, const std::string&);

int main()
{
    std::string str1 = "estt";
    std::string str2 = "test";
    
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    
    if(checkPermutation(str1, str2))
    {
        std::cout << "Strings are permutated" << std::endl;
    }
    else
    {
        std::cout << "Strings are NOT permutated" << std::endl;
    }
    return 0;
}

bool checkPermutation(const std::string& str1, const std::string& str2)
{
    const size_t size1 = str1.length();
    const size_t size2 = str2.length();
    
    if(size1 != size2)
    {
        return false;
    }
    
    for(int i = 0; i < size1; ++i)
    {
        if(str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}

