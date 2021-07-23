/**
 * @file RangeAndCoefficientofRangeofArray.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-23
 * 
 * @copyright Copyright (c) 2021
 * Range and Coefficient of range of Array
 * task : finding range, coefficient of range of the given array
 * range = (max-min) // diff btw max and min value in distribution
 * coefficient of range = (max-min)/(max+min)
 * 
 */
#include<iostream>
using namespace std;
// basic structure of the code!
// float getMin(float a[],int n){
// }

// float getMax(float a[],int n){
// }

// void findRangeAndCoefficient(float a[], int n){
// }

// int main(){
// }
// 3 funtions and 1 main method
float getMin(float a[],int n){
    float res = a[0];
    for (int i = 0; i < n; i++)
    {
        res = min(res, a[i]);
    }
    return res;
}
float getMax(float a[],int n){
    float res = a[0];
    for (int i = 0; i < n; i++)
    {
        res = max(res, a[i]);
    }
    return res;
}
void findRangeAndCoefficient(float a[], int n){
    float min = getMin(a,n);
    float max = getMax(a,n);
    float range = max - min;
    float coef = range/(max+min);
    cout<< "Range: "<< range<<endl;
    cout<<"Coefficient of range= "<< coef<<endl;

}
int main(){
    float a[] = {5,10,15};
    int n = sizeof(a)/sizeof(a[0]);
    findRangeAndCoefficient(a,n);
    return 0;    
}