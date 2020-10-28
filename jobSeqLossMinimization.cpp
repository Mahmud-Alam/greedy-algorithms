#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char id;
    int time;
    int loss;
    double ratio;
};
int main(){
    int n;
    Node jobList[100];
    cout<<"Input a number of n: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Input "<<i+1<<"'s Job ID no   : ";cin>>jobList[i].id;
        cout<<"Input "<<i+1<<"'s Job Loss  : ";cin>>jobList[i].loss;
        cout<<"Input "<<i+1<<"'s Job Time: ";cin>>jobList[i].time;
        jobList[i].ratio = (double)jobList[i].loss/jobList[i].time;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(jobList[j].ratio<jobList[j+1].ratio){
                Node temp = jobList[j];
                jobList[j] = jobList[j+1];
                jobList[j+1] = temp;
            }
        }
    }
    cout<<endl<<"Loss Minimize Job Sequence: ";
    for(int i=0;i<n;i++){
        cout<<jobList[i].id<<"  ";
    }
    cout<<endl;
}
