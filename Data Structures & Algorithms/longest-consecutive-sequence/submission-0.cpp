class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hs;
        for(int i : nums)
        {
            hs.insert(i);
        }
        int max = 0;
        for(int n : hs)
        {
            if(hs.contains(n-1)){continue;}
            int current = n;
            int count = 1;
            while(hs.contains(n + count)){count++;}
            if (count > max){max = count;}
        }
        return max;
    }
};
