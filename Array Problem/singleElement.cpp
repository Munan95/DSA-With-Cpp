#include <iostream>
#include <vector>
using namespace std;

int checkSingleElement(vector<int> a)
{
    int n = a.size();

    if (n == 1){
        return a[0];
    }

    int st = 0;
    int end = n - 1;
    int mid = 0;

    while (st <= end){

        mid = st + (end - st) / 2;

        if (mid == 0 || mid == n - 1){
            return a[mid];
        }

        if (a[mid - 1] != a[mid] && a[mid + 1] != a[mid]){
            return a[mid];
        }

        if (mid % 2 == 0){  //Even
            if (a[mid - 1] == a[mid]){  
                end = mid - 1;  //Left
            }else{  
                st = mid + 1;  //Right
            }
        }else{  //Odd
            if (a[mid - 1] == a[mid]){  
                st = mid + 1;  //Right
            }else{
                end = mid - 1;  //Left
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> a = {1, 1, 2, 2, 3, 3, 4, 5, 5};

    cout << checkSingleElement(a) << endl;  //Output: 4

    return 0;
}