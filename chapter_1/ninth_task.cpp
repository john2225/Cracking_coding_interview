#include <iostream>

bool isSubstring(std::string&, std::string&);

int main()
{
    std::string s1 = "waterbottle";
    std::string s2 = "erbottlewat";
    if(isSubstring(s1, s2))
    {
        std::cout << s1 << "is a rotation of " << s2 << std::endl;
    }
    else
    {
        std::cout << "There is no rotation" << std::endl;
    }
    return 0;
}

bool isSubstring(std::string& s1, std::string& s2)
{
    if((s1 == "") || (s2 == ""))
    {
        return false;
    }
    if(s1.length() != s2.length())
    {
        return false;
    }
    
    std::string temp = s1 + s1;
    return (temp.find(s2) != std::string::npos);
}
    
    
