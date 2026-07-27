#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=13;
    int array[n] = {0};
    int arr[]={2,3,2,4,5};

    for(int i=0;i<5;i++){
        array[arr[i]]+=1;

    }
    int q=5;
    for(int i=q;i>0;i--){
        cin>>q;
        cout<<array[q]<<endl;
    }
    return 0;

}
