class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest=arr[0];
        int slargest=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
            for(int i=0;i<n;i++){
                if(arr[i]>slargest && arr[i]!=largest){
                    slargest=arr[i];
                }
            }
            
            return slargest;
        
    }
};