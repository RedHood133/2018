#include <iostream>
using namespace std;
int main(){
	cout << "what rainbow six siege character are you" << endl;
	int input;
	int IQ = 0;
	int Ella = 0;
	int Ash = 0;
	int Caveira = 0;

	cout << "what is your favorite color?" << endl;
	cout << "1-yellow,2-Blue,3-orange,4-Green" << endl;
	cin >> input;
	 
	if (input == 1)
		IQ = IQ + 1;
	else if (input == 2)
		Ella = Ella + 1;
	else if (input == 3)
		Ash = Ash + 1;
	else if (input == 4)
		Caveira = Caveira + 1;
	
	cout << "what is your favorite food" << endl;
	cout << "1-Pretzel,2-Bigos,3-Falafel,4-Feijoada" << endl;
	cin >> input;

	if (input == 1)
		IQ = IQ + 1;
	else if (input == 2)
		Ella = Ella + 1;
	else if (input == 3)
		Ash = Ash + 1;
	else if (input == 4)
		Caveira = Caveira + 1;
	
	cout << "what is your position " << endl;
	cout << "1-Attack,2-Defend," << endl;
	cin >> input;

	if (input == 1)
		IQ = IQ + 1;
	else if (input == 1)
		Ella = Ella + 1;
	else if (input == 2)
		Ash = Ash + 1;
	else if (input == 2)
		Caveira = Caveira + 1;

	if (IQ > Ella && IQ > Ash && IQ > Caveira)
		cout << "you are IQ!" << endl;
	else if (Ella > IQ && Ella > Ash && Ella > Caveira)
		cout << "you aer Ella!" << endl;
}