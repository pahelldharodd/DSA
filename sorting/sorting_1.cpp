#include<bits/stdc++.h>
using namespace std;

void selection_sort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        int min =i;
        for(int j=i;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }


}

void bubble_sort(int n,int arr[]){
    for(int i=n;i>0;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

}
int swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    return a,b;

}
void insertion_sort(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=i; j>0 && arr[j-1]>arr[j] ; j--){
            swap(arr[j-1],arr[j]);            
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(n,arr);
    cout<<"selection sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubble_sort(n,arr);
    cout<<"bubble sort: "; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertion_sort(n,arr);
    cout<<"bubble sort: "; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
;
}