/*
1. Count Digits

Question Link : https://practice.geeksforgeeks.org/problems/count-digits5716/1

*/


class Solution{
public:
    int evenlyDivides(int N){
    int count = 0, x=0, temp = N;
    while(temp>0){
        temp = temp/10;
        count++;
    }
    temp = N;
    for(int i=0;i<count;i++){
     int digit = temp%10;
     temp = temp/10;
     if(digit>0 && N%digit == 0) x++;
    }
    return x;
    }
};