#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> removeDuplicates(vector<int>&);

int main(){

	vector<int> v1;
	v1.push_back(1);
	v1.push_back(6);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(8);
	v1.push_back(4);
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(2);
	v1.push_back(7);
	v1.push_back(8);
	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(1);
	v1.push_back(13);
	vector<int> removed = removeDuplicates(v1);
	int i =0;
	for(;removed[i];i++){
		cout << removed[i] <<endl;
	}
}

vector<int> removeDuplicates(vector<int>& v1){
	vector<int> removed;
	sort(v1.begin(),v1.end());
	int i =0,j=1;
	while(v1[i]){
		if(v1[i]!=v1[j]){
			removed.push_back(v1[i]);	
			i = j;
		}
		j++;
	}
	return removed;
}
