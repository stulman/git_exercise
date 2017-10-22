#include <iostream>
#include <chrono>
#include <thread>


using namespace std;

int main()
{
	cout << "Time until takeoff: ";
	for (int i = 12; i >= 1; --i)
	{
		cout << i;
		this_thread::sleep_for(chrono::seconds(1));
		if (i >= 10)
		{
			cout << "\b \b\b";
		}
		else
		{
			cout << "\b";
		}
	}
	system("cls");
	for (int i = 0; i < 5; ++i)
	{
		cout << "Takeoff\r";
		this_thread::sleep_for(chrono::seconds(1));
		system("cls");
		this_thread::sleep_for(chrono::milliseconds(250));
	}
	return 0;
}