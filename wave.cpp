#include<bits/stdc++.h>
using namespace std;
void wave(int *arr,int n)
{
	//arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).
	for(int i=0;i<n-1;i+=2)
	{
		if(arr[i]<arr[i+1])
		{
			arr[i] = arr[i]+arr[i+1];
			arr[i+1] = arr[i]-arr[i+1];
			arr[i] =arr[i] -arr[i+1];
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	//Give an sorted array of distinct element	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	wave(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
 	return 0;
 }
	
