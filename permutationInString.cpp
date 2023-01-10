class Solution {
public:
    bool checkEqual(int a[26], int b[26])
    {
        for(int i=0; i < 26; i++)
            {
                if (a[i] != b[i])
                return false;
            }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        //Character count array
        int count[26] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count[index]++;
        } 

        //Traverse s2 using a window
        int i = 0; //Iteration of window
        int k = s1.length();
        int count2[26] = {0};
        
        while ( i < k && i < s2.length())
        {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
        }
        
        if (checkEqual(count, count2))
            return true;
        
        while (i < s2.length())
        {
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i - k];
            index = oldChar - 'a';
            count2[index]--;

            i++;
            if (checkEqual(count, count2))
            return true;
        }
        return false;
    }
};