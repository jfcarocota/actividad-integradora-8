#pragma once
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

class SortingMethods
{
private:
    /* data */
public:
    SortingMethods(/* args */);
    ~SortingMethods();
    
    static const std::vector<int> BubbleSort(std::vector<int>);
    static const std::vector<int> CocktailSort(std::vector<int>);
    static const std::vector<int> InsertionSort(std::vector<int>);
    static const int* BucketSort(int*);
};

SortingMethods::SortingMethods(/* args */)
{
}

SortingMethods::~SortingMethods()
{
}

const std::vector<int> SortingMethods::BubbleSort(std::vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if(v[j] > v[j + 1])
            {
                std::swap(v[j], v[j + 1]);
            }
        }
    }
    
    return v;
}

const std::vector<int> SortingMethods::CocktailSort(std::vector<int> v)
{
    int n = v.size();
    bool swapped = true; 
    int start = 0; 
    int end = n - 1; 
  
    while (swapped) { 
        swapped = false; 
  
        for (int i = start; i < end; ++i) { 
            if (v[i] > v[i + 1]) { 
                std::swap(v[i], v[i + 1]); 
                swapped = true; 
            } 
        } 
  
        if (!swapped) 
            break; 
  
        swapped = false; 
  
        --end; 
  
        for (int i = end - 1; i >= start; --i) { 
            if (v[i] > v[i + 1]) { 
                std::swap(v[i], v[i + 1]); 
                swapped = true; 
            } 
        } 

        ++start; 
    } 
    return v;
}

const std::vector<int> SortingMethods::InsertionSort(std::vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++) 
    {
        int j = i + 1;
        int tmp = v[j];

        while (j > 0 && tmp > v[j-1]) 
        {
            v[j] = v[j-1];
            j--;
        }
        v[j] = tmp;
    }
    return v;
}

const int* SortingMethods::BucketSort(int *array) 
{ 
    int size = sizeof(array)/sizeof(array[0]);
    std::vector<int> bucket[size];
   for(int i = 0; i<size; i++)  {          //put elements into different buckets
      bucket[int(size*array[i])].push_back(array[i]);
   }
   for(int i = 0; i<size; i++) {
      std::sort(bucket[i].begin(), bucket[i].end());       //sort individual vectors
   }
   int index = 0;
   for(int i = 0; i<size; i++) {
      while(!bucket[i].empty()) {
         array[index++] = *(bucket[i].begin());
         bucket[i].erase(bucket[i].begin());
      }
   }
    return array;
} 


