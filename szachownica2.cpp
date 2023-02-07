#include <iostream>
using namespace std;
struct szach
{
    int tab[8][8];
};
void szachownica_wypisz(szach& s)
{
    int i,j;
    cout<<"    A  B  C  D  E  F  G  H "<<endl;
    cout<<"   ";
    for(j=0;j<12;j++)
    {
        cout<<"--";
    }
    cout<<"-";
    cout<<endl;
    for( i=0;i<8;i++)
    {
        cout<<i+1<<"  |";
        for( j=0;j<8;j++)
        {
            cout<<s.tab[i][j];
            if(s.tab[i][j]<10) cout<<" |";
            else cout<<"|";
        }
        cout<<endl;
        cout<<"   ";
        for(j=0;j<8;j++) 
        {
            cout<<"---";
        }
        cout<<"-";
        cout<<endl;
    }
}