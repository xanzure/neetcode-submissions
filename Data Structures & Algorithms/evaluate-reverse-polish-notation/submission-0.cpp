class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int i = 0;
        stack<int> nums;
        for(string token : tokens){
            if(token != "+" && token != "-" && token != "*" && token != "/"){
                nums.push(stoi(token));
                i++;
            } else{
                int b = nums.top();
                nums.pop();
                int a = nums.top();
                nums.pop();
                if (token == "+") {nums.push(a+b);}
                if (token == "-") {nums.push(a-b);}
                if (token == "*") {nums.push(a*b);}
                if (token == "/") {
                    if (b != 0) {nums.push(a/b);} else{std::cerr << "Error: Division by zero!\n"; return 0;}
                }
                i++;
            }
        }
        return nums.top();
    }
};
