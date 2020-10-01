class Solution {
public:
    string intToRoman(int num) {
        vector<int> val {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> ab {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        string ans;
        int a=0;
        for(int i=0;i<val.size();i++)
        {
            a = num/val[i];
            num%=val[i];
            while(a--) ans+=ab[i];
        }
        val.clear(), ab.clear();
        return ans;
    }
};