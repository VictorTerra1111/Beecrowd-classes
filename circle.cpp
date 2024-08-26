#include <iostream>
#include <iomanip>

using namespace std;

class Circle{
  public:
        void area(double r);
};
void Circle::area(double r){
    cin >> r;
    cout << "A=" << std::fixed << std::setprecision(4) << 3.14159*(r*r)<< endl;
}

int main(){
  Circle circulo;
  int r;
  circulo.area(r);
  
  return 0;
}
  
