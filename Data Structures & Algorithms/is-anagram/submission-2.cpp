class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
      int ump[26]={0};
      for(char i:s){
        ump[i-'a']++;
      }
      for(char j:t){ ump[j-'a']--; }

      for(auto k :ump){
        if(k!=0)return false;
      }
       return true;
    }
};
