#include<bits/stdc++.h>
using namespace std;

int main(){
    int amount,n,coin[100],change[100] = {0};
    cout<<"How many types of coin you have? : "; cin>>n;
    cout<<endl<<"Input value of coins"<<endl;
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }

    int flag = 0;
    for(int i=0;i<n-1;i++){                         //Need to Sort first
        for(int j=0;j<n-i-1;j++){
            if(coin[j]<coin[j+1]){
                int temp = coin[j];
                coin[j] = coin[j+1];
                coin[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) break;
    }

    cout<<endl<<"After sort: ";
    for(int i=0;i<n;i++){
        cout<<coin[i]<<"   ";
    }

    cout<<endl<<endl<<"What amount you want to change? : "; cin>>amount;
    int i = 0;
    while(amount>0){
        int value = amount/coin[i];
        change[i] = value;
        amount = amount - coin[i]*value;
        i++;
    }
    cout<<endl;
    for(int i=n-1;i>=0;i--){                                            //print reverse order
        if(change[i]!=0){
            cout<<setfill(' ')<<setw(6)<<coin[i]<<" Taka : ";           //set a gap for arrange numbers
            cout<<setfill(' ')<<setw(3)<<change[i]<<" times"<<endl;
        }
    }

}
