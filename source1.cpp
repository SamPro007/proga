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
			cout << "Осень - прекрасное время года ";
		}
		else if (a == 2) {
			cout << "Наступила зима, а значит скоро новый год! ";
		}
		else if (a == 3) {
			cout << "Весна наступила, становится всё теплее ";
		}
		else if (a == 4) {
			cout << "Ура, наступила чудесная пора - лето! ";
		}
	};
	void SeasonsChange()
	{
		setlocale(LC_ALL, "Russian");
		if (a == 1)
		{
			cout << "Зима, холода ";
		}
		else if (a == 2) {
			cout << "Зима отступила, весна расцвела ";
		}
		else if (a == 3) {
			cout << "Весна доцвела, началось лето ";
		}
		else if (a == 4) {
			cout << "Лето закончилось, наступила осень ";
		}
		else if (a >= 5) {
			a = 1;
			cout << "Осень отступает, наступает зима ";
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
			cout << "Зима это хорошо ";
		}
		else if (a == 4) {
			cout << "Осень это хорошо ";
		}
		else if (a == 3) {
			cout << "Ура, лето! ";
		}
		else if (a == 2) {
			cout << "Ура, весна! ";
		}
		else if (a >= 1) {
			a = 5;
			cout << "Ура, зима! ";
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