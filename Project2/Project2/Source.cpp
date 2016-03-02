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

	while (counter < t) {
		count = 0;
		for (int i = 0;i < 2;i++)
			cin >> settings[i];
		while (settings[0] != settings[1]) {
			if (isPowerofTwo(settings[0]) && settings[1] > settings[0]) {
				while (settings[0] != settings[1]) {
					settings[0] *= 2;
					count++;
				}
			}
			else if (settings[0] % 2 == 0) {
				settings[0] /= 2;
				count++;
			}
			else {
				settings[0] = (settings[0] - 1) / 2;
				count++;
			}
			}
		cout << count << endl;
		counter++;
		}
	return 0;
	}

