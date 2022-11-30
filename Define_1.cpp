#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a,b) (((a)<(b)) ? a : b)

int main ()
{
   int i, j;
   i = 35;
   j = 16;
#ifdef DEBUG
   cerr <<"Trace: Ben trong ham main!" << endl;
#endif

#if 0
   /* Day la phan comment */
   cout << Lap trinh C++ << endl;
#endif

   cout <<"Gia tri nho nhat la " << MIN(i, j) << endl;

#ifdef DEBUG
   cerr <<"Trace: Ben ngoai ham main!" << endl;
#endif
    return 0;
}
