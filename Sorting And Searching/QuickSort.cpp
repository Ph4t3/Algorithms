#include<bits/stdc++.h>
using namespace std;

vector<int>::iterator partition(vector<int>::iterator low, vector<int>::iterator high) {
	auto i = low, pivot = high;
	for(auto j=low; j<high; j++)
		if(*j < *pivot)
			swap(*(i++), *j);
	swap(*i, *pivot);
	return i;
}

void quickSort(vector<int>::iterator low, vector<int>::iterator high) {
	if(low<high) {
		auto pi = partition(low, high);
		quickSort(low, pi-1);
		quickSort(pi+1, high);
	}
}

void print(vector<int> arr) {
	for(auto &item: arr)
		cout<<item<<" ";
	cout<<endl;
}

int main() {
	vector<int> arr = {1,5,3,6,7,2,6,8,3,1};
	cout<<"Array before sort: ";
	print(arr);
	//sorting
	quickSort(arr.begin(), arr.end()-1);
	cout<<"Array after sort: ";
	print(arr);
	return 0;
}
