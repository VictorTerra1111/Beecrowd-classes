#include <iostream>
using namespace std;

class Greeting{
	public:
		void say_hello() const; //ou retornando uma string
};

void Greeting::say_hello() const{
	cout << "Hello world!" << endl; // return "Hello world!";
}

int main(){
	Greeting code;

	code.say_hello();

	return 0;
}
