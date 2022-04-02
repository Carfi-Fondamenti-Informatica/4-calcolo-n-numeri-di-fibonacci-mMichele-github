#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cout << "Inserire un numero intero positivo maggiore o uguale di 2: " << endl;
    cin >> n;
    int t1=1, t2=1, c=2;
    int next=0;
    if ((n>=2))
    {
        cout << t1 << endl <<t2 << endl;
        while ((n>c))
        {
            cout << (next=t1+t2) << endl;
            c++;
            t1=t2;
            t2=next;
        }
    }
    else
    {
        cout << "errore" << endl;
    }
    return 0;
}

