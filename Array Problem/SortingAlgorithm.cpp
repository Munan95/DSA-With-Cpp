#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){ //O(n^2)
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){ //Array is already sorted
            return;
        }
    }

}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n = 5;
    int arr[] = {5,3,4,1,2};

    //Bubble sort
    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}