

#include <iostream>
#include <cstring>
using namespace std;

double get_random_number(int A)
{
    const int max = 13;
    bool executed[max * 2 + 1];
    int n = A * 2;
    for (double m = A + 1; ; m++)
    {
        int n_executed = 0;
        memset(executed, 0, sizeof(executed));
        int i = 1;
        while (true) {
            double j = m;
            while (true)
            {
                if (!executed[i] && !--j)
                    break;
                if (++i > n)
                    i = 1;
            }

#ifdef DEBUG
            cout << i << ' ';
#endif

            executed[i] = true;
            if (i > A)
            {
                if (++n_executed == A)
                {

#ifdef DEBUG
                   cout << endl;
#endif
                   return m;
               }
           }
           else {

 #ifdef DEBUG
                cout << endl;
 #endif

               break;
           }
       }
   }
}
int main()
{
   while (true) {
       int A;
       cin >> A;
       if (!A)
           break;
       cout << get_random_number(A) << endl;
   }
   return 0;
}
