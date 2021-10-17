#include <iostream>
using namespace std;
 void greatestnumber(){
  int a , b , c , d ;
  cin >> a ;
  cin >> b ;
  cin >> c ;
  cin >> d ;
  if (a > b) {
        if (a > c) {
            if (a > d) {
                cout << a <<" is greatest";
            }
            else {
                cout << d <<" is greatest";
            }
        }
    }
    else if (b > c) {
        if (b > d) {
            cout << b<< "is greatest";
        }
        else {
             cout <<d << " is greatest ";
        }
    }
    else if (c > d) {
        cout << c <<" is greatest";
    }
    else {
        cout <<d << " is greatest " << endl;
    }
}

int main(){

greatestnumber();
return 0;

}
