#include <string>
class Solution {
public:

    string encode(vector<string>& strs) {
        string code;
        for(string str : strs)
        {
            code.append(to_string(str.size()) + "#" + str);
        }
        return code;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while(i < s.size())
        {
            string snum;
            while(s.substr(i,1)!="#")
            {
                snum.append(s.substr(i,1));
                i++;
            }
            i++;
            int n = stoi(snum);
            strs.push_back(s.substr(i, n));
            i+=n;
        }
        return strs;
    }
};
