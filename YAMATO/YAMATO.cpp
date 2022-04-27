#include <iostream>
#include "getVolumeSurface.h"
using namespace std;
int main() {
	double x, y, z;
	cout << "幅を入力:";
	cin >> x;
	cout << "高さを入力:";
	cin >> y;
	cout << "奥行を入力:";
	cin >> z;
	double volume;
	getVolumeSurface(x, y, z, &volume);
	if (volume <= 60)
	{
		cout << "60サイズで送れます";
	}
	else if (volume <= 80)
	{
		cout << "80サイズで送れます";
	}
	else if (volume <= 100)
	{
		cout << "100サイズで送れます";
	}
	else if (volume <= 120)
	{
		cout << "120サイズで送れます";
	}
	else if (volume <= 140)
	{
		cout << "140サイズで送れます";
	}
	else if (volume <= 160)
	{
		cout << "160サイズで送れます";
	}
	else if (volume <= 180)
	{
		cout << "180サイズで送れます";
	}
	else if (volume <= 200)
	{
		cout << "200サイズで送れます";
	}
	else
	{
		cout << "宅急便じゃ無理なので諦めてください";
	}
	return 0;
}