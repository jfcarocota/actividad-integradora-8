#include <iostream>
#include "SortingMethods.hh"

int main()
{
    std::vector<int> v = {7, 8, 5, 2, 4, 1, 9, 3, 6};
    int fv[] = {7, 8, 5, 2, 4, 1, 9, 3, 6};
    std::vector<int> arrayv = {-5, -10, 0, -3, 8, 5, -1, 10};
     float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int arrv[] = {12, 11, 13, 5, 6, 7}; 
    int arrv_size = sizeof(arr)/sizeof(arr[0]); 

    std::vector<int> vbubblesorted = SortingMethods::BubbleSort(v);
    std::vector<int> vcocktrailsorted = SortingMethods::CocktailSort(v);
    std::vector<int> vinsertionsorted = SortingMethods::InsertionSort(v);
    std::vector<int> vcountsorted = SortingMethods::CountSort(arrayv);

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
  
    for (int i = 0; i < n; i++) 
    {
       std::cout << arr[i] << " "; 
    }
     
    std::cout << "\nCount Sort: " << std::endl;
    for (int i = 0; i < vcountsorted.size(); i++)
    {
        std::cout << vcountsorted[i] << " ";
    }

    SortingMethods::MergeSort(arrv, 0, arrv_size - 1);
    std::cout << "\nMerge Sort: " << std::endl;
    for (int i = 0; i < arrv_size; i++)
    {
        std::cout << arrv[i] << " ";
    }
  
    SortingMethods::TreeSort(arrv, n); 
    std::cout << "\nBinary Tree Sort: " << std::endl;
    for (int i=0; i < arrv_size; i++) 
    {
        std::cout << arrv[i] << " "; 
    }

    SortingMethods::Radixsort(arrv, arrv_size);
    std::cout << "\nRadixSort: " << std::endl;
    for (int i=0; i < arrv_size; i++) 
    {
        std::cout << arrv[i] << " "; 
    }

    std::getchar();

    return 0;
}