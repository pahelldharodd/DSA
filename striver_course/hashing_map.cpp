#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // precompute map
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    //iterate in the map
    int temp_max =0;
    int max;
    int temp_min = n;
    int min;
    for(auto it: mpp){

        cout<<it.first<<" -> "<<it.second<<endl;
        //max
        if(it.second > temp_max){
            temp_max = it.second;
            max = it.first;
        }
        if (it.second <= temp_min) {
            temp_min = it.second;
            min=it.first;
        }
    }

    cout<<"max frequency element is "<<max<<endl;
    cout<<"min frequency element is "<<min<<endl;
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;


    }

}

//TIME COMPLEXOTY
// NORMAL MAP
// STORING + FETCHING --> LOG(N) --> avg+best+worst
// UNORDERED MAP 
// STORING+FETCHIING --> O(1) --> avg+best | O(N) --> worst

/**
 * always use unordered map first IF --> time limit exceeded
 * THEN use normal ordered map
 * 
 * */ 