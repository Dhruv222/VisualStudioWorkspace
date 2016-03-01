#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
	int t,n,i=0,count=0;
	string chef, correct;
	vector<int> winning, output;
	cin >> t;
	int counter = 0;
	output.resize(t);
	while (counter<t) {
		count = 0;
		cin >> n;
		winning.clear();
		winning.resize(n + 1);
		cin >> correct;
		cin >> chef;
		for (i = 0;i < n + 1;i++) {
			cin >> winning[i];
		}
		for (i = 0;i < n;i++) {
			if (chef[i] == correct[i])
				count ++;
		}
		if (count == n) {
			output[counter] = winning[count];
		}
		else {
			i = 0;
			output[counter] = winning[count];
			while (i < count) {
				if (winning[i]>output[counter])
					output[counter] = winning[i];
				i++;
			}
			
		}
		counter++;
	}
	for (i = 0;i < t;i++) {
		cout << output[i] << endl;
	}
	return 0;
}

