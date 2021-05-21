#include <iostream>
#include <string>
#include<ctime>
#include<windows.h>
using namespace std;

int p1 = 0, p2 = 0, p, r;
bool ok = 1;
string a, b;

void rond() {
	srand(time(0));
	r = rand() % 3 + 1;
	switch (r) {
	case 1: b = "rock"; break;
	case 2: b = "scissors"; break;
	case 3: b = "paper"; break;
	}
}

void regula() {
	if (b == "rock" && a == "paper") { cout << "You won, I lost :(" << endl; p1++; }
	if (b == "paper" && a == "scissors") { cout << "You won, I lost :(" << endl; p1++; }
	if (b == "scissors" && a == "rock") { cout << "You won, I lost :(" << endl; p1++; }

	if (a == "rock" && b == "paper") { cout << "I won, you lost :)" << endl; p2++; }
	if (a == "paper" && b == "scissors") { cout << "I won, you lost :)" << endl; p2++; }
	if (a == "scissors" && b == "rock") { cout << "I won, you lost :)" << endl; p2++; }

	if (a == "rock" && b == "rock") { cout << "It's a draw!" << endl; p1++; p2++; }
	if (a == "paper" && b == "paper") { cout << "It's a draw!" << endl; p1++; p2++; }
	if (a == "scissors" && b == "scissors") { cout << "It's a draw!" << endl; p1++; p2++; }

	if (p == p1 && p == p2) { cout << endl << "It's a draw!" << endl; ok = 0; }
	if (p == p1) { cout << endl << "You won, I lost :(" << endl; ok = 0; }
	if (p == p2) { cout << endl << "I won, you lost :)" << endl; ok = 0; }
}

int main() {

	cout << endl << "---------------------------------" << endl;
	cout << "Project made by Emanuel Butoi" << endl;
	cout << "---------------------------------" << endl << endl;
	cout << "Rock, Paper, Scissors" << endl;
	cout << "First to reach p points wins!" << endl;
	cout << "p = " << endl;
	cin >> p;
	cout << "First to reach " << p << " points it's gonna be me :D!" << endl;

	while (ok) {
		cout << endl;
		cout << " 3 " << endl; 
		Sleep(1000);
		cout << " 2 " << endl;
		Sleep(1000);
		cout << " 1 " << endl;
		Sleep(1000);

		cout << " Choose rock, paper or scissors ! " << endl;
		cout << endl;

		cin >> a;
		rond();
		cout << b << endl;
		regula();
		cout << endl << "SCORE: PC " << p2 << ", PLAYER " << p1 << endl;

	}





}