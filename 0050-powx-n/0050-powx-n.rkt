class Solution {
public:
    double myPow(double x, int n) {

        long binForm=n;
        double ans = 1;

    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(n==0) return 1.0;



 
    if(n<0){

        x=1/x;
        binForm=-1*binForm;

    }


        while (binForm>0){
            if(binForm%2==1)
            ans=ans*x;

            x=x*x; // for square 
            binForm=binForm / 2;    

        }
        
  return ans;  }
};