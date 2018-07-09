#include <iostream>
#include <ostream>
 
class Car
{
 private: int d;
 public:
 Car(int _d):d(_d){}
 Car operator + (const Car& car1) {return this->d+car1.d;}
 Car operator - (const Car& car1) {return this->d-car1.d;}
 friend std::ostream &operator<< (std::ostream& stream, const Car& car1){stream<<car1.d;}
};

template<typename T> void f(T s1, T s2)
{
    std::cout << s1+s2 << '\n';
    std::cout << s1-s2 << '\n';
}

void testF()
{
    f<double>(1.0,5.8); // instantiates and calls 
    f<int>(0,8); // instantiates and calls 
    f<Car>(Car(2),Car(8));
}

int main()
{
  testF();
}
