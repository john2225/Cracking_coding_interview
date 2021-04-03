#include <iostream>
#include <string>

bool isUniqueCharacters(const std::string& str);

int main()
{
	std::string str = "abcdefgh";
	if(isUniqueCharacters(str))
	{
		std::cout << "String has all unique characters" << std::endl;
	}
	else
	{
		std::cout << "String has duplicate characters" << std::endl;
	}
	return 0;
}

bool isUniqueCharacters(const std::string& str)
{
	const std::size_t size = str.length(); 
	for(int i = 0; i < size - 1; ++i)
	{
		for(int j = i + 1; j < size; ++j)
		{
			if(str[i] == str[j])
			{
				return false;	
			}
		}
	}
	return true;
}
 
