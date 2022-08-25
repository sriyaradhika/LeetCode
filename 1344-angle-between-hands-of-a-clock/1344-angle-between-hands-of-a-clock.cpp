class Solution {
public:
    double angleClock(int hour, int minutes) {
        double th=hour+((minutes*1.0)/(1.0*60));
        double h=th*30;
        double m=minutes*6;
        double ang=abs(h-m);
        return min(ang,360-ang);
    }
};