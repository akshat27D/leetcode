class Solution {
public:
    vector<double> convertTemperature(double celsius) {
         double kelvin=celsius+273.15;
        double far=celsius*1.80+32;
        return { kelvin,far};
        
    }
};