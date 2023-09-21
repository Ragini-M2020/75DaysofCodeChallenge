//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
   int digitCount(int num, int count)
{
	if(num==0)
		return count;
	else
	{
		count++;
		return digitCount(num/10,count);
	}
}
int calSum(int num, int l)
{
	if(num==0)
		return 0;
	else
	{
		return (pow(num%10,l) + calSum(num/10,l-1));
	}
}
    int isDisarium(int n) {
        // code here
    int l,sum;
	l = digitCount(n,0);
	sum = calSum(n,l);
	
	if(n == sum)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isDisarium(N) << endl;
    }
    return 0;
}
// } Driver Code Ends