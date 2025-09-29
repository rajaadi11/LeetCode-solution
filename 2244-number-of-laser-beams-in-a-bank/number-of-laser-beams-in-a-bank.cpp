class Solution {
public:
    int countdevice(string&bin){
        int c = 0;
        for(auto one : bin){
            c += one -'0';
        }
        return c;
    }
    int numberOfBeams(vector<string>& bank) {
        vector<int>devices;
        for(auto row: bank){
            devices.push_back(countdevice(row));
        }
        int LBcount = 0;
        for(int i = 0; i<devices.size(); i++){
            int j = i+1;
            while(j < devices.size()){
                LBcount += devices[i]*devices[j];
                if(devices[j] == 0){
                    j++;
                }
                else{
                    break;
                }
            }
        }
        return LBcount;
    }
};