#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     bool canJump(vector<int>& nums) {

//         if(nums.size() == 1 && nums[0] == 0) return true;
//         if(nums.size() <= 2 && nums[0] != 0 && nums[0] <= 2) return true;
//         if(nums.size() <= 2 && nums[0] == 0) return false;

//         int i = 0;
//         while(true){
//              if(nums[i] <= nums.size()-1){
//                 i +=  nums[i];
//                 if(i == nums.size()-1) return true;
//             }else return false;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 1) return true;
        
        int reach = 0;
        
        for (int i = 0; i < n; ++i) {
            if (i > reach) return false;
            reach = max(reach, i + nums[i]);
            if (reach >= n - 1) return true;
        }
        
        return false;
    }
};

int main(){
    vector<int> array = {1,0}; 
    Solution solution;
    cout << solution.canJump(array) <<endl;
return 0;
}