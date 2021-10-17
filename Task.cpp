// TASK GIVEN BY PROF. ALI ABDO HUMADI
#include <iostream>
// TASK GIVEN BY PROF. ALI ABDO HUMADI
using namespace std;
// TASK GIVEN BY PROF. ALI ABDO HUMADI
int main()
{
    int n ;
    cin >> n ;
    if ( n % 2 != 0)
    cout << "weird " ;
    else if ((n % 2 == 0) && ((n >= 2) && (n <= 5)))
    cout << " not weird " ;
    else if ((n>=5) && (n <= 20))
    cout << " weird " ;
    else if (n>=20)
        cout <<"Not weird " << endl;

    return 0;
}
// TASK GIVEN BY PROF. ALI ABDO HUMADI
// TASK GIVEN BY PROF. ALI ABDO HUMADI
