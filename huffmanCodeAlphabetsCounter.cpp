#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char charr;
    int number=0;
};

int main(){
    Node arr[100];
    string str;
    cout<<"Input a string: ";getline(cin,str);
    cout<<endl;
    int i=0;
    while(str[i]!='\0'){
            int flag = 0;
        for(int j=i;j>=0;j--){
            if(arr[j].charr==str[i]){
                arr[j].number++;
                flag = 1;
            }
        }
        if(flag==0){
            arr[i].charr=str[i];
            arr[i].number++;
        }
        i++;
    }
    for(int j=0;j<i;j++){
        if(arr[j].number!=0){
            cout<<endl<<arr[j].charr<<"   "<<arr[j].number;
        }
    }
    cout<<endl<<i;
}
