#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int arr;
    int dep;
};

int main(){
    int n,k=0,count=0,max=0;
    Node time[100];
    int time_frame[200];
    cout<<"Input a number of n: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Input "<<i+1<<"'s Arrival time  : ";cin>>time[i].arr;
        cout<<"Input "<<i+1<<"'s Departure time: ";cin>>time[i].dep;
        time_frame[k] = time[i].arr;
        k++;
        time_frame[k] = time[i].dep;
        k++;
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(time[j].arr>time[j+1].arr){
                Node temp = time[j];
                time[j] = time[j+1];
                time[j+1] = temp;
            }
        }
    }

    for(int i=0;i<k-1;i++){
        for(int j=0;j<k-i-1;j++){
            if(time_frame[j]>time_frame[j+1]){
                int temp = time_frame[j];
                time_frame[j] = time_frame[j+1];
                time_frame[j+1] = temp;
            }
        }
    }

    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            if(time_frame[i]==time[j].arr){
                count++;
                if(count>max)
                    max = count;
                break;
            }
        }
        for(int h=0;h<n;h++){
            if(time_frame[i]==time[h].dep){
                count--;
                break;
            }
        }
    }
    cout<<endl<<"Minimum number of platforms: "<<max<<endl;
}
