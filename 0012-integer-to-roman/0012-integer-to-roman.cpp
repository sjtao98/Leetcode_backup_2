class Solution {
public:
    vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> str = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string intToRoman(int num) {
        string res = "";
        for(int i = 0; i < val.size() && num > 0; i++){
            while(num >= val[i]){
                res += str[i];
                num -= val[i];
            }
        }
        return res;
    }
};