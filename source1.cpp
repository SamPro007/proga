#include <iostream>
#include <string>
using namespace std;

class Game {
public:
	string Name = "Genshin Impact";
	string GetGenre() {
		return Genre;
	}
private:
	string Genre = "action-adventure";
};
int main() {
	Game g;
	cout << g.Name << " " << g.GetGenre();
}
3.
#include <iostream>
using namespace std;
class Seasons
{
public:
	int a = 1;
	enum Seasons1 {
		Spring = 1,
		Winter,
		Autumn,
		Summer = 4
	};
	void Season()
	{
		setlocale(LC_ALL, "Russian");
		if (a == 1) {
			cout << "����� - ���������� ����� ���� ";
		}
		else if (a == 2) {
			cout << "��������� ����, � ������ ����� ����� ���! ";
		}
		else if (a == 3) {
			cout << "����� ���������, ���������� �� ������ ";
		}
		else if (a == 4) {
			cout << "���, ��������� �������� ���� - ����! ";
		}
	};
	void SeasonsChange()
	{
		setlocale(LC_ALL, "Russian");
		if (a == 1)
		{
			cout << "����, ������ ";
		}
		else if (a == 2) {
			cout << "���� ���������, ����� �������� ";
		}
		else if (a == 3) {
			cout << "����� �������, �������� ���� ";
		}
		else if (a == 4) {
			cout << "���� �����������, ��������� ����� ";
		}
		else if (a >= 5) {
			a = 1;
			cout << "����� ���������, ��������� ���� ";
		}
		a++;
	}
};
class ReverseSeason : Seasons {
public:
	void SeasonsChange()
	{
		setlocale(LC_ALL, "Russian");
		if (a == 5)
		{
			cout << "���� ��� ������ ";
		}
		else if (a == 4) {
			cout << "����� ��� ������ ";
		}
		else if (a == 3) {
			cout << "���, ����! ";
		}
		else if (a == 2) {
			cout << "���, �����! ";
		}
		else if (a >= 1) {
			a = 5;
			cout << "���, ����! ";
		}
		a--;
	}
};
int main() {
	Seasons g;
	ReverseSeason t;
	g.SeasonsChange();
	cout << '\n';
	g.Season();
	cout << '\n';
	g.SeasonsChange();
	cout << '\n';
	g.Season();
	cout << '\n';
	g.SeasonsChange();
	cout << '\n';
	g.Season();
	cout << '\n';
	g.SeasonsChange();
	cout << '\n';
	g.Season();
	cout << '\n';
	setlocale(LC_ALL, "Russian");
}