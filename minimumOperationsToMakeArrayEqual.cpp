#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr1[100],arr2[100],t1[100],t2[100];
    cout<<"Input array size: ";cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        t1[i] = arr1[i];
        cin>>arr2[i];
        t2[i] = arr2[i];
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
            if(arr2[j]>arr2[j+1]){
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
}
