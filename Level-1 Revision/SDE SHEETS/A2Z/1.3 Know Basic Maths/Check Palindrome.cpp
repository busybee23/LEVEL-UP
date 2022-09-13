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


/* leetcode link : https://leetcode.com/problems/palindrome-number/solution/
but we have to do it without converting it into a string, as creating another string and copying it into requires extra space
*/


class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string e = to_string(x);
        reverse(e.begin(), e.end());
        return ( s!=e) ? false : true;
    }
};

