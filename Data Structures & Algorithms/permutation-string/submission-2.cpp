class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0;
        int counter = 0;
        unordered_map<char,int> st1;
        unordered_map<char,int> stt1;
        for(char x : s1){
            st1[x]++;
            stt1[x]++;
            counter++;
        }
        for (int r=0;r<s2.size();r++){
            if (stt1[s2[l]]>0 ){
                while (st1[s2[r]] > 0 && r < s2.size()){
                    st1[s2[r]]--;
                    counter--;
                    r++;
                }
                if (counter != 0){
                    counter++;
                    st1[s2[l]]++;
                    r--;
                }
                else{
                    return true;
                }
            }
            l++;
        }
        if (counter == 0){
            return true;
        }
        return false;
        
    }
};
