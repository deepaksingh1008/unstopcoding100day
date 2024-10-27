#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    int n;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int result=0;
    stack<int> st;
    st.push(abs(arr[0])); 
    for(int i=1;i<n;i++){
         if(st.empty()){
            st.push(abs(arr[i]));
         }
       else if(arr[i]<0){
          int sum = 0;
          while(!st.empty() && sum<abs(arr[i])){
            int top = st.top();
            st.pop();
            sum = sum+top;
          }
          st.push(abs(arr[i]));
       }
       else{
          st.push(arr[i]);
       }
//this is code
    }

    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    cout<<result<<endl;   
    return 0;
}