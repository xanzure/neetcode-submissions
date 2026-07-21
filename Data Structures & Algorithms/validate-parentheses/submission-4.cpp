class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> key;
        key.insert({'}','{'});
        key.insert({')','('});
        key.insert({']','['});
        if(s.size()%2 != 0){return false;}
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                continue;
            }
            if(st.size() > 0 && key[s[i]] == st.top()){
                st.pop();
            } else {return false;}
        }
        return (st.size()==0);
    }
};
