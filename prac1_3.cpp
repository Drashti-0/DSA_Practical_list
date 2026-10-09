#include<iostream>
using namespace std;

int main(){

    string s="This is CSPIT CHARUSAT";

   int l=s.length();
   int count=0,s=0;

   for(int i=0;i<s.length();i++){
    if(s[i]==' '||s[i]=='\n'){
        if(count>s){
            s=count;
            count=0;
        }

        else{
            count++;

            printf(" ",count);
        }
    }
   }





}


