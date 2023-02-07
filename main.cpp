#include <cstdlib>
#include "szachownica.cpp"
#include "dane.cpp"
#include "bicia.cpp"
using namespace std;

int main()
{ 
setlocale(LC_ALL,"Polish");
szach s1;
int i=1,j=1;
while(j==1)
    {
    dane();
    szachownica_przypisz(s1);
    szachownica_wypisz(s1);
    while(i==1)
        {
        bicia(s1);
        cout<<"Czy chcesz sprawdzić inne dostępne ruchy? 1-tak 0-nie: ";
        cin>>i;
        }
    cout<<"Czy chcesz wprowadzić inną sytuacje? 1-tak 0-nie: ";
    cin>>j;
    }
    cout<<"Koniec programu"<<endl;
}