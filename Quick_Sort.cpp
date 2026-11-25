#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int p, int q){
    int pivot=arr[q];
    int i=p-1;
    for(int j=p;j<q;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[q]);
    return i+1;
}

void quick_sort(vector<int> &arr, int p, int q){
    if(p<q){
    int pivot=partition(arr,p,q);
    quick_sort(arr,p,pivot-1);
    quick_sort(arr,pivot+1,q);
    }

}

int main(){
    vector<int> arr={10,7,8,9,1,5};
    cout<<"Original Array: \n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Sorted Array: \n";
    quick_sort(arr,0,5);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Program executed by Sanyam Agarwal\n";
    cout<<"Section: CSE-24\n";
    cout<<"Roll No.: 2400320100987";

}