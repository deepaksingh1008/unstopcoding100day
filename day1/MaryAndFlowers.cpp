// Question Link = https://unstop.com/code/challenge-assessment/262419?moduleId=372


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n;
     cin>>n;
     int t;
     cin>>t;
     vector<int> ans;
     for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans.push_back(a);
     } 
     int idx1=-1;
     int idx2=-1;
     int i=0;
     int j=n-1;
     while(i<j){
        int sum=ans[i]+ans[j];
        if(sum==t){
            idx1=i;
            idx2=j;
            break;
        }
        if(sum>t)
          j--;
        if(sum<t)
          i++;
     }
     cout<<idx1<<" "<<idx2<<endl;
    return 0;
}