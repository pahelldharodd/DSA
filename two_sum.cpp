#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //hashmap 
        
        map<int,int> hashmap; // key = element in array | value = index
        for(int i=0;i<nums.size();i++){
            int a = nums[i]; // value at index i
            int more = target - a;
            if(hashmap.find(more) != hashmap.end() )/*here map.end() is 
            used and the whole sentance means that is more value is in 
            the map then it wont be pointing to the last iterator*/ 
            {
                return{i,hashmap[more]};
            }
            hashmap[a] = i;
        }
        return {}; 
            //two pinter approach
        int left = 0;
        int right = nums.size()-1;
        sort(nums.begin(),nums.end());
        while(left < right){
            if (nums[left] + nums[right] > target){
                right --;
            }
            else if(nums[left] + nums[right] < target){
                left ++;
            }
            else if (nums[left] + nums[right] == target){
                // return "YES";
            }

        }
        // return "NO";
    }


    
};
