class Solution {
public:
    int minOperations(string s) {
        int countA=0,countB=0;
        int n=s.size();
        string str="",rev="";
        for(int i=0;i<n;i++){
            if(i%2==0) {
                str+='0';
                rev+='1';
            }
            else{
                str+='1';
                rev+='0';
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]!=str[i]) countA++;
            if(s[i]!=rev[i]) countB++;
        }
        return min(countA,countB);

    }
};