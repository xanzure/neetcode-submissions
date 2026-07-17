class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i>0 && nums[i-1] == nums[i]){continue;}
            if(nums[i] > 0){exit;}
            int front = i + 1;
            int back = nums.size() - 1;
            while(front < back)
            {
                if(front == i){front++;}
                if(back == i){back--;}
                int sum = nums[i] + nums[front] + nums[back];
                if(sum == 0){
                    result.push_back({nums[i], nums[front], nums[back]});
                    front++;back--;
                    while(front < nums.size() && nums[front]==result.back()[1]){front++;}
                    while(back > 0 && nums[back]==result.back()[2]){back--;}
                    }
                else if (sum < 0){front++;}
                else if (sum > 0){back--;}
            }
        }
        return result;
    }
};
