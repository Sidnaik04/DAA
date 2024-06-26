#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{10,1,7,6,14,9};
    int n=arr.size();

    for(int i=1;i<n;i++){
        int value = arr[i];

        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>value){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=value;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Best case: O(n)
// Average case: O(n^2)
// Worst case: O(n^2)