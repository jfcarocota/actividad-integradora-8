#include <iostream>
#include "SortingMethods.hh"

int main()
{
    std::vector<int> v = {5, 2, 4, 1, 9};
    std::vector<int> vbubblesorted = SortingMethods::BubbleSort(v);
    std::cout << "Bubble Sort: " << std::endl;
    for (int i = 0; i < vbubblesorted.size(); i++)
    {
        std::cout << vbubblesorted[i] << std::endl;
    }
    
    
    std::getchar();
}