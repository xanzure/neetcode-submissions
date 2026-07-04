class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //num -> frequency
        unordered_map<int,int> mp;
        //frequency, num
        priority_queue<pair<int, int>, 
               vector<pair<int, int>>, 
               greater<pair<int, int>>> minHeap;
        for(int i : nums)
        {
            mp[i] = mp[i]+1;
        }
        for(auto& [num, freq] : mp)
        {
            if(minHeap.size() < k)
            {
                minHeap.push({freq, num});
            } else if(minHeap.top().first < freq)
            {
                minHeap.push({freq, num});
                minHeap.pop();
            }
        }
        vector<int> result;
        while(!minHeap.empty())
        {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
    }
};
