class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>ans;
        if(p.size() > s.size()){
            return ans;
        }
        vector<int> a(26,0),b(26,0);

        for(char c : p) a[c - 'a']++;

        for(int i = 0; i<s.size();i++){
            b[s[i] - 'a']++;

            if(i>=p.size()){
                b[s[i - p.size()] - 'a']--;
            }

            if(i >= p.size() - 1 && a == b){
                ans.push_back(i - p.size() + 1);
            }
        }
        return ans;
    }
};
