class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        int x=0;
        
        int temp=mp[s[s.length()-1]];
        int res=0;
        res+=temp;
      for(int i=s.length()-2; i>=0; i--){
        if(mp[s[i]]>=temp){
            res+=mp[s[i]];
            temp=mp[s[i]];
        }
        else {
            res-=mp[s[i]];
            temp=mp[s[i]];
        }
        }
        return res;
    }  
};
