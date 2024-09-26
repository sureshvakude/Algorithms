#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {11, 7, 15, 4, 3};
    int size = arr.size();
    bool alreadySortFlag = true;

    for(int i=0; i<size-1; i++){
        alreadySortFlag = true;
        for(int j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                alreadySortFlag = false;
            }
        }
        if(alreadySortFlag) break;
    }

    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return 0;
}