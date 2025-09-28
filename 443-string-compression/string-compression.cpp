class Solution {
public:
    int compress(vector<char>& s){
        int indx = 0,count = 1;
        char prev = s[0] ;

        for(int i=1; i<s.size(); i++){
            if(s[i]==prev){
                count++;
            }
            else{
                s[indx++] = prev;
                if(count > 1){
                    int start = indx;
                    while(count){
                        s[indx++] = (count % 10) + '0';
                        count /= 10;
                    }
                    reverse(s.begin()+start, s.begin()+indx);
                }
                prev = s[i];
                count = 1;
            }
        }

        s[indx++] = prev;
         if(count > 1){
                    int start = indx;
                    while(count){
                        s[indx++] = (count % 10) + '0';
                        count /= 10;
                    }
                    reverse(s.begin()+start, s.begin()+indx);
                }
        return indx;

        
    }
};