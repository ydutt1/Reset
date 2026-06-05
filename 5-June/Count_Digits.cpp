class Solution {
  public:
    int countDigits(int n) {
        int cnt=0;
        while(n>0){
            n%10;
            n=n/10;
            cnt=cnt+1;
        }
        
        return cnt;
    }
};