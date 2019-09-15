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
    static const void BucketSort(float[], int); 
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

const void SortingMethods::BucketSort(float arr[], int n) 
{ 
    // 1) Create n empty buckets 
    std::vector<float> b[n]; 
     
    // 2) Put array elements in different buckets 
    for (int i=0; i<n; i++) 
    { 
       int bi = n*arr[i]; // Index in bucket 
       b[bi].push_back(arr[i]); 
    } 
  
    // 3) Sort individual buckets 
    for (int i=0; i<n; i++) 
       std::sort(b[i].begin(), b[i].end()); 
  
    // 4) Concatenate all buckets into arr[] 
    int index = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < b[i].size(); j++) 
          arr[index++] = b[i][j]; 
} 


