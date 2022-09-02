/*
https://practice.geeksforgeeks.org/problems/palindrome0746/1
*/


class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int temp = n, num = 0;
		    while(temp!=0){
		        num = (num*10 + temp%10);
		        temp = temp/10;
		    }
		    return (num==n) ? "Yes" : "No";
		}
};