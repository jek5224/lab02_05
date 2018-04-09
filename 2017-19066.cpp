#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	vector<int> NumList;
	int num;

	while (cin >> num) {
		NumList.push_back(num);
	}

	sort(NumList.rbegin(), NumList.rend());

	cout << endl;
	cout << "ordered array" << endl;
	for (auto i : NumList)
		cout << i << " ";
	cout << endl;
}