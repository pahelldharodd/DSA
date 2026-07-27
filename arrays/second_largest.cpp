#include <bits/stdc++.h>
using namespace std;

int slargest(int arr[],int n){
    int largest = arr[0];
    int sslargest = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            sslargest = largest;
            largest =arr[i];
        }
        else if(arr[i]<largest && arr[i]> sslargest){
            sslargest = arr[i];
        }
    }
    return sslargest;
}

int ssmallest(int arr[],int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main(){
    int arr[]={1,2,4,5,6};

    cout<<"second largest: "<<slargest(arr,5)<<endl;
    cout<<"second smallest: "<<ssmallest(arr,5);
}