class Solution {

     int addnum(int num){
         string s=to_string(num);
         int sum=0;
         if(s.length()==1)
             return num;
         else{
             for(char c:s)
                 sum+=c-'0';
               return addnum(sum);   
         }
     }
    
public:
    int addDigits(int num) {
       return addnum(num);
    }
};