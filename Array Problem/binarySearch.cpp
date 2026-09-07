#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr,int target){
    int st=0;
    int end=arr.size()-1;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end=mid-1; //left
        }else{
            st=mid+1; //right
        }
    }

    return -1;
}

int main(){
    int n;
    cout<<"Size of array: ";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout <<"Target:";
    cin>>target;

    cout <<"Index:";
    cout <<binarySearch(arr,target)<<endl;

    return 0;
}