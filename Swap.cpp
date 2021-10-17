#include <iostream>
using namespace std;

void swapfunction(){
  int a ;
  int b ;
  int temp;
    cin >> a ;
    cin >> b ;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;


}


int main()
{
    swapfunction();

return 0;
}
