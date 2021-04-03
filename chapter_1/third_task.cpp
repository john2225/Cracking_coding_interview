#include <iostream>
#include <string>

const std::string& URLify(std::string&);

int main()
{
    std::string str = "Mr John Smith  ";
    str = URLify(str);
    std::cout << str << std::endl;
    return 0;
}

const std::string& URLify(std::string& str)
{
    size_t size = str.length();
    while(str[size - 1] == ' ')
    {
        str[size - 1] = '\0';
        --size;
    }
    for(int i = 0; i < size; ++i)
    {
        if(str[i] == ' ')
        {
            str[i] = '%';
            str.insert(i + 1, "20");
        }
    }
    return str;
}
