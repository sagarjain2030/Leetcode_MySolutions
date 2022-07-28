class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length())
            return false;
        if(s.length() == t.length() && s.length() == 0)
            return true;
        int word_map[26] = {};
        for(int i = 0; i < s.length(); i++)
        {
            int curr_s = s[i] - 'a';
            int curr_t = t[i] - 'a';
            word_map[curr_s]++;
            word_map[curr_t]--;
        }
        
        int total = 0;
        for(auto i : word_map)
            total += i < 0?-i:i;
        if(total != 0)
            return false;
        return true;
    }
};