#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1000,500,100,50,20,10,5,2,1};
    int tk,i=0;
    cout<<"Input a amount for changing: "; cin>>tk;
    while(tk>0){
       int change = tk/arr[i];
       if(change!=0)
        cout<<endl<<arr[i]<<" Taka: "<<change<<endl;
       tk-=arr[i]*change;
       i++;
    }
}
