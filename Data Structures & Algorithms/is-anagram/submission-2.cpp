class Solution {
public:
    
    bool isAnagram(string s, string t) {
        vector<int> sseen(26,0);
        vector<int> tseen(26,0);
        if(s.size()!=t.size()){
            return false;
        }
        int n = t.size();
        for(int i =0 ;i<n;i++){
            sseen[s[i] - 'a']++;
            tseen[t[i] - 'a']++;
        }
        for(int i = 0; i<26;i++){
            if(tseen[i]!=sseen[i]){
                return false;
            }
        }
        return true;
    }
};
