#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int* a, int* b) {
        int t = *a;
        *a = *b;
        *b = t;
}
int partition(int arr[], int low, int high) 
{ 
    int pivot = arr[low]; 
    int i = low - 1, j = high + 1; 
   
    while (true) 
   {
        do
        { 
            i++; 
        } while (arr[i] < pivot); 
        do
        { 
            j--; 
        } while (arr[j] > pivot); 
   
         if (i >= j) 
            return j; 
   
        swap(arr[i], arr[j]); 
    } 
} 

void quickSort(int arr[], int low, int high)
{
        if (low < high) {
                int pi = partition(arr, low, high);
                quickSort(arr, low, pi - 1);
                quickSort(arr, pi + 1, high);
        }
}
void printArray(int arr[], int size) {
        int i;
        for (i = 0; i < size; i++)
                cout << arr[i] << " ";
}

int main(int argc,char *argv[]) {
        int arr[argc-1],c;
        for(int i=1;i<argc;i++){
        arr[c]=atoi(argv[i]);
                c++;}
        quickSort(arr, 0, c - 1);
        cout << "Sorted array: \n";
        printArray(arr, c);
        return 0;
}

