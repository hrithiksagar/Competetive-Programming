#include <iostream>
using namespace std;
/**
 * @file QuickSort.cpp
 * its divide and conquer algo
 * picks ele as pivot and partitions the given array around picked pivot
 * types of picking pivot ele:
 * 1. first ele as pivot
 * 2. last ele as pivot
 * 3. pick random ele as pivot
 * 4. pick median as pivot
 * main part of this code is PARTITION function
 * !       partition() 
 * ! its goal: 
 * * given an array and an ele "x" of array as pivot, 
 * * puts x at its ocrrect position in sorted array and
 * * pull all smaller elements before x and pull all greater elements after x.
 * ! all this is done in Linear time
 * ! Brute Force Approach:
 * pi = Partitioning Index
 * arr[pi] = its now at right place
 * low = starting index
 * high = ending index
 * quick sort method:
 *      if(low<high):
 *          pi = PARTITION(array, low, high);
 *      quicksort(array, low, pi - 1)     // Before Partition
 *      quicksort(array, pi + 1, high)    // After Partition
 * 
 * ! Partition Algorithm
 * logic: we will start at left most ele, keep rack of index of smaller or equal to ele's as i.
 * while traversing if we find a smaller ele then we swap curr ele with arr[i], else we ignore curr ele.
 * Basically: 
 * this function takes last ele as pivot
 * places it at correct pos in sorted array
 * places all smaller to left of pivot
 * and all greater to right of pivot
 * 
 */

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[], int low, int high)
{
    // pivot element which is to be placed at right position
    int pivot = a[high];
    int i = (low - 1); // Index of smaller ele and this indicates the right position of pivot found so far
        for (int j = low; j < high - 1; j++)
    {
        // if curr ele is smaller than pivot then
        if (a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

void printArray(int a[], int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
        
    }
    cout << endl;
}

int main()
{
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(a, n);
 
    return 0;
}