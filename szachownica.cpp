#include  <iostream>
#include "szachownica2.cpp"
using namespace std;
    
void A(szach& s)
{
    int i,j;
    int krol=0,hetman=0,wieza=0,skoczek=0,goniec=0,pionek=0;
    int krol2=0,hetman2=0,wieza2=0,skoczek2=0,goniec2=0,pionek2=0;
    bool zmienna=false;
    for(j=0;j<8;j++) 
    {
        zmienna=false;
        while (zmienna==false)
        {
            cout<<"Co chcesz Ustawić na polu A"<<j+1<<": ";
            cin>>s.tab[0][j];
            if (s.tab[0][j]!=0  &&s.tab[0][j]!=1  && s.tab[0][j]!=2  && s.tab[0][j]!=3  && s.tab[0][j]!=4  && s.tab[0][j]!=5 && s.tab[0][j]!=7  && s.tab[0][j]!=11  && s.tab[0][j]!=22  && s.tab[0][j]!=33  && s.tab[0][j]!=44  && s.tab[0][j]!=55  && s.tab[0][j]!=77)
            {
                zmienna=false;
                cout<<"Nie ma takiej figury, wybierz jeszcza raz"<<endl;
            }
            else zmienna=true;
            if(s.tab[0][j]==1)
            {
                if(krol==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol++;
            }
            if(s.tab[0][j]==2)
            {
                if(hetman==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman++;
            }
            if(s.tab[0][j]==3)
            {
                if(goniec==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec++;
            }
            if(s.tab[0][j]==4)
            {
                if(skoczek==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek++;
            }
            if(s.tab[0][j]==5)
            {
                if(wieza==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza++;
            }
            if(s.tab[0][j]==7)
            {
                if(pionek==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek++;
            }
            if(s.tab[0][j]==11)
            {
                if(krol2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol2++;
            }
            if(s.tab[0][j]==22)
            {
                if(hetman2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman2++;
            }
            if(s.tab[0][j]==33)
            {
                if(goniec2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec2++;
            }
            if(s.tab[0][j]==44)
            {
                if(skoczek2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek2++;
            }
            if(s.tab[0][j]==55)
            {
                if(wieza2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza2++;
            }
            if(s.tab[0][j]==77)
            {
                if(pionek2==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek2++;
            }
        }     
    }
    zmienna=false;
}
void B(szach& s)
{
    int i,j;
    int krol=0,hetman=0,wieza=0,skoczek=0,goniec=0,pionek=0;
    int krol2=0,hetman2=0,wieza2=0,skoczek2=0,goniec2=0,pionek2=0;
    bool zmienna=false;
    for(j=0;j<8;j++) 
    {   
        zmienna=false;
        while (zmienna==false)
       {
            cout<<"Co chcesz Ustawić na polu B"<<j+1<<": ";
            cin>>s.tab[1][j];
            if (s.tab[1][j]!=0  && s.tab[1][j]!=1  && s.tab[1][j]!=2  && s.tab[1][j]!=3  && s.tab[1][j]!=4  && s.tab[1][j]!=5  && s.tab[1][j]!=7  && s.tab[1][j]!=11  && s.tab[1][j]!=22  && s.tab[1][j]!=33  && s.tab[1][j]!=44  && s.tab[1][j]!=55 && s.tab[1][j]!=77)
            {
                zmienna=false;
                cout<<"Nie ma takiej figury, wybierz jeszcza raz"<<endl;
            }
            else zmienna=true;
            if(s.tab[1][j]==1)
            {
                if(krol==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol++;
            }
            if(s.tab[1][j]==2)
            {
                if(hetman==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman++;
            }
            if(s.tab[1][j]==3)
            {
                if(goniec==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec++;
            }
            if(s.tab[1][j]==4)
            {
                if(skoczek==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek++;
            }
            if(s.tab[1][j]==5)
            {
                if(wieza==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza++;
            }
            if(s.tab[1][j]==7)
            {
                if(pionek==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek++;
            }
            if(s.tab[1][j]==11)
            {
                if(krol2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol2++;
            }
            if(s.tab[1][j]==22)
            {
                if(hetman2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman2++;
            }
            if(s.tab[1][j]==33)
            {
                if(goniec2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec2++;
            }
            if(s.tab[1][j]==44)
            {
                if(skoczek2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek2++;
            }
            if(s.tab[1][j]==55)
            {
                if(wieza2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza2++;
            }
            if(s.tab[1][j]==77)
            {
                if(pionek2==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek2++;
            }
        }
        
    }    
}
void C(szach& s)
{
    int i,j;
    int krol=0,hetman=0,wieza=0,skoczek=0,goniec=0,pionek=0;
    int krol2=0,hetman2=0,wieza2=0,skoczek2=0,goniec2=0,pionek2=0;
    bool zmienna=false;
    for(j=0;j<8;j++) 
    {
        zmienna=false;
        while (zmienna==false)
       {
            cout<<"Co chcesz Ustawić na polu C"<<j+1<<": ";
            cin>>s.tab[2][j];
            if (s.tab[2][j]!=0  && s.tab[2][j]!=1  && s.tab[2][j]!=2  && s.tab[2][j]!=3  && s.tab[2][j]!=4  && s.tab[2][j]!=5  && s.tab[2][j]!=7  && s.tab[2][j]!=11  && s.tab[2][j]!=22  && s.tab[2][j]!=33  && s.tab[2][j]!=44  && s.tab[2][j]!=55  && s.tab[2][j]!=77)
            {
                zmienna=false;
                cout<<"Nie ma takiej figury, wybierz jeszcza raz"<<endl;
            }
            else zmienna=true;
            if(s.tab[2][j]==1)
            {
                if(krol==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol++;
            }
            if(s.tab[2][j]==2)
            {
                if(hetman==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman++;
            }
            if(s.tab[2][j]==3)
            {
                if(goniec==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec++;
            }
            if(s.tab[2][j]==4)
            {
                if(skoczek==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek++;
            }
            if(s.tab[2][j]==5)
            {
                if(wieza==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza++;
            }
            if(s.tab[2][j]==7)
            {
                if(pionek==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek++;
            }
            if(s.tab[2][j]==11)
            {
                if(krol2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol2++;
            }
            if(s.tab[2][j]==22)
            {
                if(hetman2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman2++;
            }
            if(s.tab[2][j]==33)
            {
                if(goniec2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec2++;
            }
            if(s.tab[2][j]==44)
            {
                if(skoczek2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek2++;
            }
            if(s.tab[2][j]==55)
            {
                if(wieza2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza2++;
            }
            if(s.tab[2][j]==77)
            {
                if(pionek2==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek2++;
            }
        }
    }    
}
void D(szach& s)
{
    int i,j;
    int krol=0,hetman=0,wieza=0,skoczek=0,goniec=0,pionek=0;
    int krol2=0,hetman2=0,wieza2=0,skoczek2=0,goniec2=0,pionek2=0;
    bool zmienna=false;
    for(j=0;j<8;j++) 
    {
        zmienna=false;
        while (zmienna==false)
       {
            cout<<"Co chcesz Ustawić na polu D"<<j+1<<": ";
            cin>>s.tab[3][j];
            if (s.tab[3][j]!=0  && s.tab[3][j]!=1  && s.tab[3][j]!=2  && s.tab[3][j]!=3  && s.tab[3][j]!=4  && s.tab[3][j]!=5  && s.tab[3][j]!=7  && s.tab[3][j]!=11  && s.tab[3][j]!=22  && s.tab[3][j]!=33  && s.tab[3][j]!=44  && s.tab[3][j]!=55  && s.tab[3][j]!=77)
            {
                zmienna=false;
                cout<<"Nie ma takiej figury, wybierz jeszcza raz"<<endl;
            }
            else zmienna=true;
            if(s.tab[3][j]==1)
            {
                if(krol==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol++;
            }
            if(s.tab[3][j]==2)
            {
                if(hetman==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman++;
            }
            if(s.tab[3][j]==3)
            {
                if(goniec==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec++;
            }
            if(s.tab[3][j]==4)
            {
                if(skoczek==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek++;
            }
            if(s.tab[3][j]==5)
            {
                if(wieza==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza++;
            }
            if(s.tab[3][j]==7)
            {
                if(pionek==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek++;
            }
            if(s.tab[3][j]==11)
            {
                if(krol2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol2++;
            }
            if(s.tab[3][j]==22)
            {
                if(hetman2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman2++;
            }
            if(s.tab[3][j]==33)
            {
                if(goniec2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec2++;
            }
            if(s.tab[3][j]==44)
            {
                if(skoczek2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek2++;
            }
            if(s.tab[3][j]==55)
            {
                if(wieza2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza2++;
            }
            if(s.tab[3][j]==77)
            {
                if(pionek2==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek2++;
            }
        }
    }    
}
void E(szach& s)
{
    int i,j;
    int krol=0,hetman=0,wieza=0,skoczek=0,goniec=0,pionek=0;
    int krol2=0,hetman2=0,wieza2=0,skoczek2=0,goniec2=0,pionek2=0;
    bool zmienna=false;
    for(j=0;j<8;j++) 
    {
        zmienna=false;
        while (zmienna==false)
       {
            cout<<"Co chcesz Ustawić na polu E"<<j+1<<": ";
            cin>>s.tab[4][j];
            if (s.tab[4][j]!=0  && s.tab[4][j]!=1  && s.tab[4][j]!=2  && s.tab[4][j]!=3  && s.tab[4][j]!=4  && s.tab[4][j]!=5  && s.tab[4][j]!=7  && s.tab[4][j]!=11  && s.tab[4][j]!=22  && s.tab[4][j]!=33  && s.tab[4][j]!=44  && s.tab[4][j]!=55 && s.tab[4][j]!=77)
            {
                zmienna=false;
                cout<<"Nie ma takiej figury, wybierz jeszcza raz"<<endl;
            }
            else zmienna=true;
            if(s.tab[4][j]==1)
            {
                if(krol==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol++;
            }
            if(s.tab[4][j]==2)
            {
                if(hetman==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman++;
            }
            if(s.tab[4][j]==3)
            {
                if(goniec==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec++;
            }
            if(s.tab[4][j]==4)
            {
                if(skoczek==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek++;
            }
            if(s.tab[4][j]==5)
            {
                if(wieza==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza++;
            }
            if(s.tab[4][j]==7)
            {
                if(pionek==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek++;
            }
            if(s.tab[4][j]==11)
            {
                if(krol2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol2++;
            }
            if(s.tab[4][j]==22)
            {
                if(hetman2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman2++;
            }
            if(s.tab[4][j]==33)
            {
                if(goniec2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec2++;
            }
            if(s.tab[4][j]==44)
            {
                if(skoczek2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek2++;
            }
            if(s.tab[4][j]==55)
            {
                if(wieza2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza2++;
            }
            if(s.tab[4][j]==77)
            {
                if(pionek2==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek2++;
            }
        }
    }    
}
void F(szach& s)
{
    int i,j;
    int krol=0,hetman=0,wieza=0,skoczek=0,goniec=0,pionek=0;
    int krol2=0,hetman2=0,wieza2=0,skoczek2=0,goniec2=0,pionek2=0;
    bool zmienna=false;
    for(j=0;j<8;j++) 
    {
        while (zmienna==false)
       {
            cout<<"Co chcesz Ustawić na polu F"<<j+1<<": ";
            cin>>s.tab[5][j];
            if (s.tab[5][j]!=0  && s.tab[5][j]!=1  && s.tab[5][j]!=2  && s.tab[5][j]!=3  && s.tab[5][j]!=4  && s.tab[5][j]!=5  && s.tab[5][j]!=7  && s.tab[5][j]!=11  && s.tab[5][j]!=22  && s.tab[5][j]!=33  && s.tab[5][j]!=44  && s.tab[5][j]!=55  && s.tab[5][j]!=77)
            {
                zmienna=false;
                cout<<"Nie ma takiej figury, wybierz jeszcza raz"<<endl;
            }
            else zmienna=true;
            if(s.tab[5][j]==1)
            {
                if(krol==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol++;
            }
            if(s.tab[5][j]==2)
            {
                if(hetman==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman++;
            }
            if(s.tab[5][j]==3)
            {
                if(goniec==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec++;
            }
            if(s.tab[5][j]==4)
            {
                if(skoczek==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek++;
            }
            if(s.tab[5][j]==5)
            {
                if(wieza==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza++;
            }
            if(s.tab[5][j]==7)
            {
                if(pionek==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek++;
            }
            if(s.tab[5][j]==11)
            {
                if(krol2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol2++;
            }
            if(s.tab[5][j]==22)
            {
                if(hetman2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman2++;
            }
            if(s.tab[5][j]==33)
            {
                if(goniec2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec2++;
            }
            if(s.tab[5][j]==44)
            {
                if(skoczek2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek2++;
            }
            if(s.tab[5][j]==55)
            {
                if(wieza2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza2++;
            }
            if(s.tab[5][j]==77)
            {
                if(pionek2==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek2++;
            }
       }
    }    
}
void G(szach& s)
{
    int i,j;
    int krol=0,hetman=0,wieza=0,skoczek=0,goniec=0,pionek=0;
    int krol2=0,hetman2=0,wieza2=0,skoczek2=0,goniec2=0,pionek2=0;
    bool zmienna=false;
    for(j=0;j<8;j++) 
    {
        zmienna=false;
        while (zmienna==false)
       {
            cout<<"Co chcesz Ustawić na polu G"<<j+1<<": ";
            cin>>s.tab[6][j];
            if (s.tab[6][j]!=0  && s.tab[6][j]!=1  && s.tab[6][j]!=2  && s.tab[6][j]!=3  && s.tab[6][j]!=4  && s.tab[6][j]!=5  && s.tab[6][j]!=7  && s.tab[6][j]!=11  && s.tab[6][j]!=22  && s.tab[6][j]!=33  && s.tab[6][j]!=44  && s.tab[6][j]!=55  && s.tab[6][j]!=66  && s.tab[6][j]!=77)
            {
                zmienna=false;
                cout<<"Nie ma takiej figury, wybierz jeszcza raz"<<endl;
            }
            else zmienna=true;
            if(s.tab[6][j]==1)
            {
                if(krol==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol++;
            }
            if(s.tab[6][j]==2)
            {
                if(hetman==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman++;
            }
            if(s.tab[6][j]==3)
            {
                if(goniec==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec++;
            }
            if(s.tab[6][j]==4)
            {
                if(skoczek==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek++;
            }
            if(s.tab[6][j]==5)
            {
                if(wieza==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza++;
            }
            if(s.tab[6][j]==7)
            {
                if(pionek==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek++;
            }
            if(s.tab[6][j]==11)
            {
                if(krol2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol2++;
            }
            if(s.tab[6][j]==22)
            {
                if(hetman2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman2++;
            }
            if(s.tab[6][j]==33)
            {
                if(goniec2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec2++;
            }
            if(s.tab[6][j]==44)
            {
                if(skoczek2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek2++;
            }
            if(s.tab[6][j]==55)
            {
                if(wieza2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza2++;
            }
            if(s.tab[6][j]==77)
            {
                if(pionek2==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek2++;
            }
        }
    }    
}    
void H(szach& s)
{
    int i,j;
    int krol=0,hetman=0,wieza=0,skoczek=0,goniec=0,pionek=0;
    int krol2=0,hetman2=0,wieza2=0,skoczek2=0,goniec2=0,pionek2=0;
    bool zmienna=false;
    for(j=0;j<8;j++) 
    {
        zmienna=false;
        while (zmienna==false)
       {
            cout<<"Co chcesz Ustawić na polu H"<<j+1<<": ";
            cin>>s.tab[7][j];
            if (s.tab[7][j]!=0  && s.tab[7][j]!=1  && s.tab[7][j]!=2  && s.tab[7][j]!=3  && s.tab[7][j]!=4  && s.tab[7][j]!=5  && s.tab[7][j]!=7  && s.tab[7][j]!=11  && s.tab[7][j]!=22  && s.tab[7][j]!=33  && s.tab[7][j]!=44  && s.tab[7][j]!=55  && s.tab[7][j]!=77)
            {
                zmienna=false;
                cout<<"Nie ma takiej figury, wybierz jeszcza raz"<<endl;
            }
            else zmienna=true;
            if(s.tab[7][j]==1)
            {
                if(krol==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol++;
            }
            if(s.tab[7][j]==2)
            {
                if(hetman==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman++;
            }
            if(s.tab[7][j]==3)
            {
                if(goniec==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec++;
            }
            if(s.tab[7][j]==4)
            {
                if(skoczek==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek++;
            }
            if(s.tab[7][j]==5)
            {
                if(wieza==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza++;
            }
            if(s.tab[7][j]==7)
            {
                if(pionek==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek++;
            }
            if(s.tab[7][j]==11)
            {
                if(krol2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else krol2++;
            }
            if(s.tab[7][j]==22)
            {
                if(hetman2==1)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else hetman2++;
            }
            if(s.tab[7][j]==33)
            {
                if(goniec2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else goniec2++;
            }
            if(s.tab[7][j]==44)
            {
                if(skoczek2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else skoczek2++;
            }
            if(s.tab[7][j]==55)
            {
                if(wieza2==2)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else wieza2++;
            }
            if(s.tab[7][j]==77)
            {
                if(pionek2==8)
                {
                    cout<<"Ta figura jest już rozstawiona, wybierz jeszcze raz"<<endl;
                    zmienna=false;
                }
                else pionek2++;
            }
        } 
    }   
}

void szachownica_przypisz(szach& s)
{
    int i,j;
    int krol=0,hetman=0,wieza=0,skoczek=0,goniec=0,pionek=0;
    int krol2=0,hetman2=0,wieza2=0,skoczek2=0,goniec2=0,pionek2=0;
    bool zmienna=false;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++) s.tab[i][j]=0;
    }
    cout<<"Figury wpisujemy numerami tak jak podane są wyżej"<<endl;
    A(s);
    B(s);
    C(s);
    D(s);
    E(s);
    F(s);
    G(s);
    H(s);
}
 