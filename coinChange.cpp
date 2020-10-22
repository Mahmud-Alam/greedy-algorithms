#include<bits/stdc++.h>
using namespace std;

int main(){
    int amount,n,coin[100],change[100];
    cout<<"How many types of coin you have? : "; cin>>n;
    cout<<endl<<"Input value of coins";
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    cout<<endl<<"What amount you want to change? : "; cin>>amount;
    int i = 0;
    while(amount>0){
        int value = amount/coin[i];
        change[i] = value;
        amount = amount - coin[i]*value;
        cout<<"hi";
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<change[i]<<"   ";
    }
}
