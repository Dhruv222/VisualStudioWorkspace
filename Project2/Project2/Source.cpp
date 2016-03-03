#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>

using namespace std;

int isPowerofTwo(int x) {
	return((x != 0) && ((x & (~x + 1)) == x));
}

int main()
{
	int t,count=0;
	cin >> t;
	int settings[2] = { 0, 0 };
	int counter = 0;
	string sequence;


		count = 0;
		cin >> sequence;
		for (int i = 0;i < sequence.size();i++) {
			if (sequence[i] == 'C') {
				sequence.erase(sequence.begin()+i);
				for (int j = i;j < sequence.size();j++) {
					if (sequence[j] == 'H') {
						sequence.erase(sequence.begin()+j);
						for (int k = j;k < sequence.size();k++) {
							if (sequence[k] == 'E') {
								sequence.erase(sequence.begin()+k);
								for (int l = k;l < sequence.size();l++) {
									if (sequence[l] == 'F') {
										count++;
										sequence.erase(sequence.begin()+l);
										i -= 1;
										j = sequence.size()+3;
										k = sequence.size()+2;
										l = sequence.size() + 1;
									}
								}
							}
						}
					}
				}
			}
		}
		cout << count << endl;		
	return 0;
	}

