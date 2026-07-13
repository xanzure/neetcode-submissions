class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int back = s.length()-1;
        while(front < back)
        {
            while(!isalnum(s[front])){front++;}
            while(!isalnum(s[back])){back--;}
            if(tolower(s[front])!=tolower(s[back]) && front <= back){return false;}
            front++;
            back--;
        }
        return true;
    }
};
