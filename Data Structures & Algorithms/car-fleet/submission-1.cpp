class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for(int i = 0; i < position.size(); i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end(), greater<pair<int, int>>());
        stack<double> times;
        for(int i = 0; i < cars.size(); i++){
            double time = (double)(target - cars[i].first) / (double)(cars[i].second);
            if(times.empty() || time > times.top()){
                times.push(time);
            }
        }
        return times.size();
    }
};
