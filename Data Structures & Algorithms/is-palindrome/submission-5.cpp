class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int back = s.length()-1;
        while(front < back)
        {
            while(front < s.size() && !isalnum(s[front])){front++;}
            while(back >= 0 && !isalnum(s[back])){back--;}
            if(tolower(s[front])!=tolower(s[back])){return false;}
            front++;
            back--;
        }
        return true;
    }
};
