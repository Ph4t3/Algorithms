#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i) {
	int largest = i;
	int l = 2*i + 1, r = 2*i + 2;
	if(l<n && arr[l] > arr[largest])
		largest = l;
	if(r<n && arr[r] > arr[largest])
		largest = r;
	if(largest != i) {
		swap(arr[largest], arr[i]);
		heapify(arr, n, largest);
	}
}

void print(vector<int> arr) {
	for(auto &item: arr)
		cout<<item<<" ";
	cout<<endl;
}

void heapSort(vector<int> &arr) {
	for(int i = arr.size()/2 - 1; i>=0; i--) 
		heapify(arr, arr.size(), i);
	for(int i=arr.size() - 1; i >= 0; i--) {
		swap(arr[i], arr[0]);
		heapify(arr, i, 0);
	}
}

int main() {
	vector<int> arr = {1,5,3,6,7,2,6,8,3,1};
	cout<<"Array before sort: ";
	print(arr);
	//sorting
	heapSort(arr);
	cout<<"Array after sort: ";
	print(arr);
	return 0;
}
