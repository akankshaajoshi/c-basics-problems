class Solution {
public:
    string removeDuplicates(string s) {
        int i=1;
        string ans;
        ans.push_back(s[0]);
        while(i<s.length())
        {
            if(ans.empty() == 0)
            {
                if(ans.back()==s[i]) 
                {
                    ans.pop_back();
                }
                else
                {
                    ans.push_back(s[i]); 
                }
            }
            else
            {
                ans.push_back(s[i]); 
            }
            i++;
        }
        return ans;
    }
};