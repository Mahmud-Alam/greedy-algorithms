#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,max=0,m=0;arr[100],dep[100],timeList[200];
    cout<<"Input a number of n: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<i+1<<" train's Arrival time  : ";cin>>arr[i];
        cout<<i+1<<" train's Departure time: ";cin>>dep[i];
        timeList[m] = arr[i];
        m++;
        timeList[m] = dep[i];
        m++;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            if(dep[j]>dep[j+1]){
                int temp = dep[j];
                dep[j] = dep[j+1];
                dep[j+1] = temp;
            }
        }
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(timeList[j]>timeList[j+1]){
                int temp = timeList[j];
                timeList[j] = timeList[j+1];
                timeList[j+1] = temp;
            }
        }
    }
}
