class Solution {
public:
    int maxArea(vector<int>& heights) {
        int front = 0;
        int back = heights.size() - 1;
        int max = 0;
        while(front < back)
        {
            int area = (back - front) * (min(heights[front], heights[back]));
            if(area>max){max = area;}
            if(heights[front] < heights[back]){front++;}
            else{back--;}
        }  
        return max; 
    }
};

