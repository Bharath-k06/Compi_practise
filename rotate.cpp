#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n,int d){
	d=d%n;
	int g_c_d = __gcd(n,d);
	for(int i=0;i<g_c_d;i++){
		int j,k,temp;
		temp =arr[i];
		j=i;
		while(1){
			k=j+d;
			if(k>=n)
				k=k-n;
			if(k == i)
				break;
			arr[j]= arr[k];
			j=k;
		}
		arr[j] =temp;
	}



}



int main()
{
	int n,d;
	cout<<"Enter the length of the array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the number by which it has to rotated\n";
	cin>>d;
	cout<<"enter the array elements\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	rotate(arr,n,d);
	cout<<"Resultant array of the rotation\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"    ";
	}
	cout<<endl;
	return 0;
} 
