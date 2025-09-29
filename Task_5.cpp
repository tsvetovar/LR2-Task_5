#include <iostream>
int main () {
 double x, y;
 std::cout <<"Введите значение X: ";
 std::cin >> x;
 std::cout <<"\nВведите значение Y: ";
 std::cin >> y;
 bool c = x>y;
 if ( c == true)
     std::cout << "\nX больше Y";
 else 
     std::cout <<"\nX меньше Y";
 
    return 0;
}