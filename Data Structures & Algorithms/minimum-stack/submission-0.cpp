class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        vec.push_back(val);
        if(min.empty()){min.push_back(val);}
        else if(val < min[vec.size()-2]){min.push_back(val);}
        else{min.push_back(min[vec.size()-2]);} 
    }
    
    void pop() {
        vec.pop_back();
        min.pop_back();
    }
    
    int top() {
        return vec[vec.size()-1];
    }
    
    int getMin() {
        return min[vec.size()-1];
    }
private:
    vector<int> vec;
    vector<int> min;
};
