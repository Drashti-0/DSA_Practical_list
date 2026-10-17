#include<iostream>
using namespace std;

/*
iterative 

int main(){

    string a[5]={"np001","nq002","nr003"};
    string target="np001";

    for(int i=0;i<3;i++){
        if(a[i]==target){
            cout<<i<<endl;
        }
    }
} */

int ls(string a[], int i, int n, string target)
{
    if(i == n)
    {
        return -1;
    }

    if(a[i] == target)
    {
        return i;
    }

    return ls(a, i+1, n, target);
}


int main()
{
    string a[5] = {"np001","nq002","nr003"};
    string target = "np001";

    cout << ls(a,0,3,target);

    return 0;
}



