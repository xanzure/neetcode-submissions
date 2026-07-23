class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> days;
        vector<int> result(temperatures.size());
        for(int i = 0; i < temperatures.size(); i++){
            while(!days.empty() && temperatures[days.top()] < temperatures[i]){
                result[days.top()] = i - days.top();
                days.pop();
            }
            days.push(i);
        }
        return result;
    }
};
