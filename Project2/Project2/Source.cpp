#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t, year,count=0;
	string weekday[7] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
	int base_year = 2001;
	string base_day = weekday[0];
	cin >> t;
	int counter = 0;

	while (counter < t) {
		cin >> year;
		count = 0;
		if (year == 2001) {
			cout << weekday[0] << endl;
		}
		else if (year < 2001) {
			for (int i = year;i < 2001;i++){
				if (i % 400 == 0)
					count += 2;
				else if (i % 100 == 0)
					count += 1;
				else if (i % 4 == 0)
					count += 2;
				else
					count += 1;
			}
			cout << weekday[6-(count-1)%7]<<endl;
		}
		else {
			for (int i = 2001;i < year;i++) {
				if (i % 400 == 0)
					count += 2;
				else if (i % 100 == 0)
					count += 1;
				else if (i % 4 == 0)
					count += 2;
				else
					count += 1;
			}
			cout << weekday[count%7];
			}
		counter++;
		}
	return 0;
	}

