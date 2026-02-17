#include<iostream>
using namespace std;
int main(){
    int n,key,pos=-1;
    cout<<"\nEnter the mumber of elements:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the key:";
    cin>>key;
    cout<<"\nFind the position of the key";
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<"\nNot found";
    }
    else{
        cout<<"\nFound and the index is:"<<pos;
    }
}