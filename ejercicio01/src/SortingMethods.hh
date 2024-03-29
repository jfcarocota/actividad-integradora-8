#pragma once
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

struct Node 
{ 
    int key; 
    struct Node *left, *right; 
}; 
  
// A utility function to create a new BST Node 
struct Node *newNode(int item) 
{ 
    struct Node *temp = new Node; 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

class SortingMethods
{
private:
    /* data */
    static void Merge(int[], int, int, int);
    static void StoreSorted(Node*, int[], int&); 
    static Node* Insert(Node*, int); 
    static int GetMax(int[], int);
    static void CountSort(int[], int, int);
public:
    SortingMethods(/* args */);
    ~SortingMethods();
    
    static const std::vector<int> BubbleSort(std::vector<int>);
    static const std::vector<int> CocktailSort(std::vector<int>);
    static const std::vector<int> InsertionSort(std::vector<int>);
    static const void BucketSort(float[], int); 
    static const std::vector<int> CountSort(std::vector<int>);
    static const void MergeSort(int[], int, int); 
    static void TreeSort(int[], int);
    static void Radixsort(int[], int); 
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

void SortingMethods::Merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0;  
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
const void SortingMethods::MergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        SortingMethods::MergeSort(arr, l, m); 
        SortingMethods::MergeSort(arr, m+1, r); 
        SortingMethods::Merge(arr, l, m, r); 
    } 
} 


void SortingMethods::StoreSorted(Node *root, int arr[], int &i) 
{ 
    if (root != NULL) 
    { 
        SortingMethods::StoreSorted(root->left, arr, i); 
        arr[i++] = root->key; 
        SortingMethods::StoreSorted(root->right, arr, i); 
    } 
} 

Node* SortingMethods::Insert(Node* node, int key) 
{ 
    /* If the tree is empty, return a new Node */
    if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = SortingMethods::Insert(node->left, key); 
    else if (key > node->key) 
        node->right = SortingMethods::Insert(node->right, key); 
  
    /* return the (unchanged) Node pointer */
    return node; 
} 
  
void SortingMethods::TreeSort(int arr[], int n) 
{ 
    struct Node *root = NULL; 
  
    // Construct the BST 
    root = SortingMethods::Insert(root, arr[0]); 
    for (int i=1; i<n; i++) 
        SortingMethods::Insert(root, arr[i]); 
  
    // Store inoder traversal of the BST 
    // in arr[] 
    int i = 0; 
    SortingMethods::StoreSorted(root, arr, i); 
} 

int SortingMethods::GetMax(int arr[], int n) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
    return mx; 
} 
  
void SortingMethods::CountSort(int arr[], int n, int exp) 
{ 
    int output[n]; 
    int i, count[10] = {0}; 
  
    for (i = 0; i < n; i++) 
        count[ (arr[i]/exp)%10 ]++; 
  
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/exp)%10 ]--; 
    } 
  
    for (i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 
  
void SortingMethods::Radixsort(int arr[], int n) 
{ 
    int m = SortingMethods::GetMax(arr, n); 
  
    for (int exp = 1; m/exp > 0; exp *= 10) 
        SortingMethods::CountSort(arr, n, exp); 
} 
