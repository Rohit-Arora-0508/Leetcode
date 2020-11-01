class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>s1;
        int ptr1=0,ptr2=0;
        int max=0;
        while(ptr2<s.length())
        {   
            int prev=s1.size();
            s1.insert(s[ptr2]);
         if(max<s1.size())
             max=s1.size();
            if(prev==s1.size())
            {
                while(s[ptr1]!=s[ptr2])
                {
                    s1.erase(s[ptr1]);ptr1++;
                    
                }
                ptr1++;
            }
         
             
         ptr2++;
        }
        return max;
    }
};
