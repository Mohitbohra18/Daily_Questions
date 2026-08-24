class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        unordered_map<int,int> change;
        bool flag=true;

        for (int i = 0; i < n; i++) {
            int rem = bills[i] - 5;
            while (rem > 0) {
                if (rem >= 10 && change[10] > 0) {
                    change[10]--;
                    rem = rem - 10;
                } else if (rem >= 5 && change[5] > 0) {
                    change[5]--;
                    rem = rem - 5;
                }
                else
                {
                    break;
                }
            }
            if(rem!=0){
               flag= false;
            }

            change[bills[i]]++;
        }
        return flag;
    }
};