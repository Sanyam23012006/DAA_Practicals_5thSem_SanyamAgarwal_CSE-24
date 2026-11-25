#include <iostream>
#include <vector>
#include <utility> 
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main() {
    vector<int> data = {64, 25, 12, 22, 11};
    
    selectionSort(data);
    cout << "Sorted array: ";
    for (int val : data) {
        cout << val << " ";
    }
    
    cout<<"\n";
    cout<<"Program executed by Sanyam Agarwal\n";
    cout<<"Section: CSE-24\n";
    cout<<"Roll No.: 2400320100987";

    return 0;
}
