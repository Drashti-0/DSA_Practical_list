/*

ITERATIVE

#include <iostream>
using namespace std;

int bs(int arr[], int search, int l, int h)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (search == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] < search)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 5;
    int search = 40;

    int ans = bs(arr, search, 0, n);
    if (ans != -1)
    {
        cout << "in this!! " << ans;
    }
    else
    {
        cout << "NOT HERE !!";
    }

    return 0;
}*/



#include <iostream>
using namespace std;


//RECURSIVE

int bs(int arr[],int search,int l,int h){

     if(l>h)
    {
        return -1;
    }

    int mid =(l+h)/ 2;

    if (search==arr[mid]){
        return mid;
    }

    else if (arr[mid]<search){
        return bs(arr,search,mid+1,h);
    }

    else{
        return bs(arr,search,h,mid-1);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n=5;
    int search = 40;

    int ans = bs(arr,search,0,n);

    if (ans != -1){
        cout << "in this!! " << ans;
    }
    else{
        cout << "NOT HERE !!";
    }


    
    
    
    return 0;
}
