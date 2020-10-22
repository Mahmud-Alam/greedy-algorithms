#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, start[100],finish[100];
    cout<<"Input activities: ";cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<"'s activity's Start Time : ";cin>>start[i];
        cout<<i+1<<"'s activity's Finish time: ";cin>>finish[i];
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(finish[j]>finish[j+1]){
                int temp = finish[j];
                finish[j] = finish[j+1];
                finish[j+1] = temp;

                int temp2 = start[j];
                start[j] = start[j+1];
                start[j+1] = temp2;
            }
        }
    }
//    cout<<endl;
//    for(int i=0;i<n;i++){
//        cout<<start[i]<<"   ";
//        cout<<finish[i]<<endl;
//    }

    cout<<endl<<endl;
    int count = 1;
    cout<<"("<<start[0]<<","<<finish[0]<<")"<<endl;
    for(int i=1;i<n;i++){
        if(start[i]>=finish[count-1]){
            count++;
            cout<<"("<<start[i]<<","<<finish[i]<<")"<<endl;
        }
    }

    cout<<endl<<"Maximum Numbers of activities: "<<count<<endl;
}
