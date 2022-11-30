#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int randomElementInArray(int a, int b){
   return a + rand() % (b - a + 1);
}


void interchangeSort(int *arr, int n){
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n-1; j++) {
            if(arr[j] > arr[i]){
                swap(&arr[j], &arr[i]);
            }
        }
    }
}

void printArray(int* arr, int n){
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main() 
{
	srand(time(NULL));
    clock_t start, end;
    double duration;
    
    int n = 10;
    // init data
    int *arr = (int*)malloc(n);
    for (int i = 0; i < n; i++) {
        arr[i] = randomElementInArray(0, n);
    }
    
    start = clock();
    interchangeSort(arr, n);
    end = clock();
    duration = (double)(end - start) / CLOCKS_PER_SEC;
    cout<<"interchangeSort take "<<duration<<" seconds \n";
    
    printArray(arr, n);
    
    return 0;
}
