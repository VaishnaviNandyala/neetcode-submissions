class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cou = 0;
          while(n>0){
            if(n%2==1){
                cou++;
            }
            n = n/2;
          }
          return cou;
    }
};
