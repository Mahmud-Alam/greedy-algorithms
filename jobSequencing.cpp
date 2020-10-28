#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char id;
    int deadLine;
    int profit;
    bool flag = false;
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

//    for(int i=0;i<n;i++){
//        cout<<job[i].id<<"   ";
//        cout<<job[i].deadLine<<"   ";
//        cout<<job[i].profit<<"   ";
//        cout<<endl;
//    }

    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(job[i].deadLine>=j+1&&selection[j].flag==false){
                selection[j] = job[i];
                break;
            }
        }
    }
    int z=0;
    while(selection[z].flag!=false){
        cout<<selection[z].id<<"\t";
        cout<<selection[z].profit<<endl;
        z++;
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
        job[i].flag = true;
        cout<<endl;
    }

    jobSequencing(n,selection,job);
}
