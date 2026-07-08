// Problem : Fibonacci-number
// Leectode : https://leetcode.com/problems/fibonacci-number/
// Difficulty : Easy
// Status : Accepted
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};