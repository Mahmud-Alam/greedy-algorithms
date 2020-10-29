#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr1[100],arr2[100],t1[100],t2[100];
    cout<<"Input array size: ";cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        t1[i] = arr1[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
        t2[i] = arr2[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(t1[j]>t1[j+1]){
                int temp = t1[j];
                t1[j] = t1[j+1];
                t1[j+1] = temp;
            }
            if(t2[j]>t2[j+1]){
                int temp = t2[j];
                t2[j] = t2[j+1];
                t2[j+1] = temp;
            }
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(t1[i]!=t2[i]){
            int result = t1[i] - t2[i];
            if(result<0) result*=-1;
            count+=result;
        }
    }
    cout<<endl<<"Minimum Operations to make Array Equal is: "<<count<<endl;
}
