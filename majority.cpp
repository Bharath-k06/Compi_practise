#include<iostream>
using namespace std;

int majority(int arr[],int x,int y,int n)
{
	 // code here
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            count1++;
        }
        if(arr[i] == y){
            count2++;
        }
    }
    if(count1 == count2){
        if(x>y)
            return y;
        else
            return x;
    }
    else if(count1 > count2)
        return x;
    else 
        return y;
}

int main()
{
	int n;
	cout<<"Enter the number elements of the array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the two nubers to check the majority\n";
	int x,y;
	cin>>x>>y;
	int result = majority(arr,x,y,n);
	cout<<"The majority among given numbers : "<<result;
	return 0;
}
