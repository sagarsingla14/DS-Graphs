#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,z,big,end,mid,flag=0;
	cout<<"enter the elements in array"<<endl;
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++)
		cin>>arr[i];
	sort(arr,arr+a);
	for(int i=0;i<a;i++)
		cout<<" "<<arr[i];
	cout<<" \n enter the element to be searched"<<endl;
	cin>>z;
	big=0;
	end = a - 1;
	mid=(big+end)/2;
	while(flag==0){
		if(z==arr[mid]){
			flag=1;
			break;
		}
		else if(z<arr[mid]){
			end=mid-1;
		}
		else if(z>arr[mid]){
			big=mid+1;
		}
		mid=(big+end)/2;
	}
	if(flag==1)
	cout<<"element is at - "<<mid+1;
	else
	cout<<"element is not fount"<<endl;
	return 0;
}
