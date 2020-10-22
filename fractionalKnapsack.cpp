#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value,weight;
};

double fractionalKnapsack(int n, int knapsackWeight, Node arr[]){
    double currentWeight = 0.0, finalValue = 0.0;
    for(int i=0;i<n;i++){
        if((currentWeight+arr[i].weight)<=knapsackWeight){
            finalValue = finalValue + arr[i].value;
            currentWeight = currentWeight + arr[i].weight;
        }
        else{
            int extra = knapsackWeight - currentWeight;
            finalValue = finalValue + arr[i].value*((double)extra/arr[i].weight);
            break;
        }
    }
    return finalValue;
}

int main(){
    int knapsackWeight,n,i=1,v;
    double ratioArr[100];
    Node arr[100];
    cout<<"Input item numbers    : ";cin>>n;
    cout<<"Input knapsack weight : ";cin>>knapsackWeight;
    for(int i=0;i<n;i++){
        cout<<"Input your "<<i+1<<"'s item weight: ";cin>>arr[i].weight;
        cout<<"Input your "<<i+1<<"'s item value : ";cin>>arr[i].value;
        ratioArr[i] = (double)arr[i].value/arr[i].weight;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ratioArr[j]<ratioArr[j+1]){
                double temp = ratioArr[j];
                ratioArr[j] = ratioArr[j+1];
                ratioArr[j+1] = temp;

                int temp1 = arr[j].value;
                arr[j].value = arr[j+1].value;
                arr[j+1].value = temp1;

                int temp2 = arr[j].weight;
                arr[j].weight = arr[j+1].weight;
                arr[j+1].weight = temp2;
            }
        }
    }

//    cout<<endl;
//    for(int i=0;i<n;i++){
//        cout<<arr[i].value<<endl;
//        cout<<arr[i].weight<<endl;
//        cout<<ratioArr[i]<<endl;
//    }

    double finalValue = fractionalKnapsack(n,knapsackWeight,arr);
    cout<<endl<<"Possible Large value: "<<finalValue<<" units"<<endl;
}
