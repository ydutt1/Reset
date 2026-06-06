class Solution {
  public:
    vector<int> getDivisors(int n) {
        vector<int>a;
        vector<int>b;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                a.push_back(i);
                if(i!=n/i){
                    b.push_back(n/i);
                }
            }
        }
         for(int i = b.size() - 1; i >= 0; i--) {
            a.push_back(b[i]);
         }
        return a;
    }
};