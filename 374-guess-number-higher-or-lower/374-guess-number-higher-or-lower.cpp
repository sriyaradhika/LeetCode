/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        int h=n;
            int m=(l+(h-l)/2);
            while(guess(m)!=0){
                m=(l+(h-l)/2);
                if(guess(m)==1){
                    l=m+1;
                }
                else if(guess(m)==-1){
                    h=m-1;
                }
            }
            return m;
    }
};