#include <iostream>
using namespace std;

int factorial(int input)
	{
		if(input == 1){
			//cout << "Result: "<< 1 << endl;
			return 1;
		}
		else{
			//cout << "Result: " <<(input * (factorial(input-1))) << endl;
			return (input * (factorial(input-1)));
		}
	
	}



//void main() {
//
//	int num;
//	cout << "enter a number between 0 to 5:" ;
//	cin >> num;
//
//	cout << factorial(num) << endl;
//	
//
//	system("pause");
//}