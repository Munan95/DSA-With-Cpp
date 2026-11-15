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

void selectionSort(int arr[],int n){ //O(n^2)
    for(int i = 0;i<n;i++){
        int smallest = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
    }
}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n = 7;
    int arr[] = {5,4,1,2,3,7,6};

    //Bubble sort
    // bubbleSort(arr,n);

    //Selection sort
    selectionSort(arr,n);

    printArray(arr,n);

    return 0;
}