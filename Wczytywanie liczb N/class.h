#ifndef MY_VECTOR
#define MY_VECTOR

class List
{
    private:
    int numbers[];
    std::list<int> list(numbers + sizeof(numbers) / sizeof(int));

    public:

    List():numbers
    {
        this->numbers = numbers;
    }

    int positiveOrNegativeNum(int number)
    {
        if(number<0)
        {

        }
        else
        {

        }
    }

    void display()
    {
        for(std::list<int>::iterator i = list.begin(); i != list.end(); i++)
        {
    std::cout << *i << std::endl;
        }
    }

};

#endif
