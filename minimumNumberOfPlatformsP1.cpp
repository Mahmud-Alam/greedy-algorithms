

//Error Solved:______________________________________________________________________________________
//same arrival and departure value can input now, and given answer from code is right.
//Just check the departure (If condition) before than arrival (If condition)
//So same value can not increase arrival value, because first it has to decrease the departure value.
//This is how the, the extra arrival not added in MAX, and CORRECT Answer is given. ^_^ ^_^ ^_^



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,max=0,m=0,arr[100],dep[100],timeList[200];
    cout<<"Input a number of n: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<i+1<<" train's Arrival time  : ";cin>>arr[i];
        cout<<i+1<<" train's Departure time: ";cin>>dep[i];
        timeList[m] = arr[i];
        m++;
        timeList[m] = dep[i];
        m++;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            if(dep[j]>dep[j+1]){
                int temp = dep[j];
                dep[j] = dep[j+1];
                dep[j+1] = temp;
            }
        }
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(timeList[j]>timeList[j+1]){
                int temp = timeList[j];
                timeList[j] = timeList[j+1];
                timeList[j+1] = temp;
            }
        }
    }
    int a=0,d=0;
    for(int i=0;i<m;i++){
        if(timeList[i]==dep[d]){                            //first departure if condition check;
            count--;
            d++;
        }
        else if(timeList[i]==arr[a]){                      //then, arrival if condition check;
            count++;
            if(max<count) max = count;
            a++;
        }
    }
    cout<<endl<<"Minimum number of platforms: "<<max<<endl;
}
