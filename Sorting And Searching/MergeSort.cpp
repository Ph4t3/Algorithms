#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>::iterator begin, vector<int>::iterator end, vector<int>::iterator mid) {
	vector<int> L, R;
	L.assign(begin, mid+1);
	R.assign(mid+1, end+1);
	auto l=L.begin(), r=R.begin();

	for(;l != L.end() && r != R.end();)
		*(begin++) = *l < *r ? *(l++) : *(r++);
	while(l != L.end())
		*(begin++) = *(l++);
	while(r != R.end())
		*(begin++) = *(r++);
}

void mergeSort(vector<int>::iterator begin, vector<int>::iterator end) {
	if(begin != end) {
		auto m = begin + (end - begin)/2;
		mergeSort(begin, m);
		mergeSort(m+1, end);
		merge(begin, end, m);
	}
}

int main() {
	vector<int> arr = {1,5,3,6,7,2,6,8,3,1};
	cout<<"Array before sort: ";
	for(auto &item: arr)
		cout<<item<<" ";
	cout<<endl;
	//sorting
	mergeSort(arr.begin(), arr.end()-1);
	cout<<"Array after sort: ";
	for(auto &item: arr)
		cout<<item<<" ";
	cout<<endl;
	return 0;
}

