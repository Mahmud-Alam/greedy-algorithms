#include<bits/stdc++.h>
using namespace std;

struct Node{
    int weight;
    int value;
    double ratio;
};

double fractionalKnapsack(int w, int n, struct Node item[]){
    double currentWeight = 0.0, finalValue = 0.0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(item[j].ratio<item[j+1].ratio){
                Node temp = item[j];
                item[j] = item[j+1];
                item[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(currentWeight+item[i].weight<w){
            finalValue+=item[i].value;
            currentWeight+=item[i].weight;
        }
        else{
            int remain = w - currentWeight;
            finalValue+=item[i].value*((double)remain/item[i].weight);
            break;
        }
    }
    return finalValue;
}

int main(){
    int n,w;
    struct Node item[100];
    cout<<"Input knapsack Weight: ";cin>>w;
    cout<<"Input a number: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Input "<<i+1<<" item's weight: ";cin>>item[i].weight;
        cout<<"Input "<<i+1<<" item's value : ";cin>>item[i].value;
        item[i].ratio = (double)item[i].value/item[i].weight;
    }

    cout<<endl<<"Possible maximum value: "<<fractionalKnapsack(w,n,item)<<endl;
}
