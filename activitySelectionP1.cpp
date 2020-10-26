#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int start;
    int finish;
    bool flag = false;
};

Node* activitySelection(int n, Node activity[], Node selection[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(activity[j].finish>activity[j+1].finish){
                Node temp = activity[j];
                activity[j] = activity[j+1];
                activity[j+1] = temp;
            }
        }
    }
    int i=0, s=1;
    selection[i]=activity[i];
    for(int j=1;j<n;j++){
        if(activity[j].start>=activity[i].finish){
            selection[s] = activity[j];
            s++;
            i = j;
        }
    }

    return selection;
}

int main(){
    int n;
    Node activity[100], selection[100];
    cout<<"Input numbers of activities: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<i+1<<" activity's start time : ";cin>>activity[i].start;
        cout<<i+1<<" activity's finish time: ";cin>>activity[i].finish;
        activity[i].flag = true;
    }
    Node* SELECTION = activitySelection(n,activity,selection);
    cout<<endl<<"_____Selected Activity Lists_____"<<endl<<endl;

    int i=0;
    while(SELECTION[i].flag!=false){
        cout<<" ("<<SELECTION[i].start<<","<<SELECTION[i].finish<<")"<<endl;
        i++;
    }
    cout<<endl<<"Maximum numbers of Activity selection is: "<<i<<endl;

}
