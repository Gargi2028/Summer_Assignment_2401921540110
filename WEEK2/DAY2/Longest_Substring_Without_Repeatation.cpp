class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a = 0;
        for(int i = 0; i< s.size();i++){
            vector<int> freq(128,0);
            for(int j = i; j<s.size(); j++){
                if(freq[s[j]]>0){
                    break;
                }

                freq[s[j]]++;
                a = max(a ,j-i+1);
            }
        }
        return a;
    }
};
