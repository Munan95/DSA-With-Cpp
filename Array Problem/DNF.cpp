#include <iostream>
#include <vector>
using namespace std;

//Optimized
void sortAlgo(vector<int>& arr){ //O(n)
    int n = arr.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }else if(arr[i]==1){
            count1++;
        }else{
            count2++;
        }
    }

    int indx = 0;
    for(int i=0;i<count0;i++){
        arr[indx++]=0;
    }
    for(int i=0;i<count1;i++){
        arr[indx++]=1;
    }
    for(int i=0;i<count2;i++){
        arr[indx++]=2;
    }
}

//Optimal
void dnfAlgo(vector<int>& arr){ //O(n)
    int n = arr.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid <= high){
        if(arr[mid] ==0 ){ //0
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }else if(arr[mid] == 1){ //1
            mid++;
        }else{ //2
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}

int main(){
    vector<int> arr = {1,0,1,0,0,2,1,2,0,2,1};

    //sortAlgo(arr);

    dnfAlgo(arr);

    //print
    for(int val:arr){
        cout<<val<<" ";
    }

    return 0; 
}