#ifndef MY_CLASS
#define MY_CLASS
#include <iostream>
class Reader 
{
    public:
    void read()
    { 
        std::string text = "";
        std::cout << "Podaj ciąg: ";
        std::cin >> text;

        int converted_value = 0;
        try
        {
            converted_value = std::stoi(text);
        }
        catch(const std::invalid_argument& e)
        {
            std::cout << "invalid argument detected" << std::endl;
            std::cout << text << std::endl;
            return;
        }
        catch(const std::out_of_range& e)
        {
            std::cout << "out of range" << std::endl;
            return;
        }

        std::cout << converted_value << std::endl;
    }
};
#endif