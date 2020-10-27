#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char id;
    int deadLine;
    int profit;
};

void jobSequencing(int n, Node selection[], Node job[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(job[j].profit<job[j+1].profit){
                Node temp = job[j];
                job[j] = job[j+1];
                job[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<job[i].id<<"   ";
        cout<<job[i].deadLine<<"   ";
        cout<<job[i].profit<<"   ";
        cout<<endl;
    }
}

int main(){
    Node job[10], selection[10];
    int n;
    cout<<"Input Job's amount number: ";cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Input "<<i+1<<"'s Job ID no   : ";cin>>job[i].id;
        cout<<"Input "<<i+1<<"'s Job DeadLine: ";cin>>job[i].deadLine;
        cout<<"Input "<<i+1<<"'s Job Profit  : ";cin>>job[i].profit;
        cout<<endl;
    }

    jobSequencing(n,selection,job);
}
