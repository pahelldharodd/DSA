#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){

    int left, right;
    left = low;
    right = mid+1;
    vector<int> temp;

    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left ++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i= low;i<=high;i++){
        arr[i] = temp[i-low];
    }
    

}

void merge_sort(int arr[],int low,int high){

    // BASE CASE
    if (low >= high) return;
    // int mid = (high+low)/2;
    //better mid calculation

    int mid = low + (high-low)/2;

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    merge(arr,low,mid,high);

}

void recursive_bubble_sort(int arr[],int n){

    if (n ==1 ) return;
    int did_swap = 0;

    for(int j=0;j<n-1;j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);

            did_swap = 1;
        }
    }
    if (did_swap == 0) return; // no swap made thus already sprted
    
    recursive_bubble_sort(arr,n-1);


}

void recursive_insertion_sort(int arr[],int n,int i){
    if(i == n) return;
    for(int j = i ;j>0 && arr[j-1]>arr[j];j--){
        swap(arr[j-1],arr[j]);
    }
    recursive_insertion_sort(arr,n,i+1);
    
}
int main(){

    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    cout<<"merge sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    recursive_bubble_sort(arr,n);
    cout<<"recursive bubble sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;

    recursive_insertion_sort(arr,n,0);
    cout<<"recursive insertion sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;

}