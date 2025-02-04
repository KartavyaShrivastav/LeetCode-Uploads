#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        backtrack(nums, 0, ans);
        return ans;
    }

    void backtrack(vector<int>& nums, int s, vector<vector<int>>& ans){
        if(s == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=s; i<nums.size(); i++){
            swap(nums[s], nums[i]);
            backtrack(nums, s+1, ans);
            swap(nums[s], nums[i]);
        }
    }
};