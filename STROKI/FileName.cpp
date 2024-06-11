#include <iostream>
using namespace std;

void Task1(const char arr[], const int SIZE)
{
	int taken = 0, free = 0;
	taken = strlen(arr);
	free = SIZE - taken;
	cout << free << endl << taken;
}

void Task2(char arr[], int m, int n)
{
	const int SIZE = (n - m) + 1;
	char* res = new char[SIZE];
	int i = 0;
	for (; m <= n; m++, i++)
	{
		res[i] = arr[m];
	}
	res[i] = '\0';

	cout << res << endl;
	delete[] res;
}

void Task3(char arr[], int m, int n) 
{
	const int SIZE_BUFFER = strlen(arr), SIZE_R = (SIZE_BUFFER - (n - m)) + 1;
	char* res = new char[SIZE_R];
	int count = 0;

	for (int i = 0; i < SIZE_BUFFER; i++)
	{
		if (i < m || i > n) 
		{
			res[count] = arr[i];
			count++;
		}
	}

	res[SIZE_R - 1] = '\0';

	cout<< res<<endl;
	delete[] res;
}

void Task4(char arr[], char c) {
	const int SIZE = strlen(arr);

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] == c) {
			cout << (i + 1) << '\t';
		}
	}

	cout << endl;
}

void Task5(char arr[], char c) {
	const int SIZE = strlen(arr);
	int last = 0;

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] == c) {
			last = i + 1;
		}
	}

	cout << last << endl;
}

int main()
{
	//const int SIZE = 30;
	//char arr[SIZE]{"Hello world"};
	//Task1(arr, SIZE);

	/*const int SIZE = 30;
	char arr[SIZE]{"Hello world"};
	int m, n;
	cin >> m >> n;
	Task2(arr, m, n);*/

	/*const int SIZE = 30;
	char arr[SIZE]{"Hello world"};
	int m, n;
	cin >> m >> n;
	Task3(arr, m, n);*/

	/*const int SIZE = 30;
	char arr[SIZE]{ "Hello world" };
	char c;
	cin >> c;
	Task4(arr, c);*/

	const int SIZE = 30;
	char arr[SIZE]{ "Hello world" };
	char c;
	cin >> c;
	Task5(arr, c);

}