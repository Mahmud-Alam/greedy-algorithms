#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int arr;
    int dep;
};

int main(){
    int n,count=1;
    Node time[100];
    cout<<"Input a number of n: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Input "<<i+1<<"'s Arrival time  : ";cin>>time[i].arr;
        cout<<"Input "<<i+1<<"'s Departure time: ";cin>>time[i].dep;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(time[j].arr>time[j+1].arr){
                Node temp = time[j];
                time[j] = time[j+1];
                time[j+1] = temp;
            }
        }
    }
}
