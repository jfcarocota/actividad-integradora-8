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
    static const std::vector<int> CountSort(std::vector<int>);
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
    std::vector<float> b[n]; 
     
    for (int i=0; i<n; i++) 
    { 
       int bi = n*arr[i]; // Index in bucket 
       b[bi].push_back(arr[i]); 
    } 
  
    for (int i=0; i<n; i++) 
       std::sort(b[i].begin(), b[i].end()); 
  
    int index = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < b[i].size(); j++) 
          arr[index++] = b[i][j]; 
} 

const std::vector<int> SortingMethods::CountSort(std::vector<int> arr) 
{
    int max = *max_element(arr.begin(), arr.end()); 
    int min = *min_element(arr.begin(), arr.end()); 
    int range = max - min + 1; 
    
    std::vector<int> count(range), output(arr.size()); 
    for(int i = 0; i < arr.size(); i++) 
        count[arr[i]-min]++; 
        
    for(int i = 1; i < count.size(); i++) 
        count[i] += count[i-1]; 
    
    for(int i = arr.size()-1; i >= 0; i--) 
    {  
        output[ count[arr[i]-min] -1 ] = arr[i];  
            count[arr[i]-min]--;  
    } 
    
    for(int i=0; i < arr.size(); i++) 
            arr[i] = output[i]; 
    return arr;
}
