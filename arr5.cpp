#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    int max=arr[0],min=arr[0];
    int maxpos=0,minpos=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxpos=i;
        }
    }
    cout<<"The max element is:"<<max<<" "<<"and the position is:"<<maxpos<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            minpos=i;
        }
    }
    cout<<"The min element is:"<<min<<" "<<"and the position is:"<<minpos;
    return 0;
}