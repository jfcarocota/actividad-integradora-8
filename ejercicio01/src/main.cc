#include <iostream>
#include "SortingMethods.hh"

int main()
{
    std::vector<int> v = {7, 8, 5, 2, 4, 1, 9, 3, 6};
    int fv[] = {7, 8, 5, 2, 4, 1, 9, 3, 6};
    std::vector<int> vbubblesorted = SortingMethods::BubbleSort(v);
    std::vector<int> vcocktrailsorted = SortingMethods::CocktailSort(v);
    std::vector<int> vinsertionsorted = SortingMethods::InsertionSort(v);
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434}; 
    int n = sizeof(arr)/sizeof(arr[0]); 


    std::cout << "Bubble Sort: " << std::endl;
    for (int i = 0; i < vbubblesorted.size(); i++)
    {
        std::cout << vbubblesorted[i] << " ";
    }

    std::cout << "\nCocktail Sort: " << std::endl;
    for (int i = 0; i < vcocktrailsorted.size(); i++)
    {
        std::cout << vcocktrailsorted[i] << " ";
    }
    
    std::cout << "\nInsertion Sort: " << std::endl;
    for (int i = 0; i < vinsertionsorted.size(); i++)
    {
        std::cout << vinsertionsorted[i] << " ";
    }
    std::cout << "\nBucket Sort: " << std::endl;
    SortingMethods::BucketSort(arr, n); 
  
    for (int i=0; i<n; i++) 
       std::cout << arr[i] << " "; 
    std::getchar();
    return 0;
}