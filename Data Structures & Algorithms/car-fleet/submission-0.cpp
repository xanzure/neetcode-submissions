class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for(int i = 0; i < position.size(); i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end(), greater<pair<int, int>>());
        double leadertime = 0;
        int count = 0;
        for(int i = 0; i < cars.size(); i++){
            double time = (double)(target - cars[i].first) / (double)(cars[i].second);
            if(time > leadertime){
                leadertime = time;
                count++;
            }
        }
        return count;
    }
};
