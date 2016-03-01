#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<math.h>
#include<stdlib.h>

using namespace std;

struct matrix
{
	int i, j;

};

int main()
{
	int n=1,j=0,t=1;
	cin >> t;
	vector<matrix> data;
	string row;
	int item;
	vector<int> output;
	output.resize(t);
	for (int l = 0;l < t;l++) {
		cin >> n;
		data.resize(n*n + 1);
		for (int i = 0; i < n; i++) {
			for (int j = 0;j < n;j++) {
				cin >> item;
				data[item].i = i;
				data[item].j = j;
			}
		}
		for (int k = 1; k < n*n; k++) {
			output[l]+=abs(data[k].i - data[k + 1].i) + abs(data[k].j - data[k + 1].j);
		}
	}
	system("CLS");
	int h=0;
	while (h < t) {
		cout << output[h] << endl;
		h++;
	}
	return 0;
}

