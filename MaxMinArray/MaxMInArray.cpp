#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<iostream>
int maxMinArray(int arr[], int size)
{
    int max = 0, min = 0;
    if (size == 1)
    {
        min = max = arr[0];
    }
    if (arr[0] < arr[1])
    {
        max = arr[1];
        min = arr[0];
    }
    else
    {
        max = arr[0];
        min = arr[1];
    }
    int i = 2;
    while (i < size)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
        i++;
    }
    std::cout << "minimum element" << min;
    std::cout << "max elemet" << max;
    return 0;
}
int main(){
int n;
int arr[n];
std::cout<<"enter the size of array\n";
std::cin>>n;
std::cout<<"enter the elments of array\n";
std::cin>>arr[n];
maxMinArray(arr,n);
return 0;


}