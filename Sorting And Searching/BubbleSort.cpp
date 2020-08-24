#include <bits/stdc++.h> 
using namespace std;

int main() {
	array<int, 5> arr = {5,1,3,4,2};
	cout<<"Array before sorting:"<<endl;
	for(int a: arr) {
		cout<<a<<" ";
	}
	//Sorting
	for(int i=arr.size(); i>1; i--) {
		for(int j=0; j<i-1; j++) {
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
	cout<<endl<<"Array after sorting:"<<endl;
	for(int a: arr) {
		cout<<a<<" ";
	}
	return 0;
}
