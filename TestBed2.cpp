#include <iostream>

using namespace std;

int main(){

	int input, number, number2, x = 1, x2;
	long double hasil;
	
	while (x == 1){
		do {
			ret:
	cin>>input;
	number = input;
	number2 = 1;
	hasil = 1;
	
	if (input < 0){
		cout<<"error";
		goto ret;
	}
	
	else {
		while (cin.fail()){
			goto ret;
		}
	}

	
	for (int i=1; i<=input; i++){
		hasil *= number2;
		number2++;
	}
	
	cout<<number<<"! = ";
	
	for (int i=1; i<=input; i++){
		cout<<number;
		if (number > 1){
			cout<<" x ";
		}
		number--;
	}
	
	cout<<" = "<<hasil<<"\n";
		}
		while (x == 0);
		
		while (x == 1){
			ret2:
			cout<<"1/0 = ";cin>>x2;
			if (x2 == 1){
				system("CLS");
				goto ret;
			}
			else if (x2 == 0){
				cout<<"\nfinish";
				return 0;
			}
			else {	
				cout<<"error";
				goto ret2;			}
		}
	}
	
	
	return 0;
}