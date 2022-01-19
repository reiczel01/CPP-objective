#ifndef MY_CLASS
#define MY_CLASS
#include <iostream>
#include <fstream>
#include<bits/stdc++.h>

class Count
{
private:

public:

    virtual void add()=0; //czystowirtualna

    virtual void sub()=0;

    virtual void mul()=0;

    virtual void dev()=0;
};

class Ten : public Count
{
private:

public:

    virtual void add()
    {
        float a;
        float b;
        std::cout << "Podaj pierwszą liczbę: ";
        std::cin >> a;
        std::cout << "Podaj drugą liczbę: ";
        std::cin >> b;
        std::cout << "Wynik to: " << a+b << std::endl;

    }

    virtual void sub()
    {
        float a;
        float b;
        std::cout << "Podaj pierwszą liczbę: ";
        std::cin >> a;
        std::cout << "Podaj drugą liczbę: ";
        std::cin >> b;
        std::cout << "Wynik to: " << a-b << std::endl;
    }

    virtual void mul()
    {
        float a;
        float b;
        std::cout << "Podaj pierwszą liczbę: ";
        std::cin >> a;
        std::cout << "Podaj drugą liczbę: ";
        std::cin >> b;
        std::cout << "Wynik to: " << a*b << std::endl;

    }

    virtual void dev()
    {
        float a;
        float b;
        std::cout << "Podaj pierwszą liczbę: ";
        std::cin >> a;
        std::cout << "Podaj drugą liczbę: ";
        std::cin >> b;
        std::cout << "Wynik to: " << a/b << std::endl;

    }

};

class Bin : public Count
{
private:
std::string addTwoStrings(std::string a, std::string b){
    std::string result = ""; // Initialize result
    int s = 0;          // Initialize digit sum

    // Traverse both strings starting from last
    // characters
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        // Comput sum of last digits and carry
        s += ((i >= 0)? a[i] - '0': 0); //111 s=3
        s += ((j >= 0)? b[j] - '0': 0); // 11 s=4

        // If current digit sum is 1 or 3, add 1 to result
        result = char(s % 2 + '0') + result;

        // Compute carry
        s /= 2;

        // Move to next digits
        i--; j--;
    }
    return result;
}
public:

    virtual void add()
    {
        std::string a;
        std::string b;

        std::cout << "Podaj pierwszą liczbę: ";
        std::cin >> a;
        std::cout << "Podaj drugą liczbę: ";
        std::cin >> b;

        std::string result = addTwoStrings(a,b); // Initialize result

        std::cout << "wynik: " << result << std::endl;
    }

    virtual void sub()
    {
        std::string a;
        std::string b;

        std::cout << "Podaj pierwszą liczbę: ";
        std::cin >> a;
        std::cout << "Podaj drugą liczbę: ";
        std::cin >> b;

        std::string result = ""; // Initialize result
        int s = 0;          // Initialize digit sum

        // Traverse both strings starting from last
        // characters
        int i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 || j >= 0 || s == 1)
        {
            // Comput sum of last digits and carry
            s += ((i >= 0)? a[i] - '0': 0); //111 s=3
            s += ((j >= 0)? b[j] - '0': 0); // 11 s=4

            // If current digit sum is 1 or 3, add 1 to result
            result = char(s % 2 + '0') + result;

            // Compute carry
            s /= 1;

            // Move to next digits
            i--; j--;
        }
        std::cout << "wynik: " << result << std::endl;
    }

    virtual void mul()
    {
        std::string a;
        std::string b;

        std::cout << "Podaj pierwszą liczbę: ";
        std::cin >> a;
        std::cout << "Podaj drugą liczbę: ";
        std::cin >> b;

        std::string result = ""; // Initialize result
        int s = 0;          // Initialize digit sum
        std::vector<std::string> tabOfString;
        // Traverse both strings starting from last
        // characters
        int i = a.size() - 1, j = b.size() - 1;
        int shorterNumberSize = i;
        int longerNumberSize;
        std::string shorterNumber;
        std::string longerNumber;
        if(i<j){
            shorterNumberSize = i;
            shorterNumber = a;
            longerNumberSize = j;
            longerNumber = b;
        }else
        {
            shorterNumberSize = j;
            shorterNumber = b;
            longerNumberSize = i;
            longerNumber = a;
        }
        /*
         * 111
         *  11
         *  ----
         */
        int oldLongerNumberSize = longerNumberSize;
        int oldShorterNumberSize = shorterNumberSize;
        while (shorterNumberSize >= 0)
        {
            longerNumberSize = oldLongerNumberSize;

            while(longerNumberSize >= 0)
            {
                int temp1 = longerNumber[longerNumberSize] - '0';
                int temp2 = shorterNumber[shorterNumberSize] - '0';
                char temp = (temp1*temp2) + '0';
                result = temp + result;
                --longerNumberSize;
            }

            std::cout << "wynik: " << result << std::endl;
            int countOfCharToAdd = oldLongerNumberSize - shorterNumberSize;
            while(countOfCharToAdd > 0)
            {
                result = result + '0';
                --countOfCharToAdd;
            }

            tabOfString.push_back(result);
            result="";
           --shorterNumberSize;
        }
        std::string finalResult  = "";
        if(tabOfString.size() > 1){
            finalResult = addTwoStrings(tabOfString[0], tabOfString[1]);
            for(int i = 2; i < tabOfString.size(); i++)
            {
                finalResult = addTwoStrings(finalResult, tabOfString[i]);
            }
        }else
        {
            finalResult = tabOfString[0];
        }

        std::cout << "wynik: " << finalResult << std::endl;
    }

    virtual void dev()
    {
    }
};

class Hex : public Count
{
private:


public:

    virtual void add()
    {
        int a;
        int b;
        std::cout << " Wprowadź pierwszą liczbę hexadecymalną: ";
        std::cin>>std::hex>>a;
        std::cout << " Wprowadź drugą liczbę hexadecymalną: ";
        std::cin>>std::hex>>b;
        std::cout<<"wynik:  "<<(a+b) ;

    }

    virtual void sub()
    {
        int a;
        int b;
        std::cout << " Wprowadź pierwszą liczbę hexadecymalną: ";
        std::cin>>std::hex>>a;
        std::cout << " Wprowadź drugą liczbę hexadecymalną: ";
        std::cin>>std::hex>>b;
        std::cout<<"wynik:  "<<(a-b) ;
    }

    virtual void mul()
    {
        int a;
        int b;
        std::cout << " Wprowadź pierwszą liczbę hexadecymalną: ";
        std::cin>>std::hex>>a;
        std::cout << " Wprowadź drugą liczbę hexadecymalną: ";
        std::cin>>std::hex>>b;
        std::cout<<"wynik:  "<<(a*b) ;
    }

    virtual void dev()
    {
        int a;
        int b;
        std::cout << " Wprowadź pierwszą liczbę hexadecymalną: ";
        std::cin>>std::hex>>a;
        std::cout << " Wprowadź drugą liczbę hexadecymalną: ";
        std::cin>>std::hex>>b;
        std::cout<<"wynik:  "<<(a/b) ;
    }
};

#endif
// 1011
//10110
//10
//00110
// 10
//00110
//  10
//00010
//   10