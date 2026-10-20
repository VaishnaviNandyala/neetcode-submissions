class Solution {
public:
    vector<int> countBits(int n) {
        int i;
        int cou = 0;
        vector<int> ans;
        int j = 0;
        while(j<=n){
            cou = 0;
            i = j;
            while(i>0){
                if(i%2==1){cou++;}
                i = i/2;
            }
            ans.push_back(cou);
            j++;
        }
        return ans; 
    }
};
