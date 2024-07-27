




/*
CHOOSE A THREE-DIGIT NUMBER (BETWEEN 100 AND 999)

EACH DIGIT IN THE NUMBER IS REPRESENTED BY AN EMOJI

MATCH THE THREE EMOJIS CORRECTLY TO WIN
*/







#include <iostream>
#include <random>

using namespace std;

string number_to_custom_string(int number) {
	const char* custom_digits[] = {
		"🍎", // 0
		"🍌", // 1
		"🍒", // 2
		"🍓", // 3
		"🍉", // 4
		"🍇", // 5
		"🍍", // 6
		"🥥", // 7
		"🥝", // 8
		"🍑"  // 9
	};

	string result = "";

	while (number > 0) {
		int digit = number % 10;
		result = custom_digits[digit] + result;
		number /= 10;
	}

	return result;
}





int main () {

	random_device rd;  
	mt19937 gen(rd()); 
	uniform_int_distribution<> dis(100, 999);
	int random_number = dis(gen);

bool rando = (random_number > 700);



	cout << "▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀\n";
	cout << "_______________________________\n";
	cout << " \n";
	cout << "♤			COSINO		  ♧\n";
	cout << "_______________________________\n";
	cout << " \n";
	cout << " ⋆.˚  CHOOSE THREE DIGITS   ⋆.˚\n";
	cout << "		FROM 100 TO 999:	  \n";
	cout << " \n";
	int a;
	cin >> a;
	if (a > 999 || a < 99) {
		cout << "		   INPUT ERROR\n";
		cout << "───────────── ⋆⋅☆⋅⋆ ────────────\n";

	} else {
		if (rando) {
			cout << "	   ⋆༺𓆩YOU WIN𓆪༻⋆\n";
			cout << " \n";
			cout << "CORRECT DIGIT WAS:";
			cout << number_to_custom_string(a);
			cout << " \n";
			cout << " \n";
			cout << "YOUR DIGIT:";
			cout << number_to_custom_string(a);
			cout << " \n";
		} else {
			cout << "		   YOU LOSE\n";
			cout << "	(⁠╥⁠﹏⁠╥⁠)		   (⁠╥⁠﹏⁠╥⁠) \n";

			cout << " \n";
			cout << "CORRECT DIGIT WAS:";
			cout << number_to_custom_string(random_number);
			cout << " \n";
			cout << " \n";
			cout << "YOUR DIGIT:";
			cout << number_to_custom_string(a);
			cout << " \n";

	
		}
	}
   cout << " \n";
   cout << "▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀\n";
   cout << " \n";
   cout << " 0  1  2  3  4  5  6  7  8  9\n";
   cout << "🍎 🍌 🍒 🍓 🍉 🍇 🍍 🥥 🥝 🍑\n";





}
