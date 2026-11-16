#include <iostream>
#include <vector>
using namespace std;

//Optimized
void dnfAlgo(vector<int>& arr){ //O(n)
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

int main(){
    vector<int> arr = {1,0,1,0,0,2,1,2,0,2};

    dnfAlgo(arr);

    for(int val:arr){
        cout<<val<<" ";
    }

    return 0; 
}