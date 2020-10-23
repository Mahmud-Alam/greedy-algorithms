#include<bits/stdc++.h>
using namespace std;

struct Node{
    int weight;
    int value;
    double ratio;
} item[100];

int main(){
    int n;
    cout<<"Input a number: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"input "<<i+1<<" item's weight: ";cin>>item[i].weight;
        cout<<"input "<<i+1<<" item's value : ";cin>>item[i].value;
        item[i].ratio = (double)item[i].value/item[i].weight;
    }
}
