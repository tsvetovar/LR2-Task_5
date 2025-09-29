#include <iostream>
int main () {
 double x, y;
 std::cout <<"Введите значение X: ";
 std::cin >> x;
 std::cout <<"\nВведите значение Y: ";
 std::cin >> y;

 std::string c;
 x>y ? c = "\nx больше y" : c = "\nx меньше y";
 std::cout << c;
    return 0;
}