#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int arr;
    int dep;
};

int main(){
    int n;
    Node time[100];
    cout<<"Input a number of n: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Input "<<i+1<<"'s Arrival time  : ";cin>>time[i].arr;
        cout<<"Input "<<i+1<<"'s Departure time: ";cin>>time[i].dep;
    }
}
