#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<stdlib.h>

using namespace std;

int CalSubArrays(vector<int> TestCase, int count) {

	vector<int> SubArray;
	int k;
	for (int i = 2;i <= count;i++) {		//SubArray Size = i
		for (int j = 0;j < count - i + 1;j++) {
			SubArray.assign(TestCase.begin() + j, TestCase.begin() + j + i);
			k = 0;
			cout << endl;
			for (int h = 0;h < SubArray.size();h++) {
				cout << SubArray[h] << " ";
			}
			cout << endl;
			while (SubArray[k] <= SubArray[k + 1]) {
				
				if (k == SubArray.size() - 1) {
					count += 1;
					cout << count;
					break;
				}
				k++;
			}
		}
	}
	cout << count;
	return count;
}

void main()
{
	
	int noTestCases=1;
	cin >> noTestCases;
	vector<int> lenTestCases;
	lenTestCases.resize(noTestCases);
	string TestCaseString;  
	vector<int> TestCase;
	string number;
	vector<int> output;

	for (int i = 0; i < noTestCases; i++) {
		cin >> lenTestCases[i];
		TestCase.clear();
		for (int j = 0; j < lenTestCases[i]; j++) {
			cin >> TestCaseString;
			
			stringstream iss(TestCaseString);
			while (getline(iss, number, ' ')) {
				TestCase.push_back(stoi(number));
			}	
		} 
		output[i] = CalSubArrays(TestCase, TestCase.size());
		cout << "\n";
	}
	for (int k = 0;k < noTestCases;k++) {
		cout << output[k] << endl;
	}
}

