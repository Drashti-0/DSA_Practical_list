#include <iostream>
using namespace std;

int main() {
    int n;

cout <<"Enter array size";
cin>>n;

int arr[n];

cout<<"Enter array elements: ";

for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
cout<<endl;
for (int i = 0; i < n; i++) {
   cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"This is sorted array !!"<<endl;


for(int i=1;i<n;i++)
{
    int key=arr[i];
    int j;

   for(j=i-1;  j>=0 && arr[j]>key ;j--){
    arr[j+1]=arr[j];

   }

   arr[j+1]=key;

}
 for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
