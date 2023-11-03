#include<iostream>
#include<list>
void main()
{
    for (long int i{ 174457 }; i < 174506; i++)
    {
        int k = 0;
        std::list<int> str{};
        for (long int j{ 2 }; j < (i / 2) + 1; j++)
        {
            if (i % j == 0)
            {
                k++;
                str.push_back(j);
                if (k > 2) break;
            }
        }
        if (k == 2)
        {
            for (size_t j{ 0 }; j < str.size(); j+=2)
            {
                std::cout << str[j], str[j + 1];
            }
        }
    }
       
}