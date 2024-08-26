#include <iostream>
using namespace std;

class Greeting{
	public:
		Greeting();
		void say_hello() const;
};

void Greeting::say_hello() const{
	cout << "Hello, world!" << endl;
}

int main(){
	Greeting code;

	code.say_hello();

	return 0;
}
