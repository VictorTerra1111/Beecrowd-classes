#include <iostream>
#include <iomanip>

using namespace std;

class Circle{
  public:
        Circle(double r);
        void area(double r);
};
voic Circle::area(double r){
    cin >> r;
    cout << "A=" << fixed << set_precision(4) << 3.14159*r*r << endl;
}

int main(){
  
