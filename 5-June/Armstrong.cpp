// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int dup=n;
        int sum=0;
        while(n>0){
            int ld=n%10;
            sum=sum+(ld*ld*ld);
            n=n/10;
        }
        if(dup==sum){
            return true;
        }
        return false;
        
    }
};