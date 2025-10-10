class Solution {
public:
    void reverseString(vector<char>& s) {
         int n=s.size();

        for(int i=0; i<n/2; i++){

            swap(s[i],s[n-1-i]);
        }

    }

    void swap(char &a,char &b){
        char temp;
        temp=a;
        a=b;
        b=temp;
    }
};