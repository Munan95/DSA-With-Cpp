#include <iostream>
#include <vector>
using namespace std;

int peakIndex(vector<int> arr){
    int st =1 ;
    int end=arr.size()-2;  //{2,3,4,5,6,3,2,1}

    while (st<=end){
        int mid=st+(end-st)/2;

        if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<arr[mid]){  //right
            st=mid+1;
        }else{  //left
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={2,3,6,5,4,3,2,1};
    cout<<"Value:"<<arr[peakIndex(arr)]<<endl;
    cout<<"Index:"<<peakIndex(arr)<<endl;
    return 0;
}