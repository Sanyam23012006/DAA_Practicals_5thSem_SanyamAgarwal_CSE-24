#include <iostream>
using namespace std;

int main(){
    
int n, i, j, temp;
cout << "Enter the Number of elements: "; cin >> n;
int arr[n];

for(i=0; i<n; i++)
{
cout << "Enter the element " << i+1 << ": "; cin >> arr[i];
}
for(j=1; j<n; j++)
{
temp = arr[j]; i = j - 1;

while(i >= 0 && arr[i] > temp)
{
 
arr[i+1] = arr[i]; i--;
}


arr[i+1] = temp;
}


cout << "Sorted array is: "; for(i=0; i<n; i++)
{
cout << arr[i] << " ";
}

cout<<"\n";
cout<<"Program executed by Sanyam Agarwal\n";
cout<<"Section: CSE-24\n";
cout<<"Roll No.: 2400320100987";

return 0;
}
