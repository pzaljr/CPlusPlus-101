#include <iostream>
using namespace std;

int nonrfactorial(int input){
	int t, r;

	r = 1;
	for(t = 1; t<=input; t++){
		r = r * t;
	
	}
	return r;

}

void main() {

	int num;
	cout << "enter a number between 0 to 5:" ;
	cin >> num;

	cout << nonrfactorial(num) << endl;
	

	system("pause");
}

