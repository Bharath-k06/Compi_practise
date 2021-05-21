#include<bits/stdc++.h>
using namespace std;
vector<int> sum(int arr[],int n,int s){
	// Your code here
        
            /* Initialize curr_sum as
               value of first element and
        starting point as 0 */
        vector<int>temp;
            int curr_sum = arr[0], start = 0, i;
         
            /* Add elements one by one to
        curr_sum and if the curr_sum
               exceeds the sum, then remove
        starting element */
            for (i = 1; i <= n; i++) {
                // If curr_sum exceeds the sum,
                // then remove the starting elements
                while (curr_sum > s && start < i - 1) {
                    curr_sum = curr_sum - arr[start];
                    start++;
                }
         
                // If curr_sum becomes equal to sum,
                // then return true
                if (curr_sum == s) {
                    temp.push_back(start+1);
                    temp.push_back(i);
                    return temp;
                }
         
                // Add this element to curr_sum
                if (i < n)
                    curr_sum = curr_sum + arr[i];
            }
         
            // If we reach here, then no subarray
            temp.push_back(-1);
            return temp;
 }
 int main()
 {
 	int n ,s;
 	cin>>n;
 	int a[n];
 	for(int i=0;i<n ;i++)
 	{
 		cin>>a[i];
 	}
 	cin>>s;
 	vector<int>res;
 	res = sum(a,n,s);
 	for(int i=0;i<res.size();i++)
 		cout<<res[i]<<" ";
 	cout<<endl;
 	return 0;
 }
