#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <thread>

using namespace std;


int main(){
  vector<int> v1{};
  int number;
	int ji = 1;
	cout << "put your first number" << endl;
	cin >> number;
  cout << "put your first number" << endl;\
  cin >> number;
	do {
		cout << "put your first number" << endl;
		try {
			cin >> number;
		}
		catch (string param) { ji=2; }

	} while (ji=1);
}
