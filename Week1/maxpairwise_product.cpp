/*	Author : Jothiswaran A
	Github Profile : devjothish
	
	Happy coding ! 
*/

#include<iostream>
#include<vector>
using namespace std;

long long maxpair_product(const vector<int>& arr)
{
	int n=arr.size();
	int maxind1=-1;
	for(int i=0;i<n;i++)
		if((maxind1==-1) || (arr[i]>arr[maxind1]))
			maxind1=i;
	int maxind2=-1;
	for(int j=0;j<n;j++)
		if((j!=maxind1) && ((maxind2==-1) || (arr[j] > arr[maxind2])))
			maxind2=j;
	return ((long long)arr[maxind1] * arr[maxind2]);
	
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];


long long result=maxpair_product(arr);
cout<<result;		
}


