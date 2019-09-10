#pragma once
#include <iostream>
#include<vector>

class SortingMethods
{
private:
    /* data */
public:
    SortingMethods(/* args */);
    ~SortingMethods();
    
    static const std::vector<int> BubbleSort(std::vector<int>);
};

SortingMethods::SortingMethods(/* args */)
{
}

SortingMethods::~SortingMethods()
{
}

const std::vector<int> SortingMethods::BubbleSort(std::vector<int> v)
{
    int aux = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if(v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1] ;
                v[j + 1] = aux;
            }
        }
    }
    
    return v;
}
