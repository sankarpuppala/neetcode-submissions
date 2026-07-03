class Solution {
public:
    
    bool isAnagram(string s, string t) {
        vector<int> sseen(26,0);
        if(s.size()!=t.size()){
            return false;
        }
        int n = t.size();
        for(int i =0 ;i<n;i++){
            sseen[s[i] - 'a']++;
            sseen[t[i] - 'a']--;
        }
        for(int x : sseen){
            if(x != 0){
                return false;
            }
        }
        return true;
    }
};
