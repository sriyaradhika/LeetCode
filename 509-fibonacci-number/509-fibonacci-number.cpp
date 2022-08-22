class Solution {
public:
    unordered_map<int,int> mp;
public:
    int fib(int n) {
        return mp[n]=mp.find(n)!=mp.end()? mp[n]:(n<2 ? n : fib(n-1)+fib(n-2));
        // return mp[n]=mp.find(n)!=mp.end() ? mp[n] : (n<2 ? n: fib(n-1)+fib(n-2));
    }
};