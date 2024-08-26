#include <iostream> 
 
using namespace std; 
 
class Calculator{ 
        public: 
                int prod(int a, int b); 
        private:

}; 
 
int Calculator::prod(int a, int b){ 
        cin >> a >> b; 
        int prod = a*b; 
        return prod; 
} 
 
int main(){ 
 
        Calculator produto; 
        int a, b; 
 
        int answer = produto.prod(a, b); 
        cout << "PROD = " << answer << endl; 
        return 0; 
}    
