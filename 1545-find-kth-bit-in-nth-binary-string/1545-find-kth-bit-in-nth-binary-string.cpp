class Solution {
public:
    string s="";
    string invert(string str){
        int n=str.length();
        string ans="";
        for(int i=0;i<n;i++){
            if(str[i]=='0') ans+="1";
            else ans+="0";
        }
        return ans;
    }
    string createS(int n){
        if(n==0) return "0";
        else {
            string substr=s;
            string inverted=invert(substr);
            reverse(inverted.begin(),inverted.end());
            string ans=substr+"1"+inverted;
            return ans;
        }
    }
    char findKthBit(int n, int k) {
        for(int i=0;i<n;i++){
            s=createS(i);
        }
        return s[k-1];
    }
};