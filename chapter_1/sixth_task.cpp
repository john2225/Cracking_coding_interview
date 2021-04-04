#include <iostream>
#include <string>

const std::string& strCompression(std::string&);

int main()
{
    std::string str = "aabcccccaaa";
    std::cout << strCompression(str) << std::endl;
    return 0;
}

const std::string& strCompression(std::string& str)
{
    std::string str2;
    int size = str.length();
    for(int i = 0; i < size; ++i)
    {
        int count = 1;
        while((i < size - 1) && (str[i] == str[i + 1]))
        {
            ++count;
            ++i;
        }
        str2 += str[i];
        str2 += std::to_string(count);
    }
    if(size < str2.length())
    {
        return str;
    }
    else
    {
        str = str2;
    }
    return str;
}
