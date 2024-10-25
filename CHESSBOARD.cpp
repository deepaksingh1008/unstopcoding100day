//que-https://unstop.com/code/challenge-assessment/250904?moduleId=372

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string arr;
    cin>>arr;
    int a,b;
    if(arr[0]>='a' && arr[0]<='z'){
        a = arr[0]-'a';
        b = arr[1]-'1';
    }
    else {
        a = arr[1]-'1';
        b = arr[0]-'a';
    }

    if(((a+1)%2==0 && (b+1)%2==0) || ((a+1)%2!=0 && (b+1)%2!=0)){
        cout<<"Black"<<endl;
    }

    else{
        cout<<"White"<<endl;
    }

    return 0;
}