#include <iostream>
#include <vector>
using namespace std; 

bool isValid(vector<int> arr,int allowPages,int n,int m){
    int student=1,pages = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > allowPages){
            return false;
        }

        if(pages+arr[i] <= allowPages){
            pages += arr[i];
        }else{
            student++;
            pages = arr[i];
        }
    }

    return student <= m;
}

int allocateBooks(vector<int> arr,int n,int m){
    if(n<m){
        return -1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int st = 0;
    int end = sum;
    int ans = -1;

    while (st <= end){
        int mid = st + (end-st)/2;
        if(isValid(arr,mid,n,m)){  //Left
            ans = mid;
            end = mid-1;
        }else{  //Right
            st = mid+1;
        }
    }
    
    return ans;
}

int main(){
    vector<int> arr = {2,1,3,4}; //number of pages of array
    int n = 4; //number of books
    int m = 2; //number of students

    cout<<"Ans:"<<allocateBooks(arr,n,m)<<endl;

    return 0;
}