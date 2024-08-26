#include <iostream> 
 
using namespace std; 
 
class Calculator{ 
        public: 
                int add(int a, int b); 
}; 
 
int Calculator::add(int a, int b){ 
        cin >> a >> b; 
        int sum = a + b; 
        return sum; 
} 
 
int main(){ 
 
        Calculator soma; 
        int a, b; 
 
        int answer = soma.add(a, b); 
        cout << "X = " << answer << endl; 
        return 0; 
}
