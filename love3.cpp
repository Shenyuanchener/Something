#include <iostream>
using namespace std;
int main()
{
	char h[10];
	cout << "你好李夏雨同学" << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> h;
		if (h[0] == 'h')
		{
			cout << "李夏雨要好好吃饭" << endl;
		}
		if (h[0] == 'o')
		{
			cout << "李夏雨要好好睡觉" << endl;

		}
		if (h[0] == 'z')
		{
			cout << "李夏雨要天天开心啊" << endl;
		}
		if (h[0] == 'x')
		{
			cout << "其实我可以写很多 但是不用这种麻烦的方式了~";
		}
	}

	cout << "比心好像有点难 比个五角星吧？";

	int n;
	cin >> n;
	for (int i = 1; i <= 2 * n - 1; i++)
	{
		for (int j = 1; j <= 2 * n - 1; j++)
		{
			if (i + j == n + 1 || i - j == n - 1 || i - j == -n + 1 || i + j == 3 * n - 1)
				cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	return 0;

}