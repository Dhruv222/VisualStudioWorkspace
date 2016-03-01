#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int CalSubArrays(vector<int> TestCase, int count) {

	vector<int> SubArray;
	int output;
	output = count;
	int k;
	for (int i = 2;i <= count;i++) {
		for (int j = 0;j < count - i + 1;j++) {
			SubArray.assign(TestCase.begin() + j, TestCase.begin() + j + i);
			for (k = 0;k < SubArray.size()-1;k++)
			{
				if (SubArray[k] > SubArray[k + 1]) {
					break;
				}
				
			}
			if (k == SubArray.size() - 1)
				output += 1;
		}
	}
	return output;
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
		output.push_back(CalSubArrays(TestCase, TestCase.size()));
	}
	system("CLS");
	for (int k = 0;k < noTestCases;k++) {
		cout << output[k] << endl;
	}
}

