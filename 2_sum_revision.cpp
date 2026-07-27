#include<bits/stdc++.h>
using namespace std;

vector<int> two_sum_bf(vector<int>& nums ,int target){

    //two for loops
}
vector<int> two_sum_better(vector<int>& nums ,int target){
    map<int,int> mpp;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int more = target - nums[i];
        if(mpp.find(more) != mpp.end()){
            return {i,mpp[more]};
        }
        mpp[nums[i]] = i;
    }
    return {};
    
}
// if yes or no asked and not indices 
// more optimal than hashmap but only works if yes or no asked not the indices
// also distorts the original data
string optimal_two_sum(vector<int>& nums ,int target){ 
    int left = 0;
    int right = nums.size()-1;
    //sort the array
    sort(nums.begin(),nums.end());
    while(left<right){
        if(nums[left]+nums[right] > target){
            right --;
        }
        else if(nums[left]+nums[right] < target){
            left++;
        }
        else{
            return "YES";
        }
    }
    return "NO";
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    // two_sum_bf(nums,8);
    vector<int> ans=two_sum_better(nums,8);
    cout<<"{";
    for(int it : ans){
        cout<<it<<", ";
    }
    cout<<"}";
    cout<<endl;
    cout<<optimal_two_sum(nums,8);

}