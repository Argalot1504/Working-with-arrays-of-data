#include <iostream>
#include <ctime>
#include <time.h>


using namespace std;

#define M 10
#define N 7

int main()
{
	int A[M][N];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = i + j;
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;


	int sum = 0;
	time_t t = time(NULL);
	struct tm buf;
	int day = localtime_s(&buf, &t);
;

	for (int x = 0; x < N; x++)
	{
		sum += A[day % N][x];
	}
	cout << sum << endl;

	return 0;
}