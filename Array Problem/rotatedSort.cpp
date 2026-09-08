#include <iostream>
#include <vector>
using namespace std;

int rotatedSearch(vector<int> arr,int tar){
    int st=0;
    int end=arr.size()-1;

    while(st<=end){
        int mid = st+(end-st)/2;     //{2,3,4,5,6,7,0,1}
        if(arr[mid]==tar){
            return mid;
        }else if(arr[st]<=arr[mid]){ //left
            if(arr[st]<=tar && tar<=arr[mid]){
                end=mid-1; 
            }else{
                st=mid+1;
            }
        }else{ //right
            if(arr[mid]<=tar && tar<=arr[end]){
                st=mid+1; 
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2,3,4,5,6,7,0,1};
    int target = 10;

    cout <<"Index:"<<rotatedSearch(arr,target)<<endl;

    return 0;
}
