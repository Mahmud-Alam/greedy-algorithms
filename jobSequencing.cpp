#include<bits/stdc++.h>
using namespace std;

class Job{
    char id;
    int deadLine;
    int profit;
};

int main(){
    Job arr[10];
    int n;
    cout<<"Input Job's amount number: ";cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Input "<<i+1<<"'s Job ID no   : ";cin>>arr.id;
        cout<<"Input "<<i+1<<"'s Job DeadLine: ";cin>>arr.id;
        cout<<"Input "<<i+1<<"'s Job Profit  : ";cin>>arr.id;
        cout<<endl;
    }
}
