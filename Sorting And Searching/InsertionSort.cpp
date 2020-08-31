#include<bits/stdc++.h>
using namespace std;

int main() {
	array<int, 8> arr = {1,5,3,5,7,2,1,6};
	cout<<"Array before sorting:"<<endl;
	for(int a: arr) {
		cout<<a<<" ";
	}
	//Sorting
	for(int i=1; i<arr.size(); i++) {
		for(int j=i; j>0; j--) {
			if(arr[j] < arr[j-1])
				swap(arr[j], arr[j-1]);
		}
	}
	cout<<"Array after sorting:"<<endl;
	for(int a: arr) {
		cout<<a<<" ";
	}
}

