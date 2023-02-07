#include <iostream>

using namespace std;

void bicia(szach &s)
{
    int n, m, i, x, y, rzad, z, kolumna1;
    char kolumna[8];
    cout << "Chcesz sprawdzić dostępne bicia?" << endl;
    cout << "wybierz 1 jeśli tak a 0 jeśli nie: ";
    cin >> i;
    if (i == 1)
        ;
    {
        cout << endl;
        cout << "===================================" << endl;
        cout << endl;
        cout << "1-A" << endl;
        cout << "2-B" << endl;
        cout << "3-C" << endl;
        cout << "4-D" << endl;
        cout << "5-E" << endl;
        cout << "6-F" << endl;
        cout << "7-G" << endl;
        cout << "8-H" << endl;
    }

    cout << "Wybierz kolumne: ";
    cin >> m;
    if (m <= 0)
        cout << "Nie ma takiej kolumny" << endl;
    if (m >= 9)
        cout << "Nie ma takiej kolumny" << endl;
    cout << "Wybierz rząd od 1 do 8: ";
    cin >> n;
    rzad = n;
    kolumna1 = m;
    kolumna[0] = 'A';
    kolumna[1] = 'B';
    kolumna[2] = 'C';
    kolumna[3] = 'D';
    kolumna[4] = 'E';
    kolumna[5] = 'F';
    kolumna[6] = 'G';
    kolumna[7] = 'H';
    if (n <= 0)
        cout << "Nie ma takiego rzędu" << endl;
    if (n >= 9)
        cout << "Nie ma takiego rzędu" << endl;
    n = n - 1;
    m = m - 1;
    switch (s.tab[n][m])
    {
    case 0:
        cout << "Na tym polu nie ma figury" << endl;
        break;
    case 1:
        if (s.tab[n + 1][m] == 0&&(n+1)>0&&(n+1)<9)
            cout << "Biały król może ruszyć się na pole " << kolumna[m] << n + 2 << endl;

        if (s.tab[n - 1][m] == 0&&(n-1)>0&&(n-1)<9)
            cout << "Biały król może ruszyć się na pole " << kolumna[m] << n << endl;

        if (s.tab[n][m + 1] == 0&&isalpha(kolumna[m + 1]))
            cout << "Biały król może ruszyć się na pole " << kolumna[m + 1] << n + 1 << endl;

        if (s.tab[n][m - 1] == 0&&isalpha(kolumna[m - 1]))
            cout << "Biały król może ruszyć się na pole " << kolumna[m - 1] << n + 1<< endl;

        if (s.tab[n + 1][m + 1] == 0&&isalpha(kolumna[m + 1])&&(n+1)>0&&(n+1)<9)
            cout << "Biały król może ruszyć się na pole " << kolumna[m + 1] << n + 2 << endl;

        if (s.tab[n - 1][m - 1] == 0&&isalpha(kolumna[m - 1])&&(n-1)>0&&(n-1)<9)
            cout << "Biały król może ruszyć się na pole " << kolumna[m - 1] << n << endl;

        if (s.tab[n + 1][m - 1] == 0&&isalpha(kolumna[m - 1])&&(n+1)>0&&(n+1)<9)
            cout << "Biały król może ruszyć się na pole " << kolumna[m - 1] << n + 2 << endl;

        if (s.tab[n - 1][m + 1] == 0&&isalpha(kolumna[m + 1])&&(n-1)>0&&(n-1)<9)
            cout << "Biały król może ruszyć się na pole " << kolumna[m + 1] << n << endl;

        if (s.tab[n + 1][m] > 10&&isalpha(kolumna[m + 1])&&(n+1)>0&&(n+1)<9)
            cout << "Biały król może zbić figurę na polu " << kolumna[m] << n + 2 << endl;

        if (s.tab[n - 1][m] > 10&&isalpha(kolumna[m])&&(n-1)>0&&(n-1)<9)
            cout << "Biały król może zbić figurę na polu " << kolumna[m] << n << endl;

        if (s.tab[n][m + 1] > 10&&isalpha(kolumna[m + 1])&&(n)>0&&(n)<9)
            cout << "Biały król może zbić figurę na polu " << kolumna[m + 1] << n + 1 << endl;

        if (s.tab[n][m - 1] > 10&&isalpha(kolumna[m - 1])&&(n)>0&&(n)<9)
            cout << "Biały król może zbić figurę na polu " << kolumna[m - 1] << n + 1 << endl;

        if (s.tab[n + 1][m + 1] > 10&&isalpha(kolumna[m + 1])&&(n+1)>0&&(n+1)<9)
            cout << "Biały król może zbić figurę na polu " << kolumna[m + 1] << n + 2 << endl;

        if (s.tab[n - 1][m - 1] > 10&&isalpha(kolumna[m - 1])&&(n-1)>0&&(n-1)<9)
            cout << "Biały król może zbić figurę na polu " << kolumna[m - 1] << n << endl;

        if (s.tab[n + 1][m - 1] > 10&&isalpha(kolumna[m - 1])&&(n+1)>0&&(n+1)<9)
            cout << "Biały król może zbić figurę na polu " << kolumna[m - 1] << n + 2 << endl;

        if (s.tab[n - 1][m + 1] > 10&&isalpha(kolumna[m + 1])&&(n-1)>0&&(n-1)<9)
            cout << "Biały król może zbić figurę na polu " << kolumna[m + 1] << n << endl;
        break;

    case 2:
    m=kolumna1;
        n=rzad;
        x = 0;
        for (m = kolumna1 + 1; m <= 7; m++)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Biały hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] > 10)
                {
                    cout << "Biały hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
            z++;
        }
        x = 0;
        m=kolumna1;
        n=rzad;
        for (m = kolumna1 - 1; m >= 0; m--)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Biały hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] > 10)
                {
                    cout << "Biały hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        m=kolumna1;
        n=rzad;
        for (n = rzad - 1; n >= 0; n--)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Biały hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] > 10)
                {
                    cout << "Biały hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        m=kolumna1;
        n=rzad;
        for (n = rzad + 1; n <= 7; n++)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Biały hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] > 10)
                {
                    cout << "Biały hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        m=kolumna1;
        n=rzad;
        for (m = kolumna1 + 1; m <= 7; m++)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Biały hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;
                
                if (s.tab[n][m] > 10)
                {
                    cout << "Biały hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
                }
                if (n == 7)
                    y = 1;
                else
                    n++;
            }
        }
        x = 0;
        y = 0;
        m=kolumna1;
        n=rzad;
        for (m = kolumna1 - 1; m >= 0; m--)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Biały goniec może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                    if (s.tab[n][m] > 10)
                    {
                        cout << "Biały hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                        x = 1;
                    }
                }
                if (n == 7)
                    y = 1;
                else
                    n++;
            }
        }
        x = 0;
        y = 0;
        m=kolumna1;
        n=rzad;
        for (n = rzad - 1; n >= 0; n--)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Biały hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                    if (s.tab[n][m] > 10)
                    {
                        cout << "Biały hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                        x = 1;
                    }
                }
                if (m == 7)
                    y = 1;
                else
                    m++;
            }
        }
        x = 0;
        y = 0;
        m=kolumna1;
        n=rzad;
        for (n = rzad - 1; n >= 0; n--)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Biały hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;
                
                if (s.tab[n][m] > 10)
                {
                    cout << "Biały hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
                }
                if (m == 0)
                    y = 1;
                else
                    m--;
            }
        }
        x = 0;
        y = 0;
        m=kolumna1;
        n=rzad;
        break;

    case 3:
        x = 0;
        for (m = kolumna1 + 1; m <= 7; m++)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Biały goniec może się ruszyć na pole " << kolumna[m] << n + 1 << endl;
                
                if (s.tab[n][m] > 10)
                {
                    cout << "Biały goniec może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
                }
                if (n == 7)
                    y = 1;
                else
                    n++;
            }
        }
        m=kolumna1;
        n=rzad;
        x = 0;
        y = 0;
        for (m = kolumna1 - 1; m >= 0; m--)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Biały goniec może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                    if (s.tab[n][m] > 10)
                    {
                        cout << "Biały goniec może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                        x = 1;
                    }
                }
                if (n == 7)
                    y = 1;
                else
                    n++;
            }
        }
        m=kolumna1;
        n=rzad;
        x = 0;
        y = 0;
        for (n = rzad - 1; n >= 0; n--)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Biały goniec może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                    if (s.tab[n][m] > 10)
                    {
                        cout << "Biały goniec może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                        x = 1;
                    }
                }
                if (m == 7)
                    y = 1;
                else
                    m++;
            }
        }
        x = 0;
        y = 0;
        m=kolumna1;
        n=rzad;
        for (n = rzad - 1; n >= 0; n--)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Biały goniec może się ruszyć na pole " << kolumna[m] << n + 1 << endl;
                
                if (s.tab[n][m] > 10)
                {
                    cout << "Biały goniec może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
                }
                if (m == 0)
                    y = 1;
                else
                    m--;
            }
        }
        x = 0;
        y = 0;
        m=kolumna1;
        n=rzad;
        break;

    case 4:
        if (s.tab[n + 2][m + 1] == 0)
            cout << "Biały skoczek może się ruszyć na pole " << kolumna[m + 1] << n + 3;
        if (s.tab[n + 2][m - 1] == 0)
            cout << "Biały skoczek może się ruszyć na pole " << kolumna[m - 1] << n + 3;
        if (s.tab[n - 2][m + 1] == 0)
            cout << "Biały skoczek może się ruszyć na pole " << kolumna[m + 1] << n - 1;
        if (s.tab[n - 2][m - 1] == 0)
            cout << "Biały skoczek może się ruszyć na pole " << kolumna[m - 1] << n - 1;
        if (s.tab[n + 1][m - 2] == 0)
            cout << "Biały skoczek może się ruszyć na pole " << kolumna[m - 2] << n + 2;
        if (s.tab[n - 1][m - 2] == 0)
            cout << "Biały skoczek może się ruszyć na pole " << kolumna[m - 2] << n;
        if (s.tab[n + 1][m + 2] == 0)
            cout << "Biały skoczek może się ruszyć na pole " << kolumna[m + 2] << n + 2;
        if (s.tab[n - 1][m + 2] == 0)
            cout << "Biały skoczek może się ruszyć na pole " << kolumna[m + 2] << n;

        if (s.tab[n + 2][m + 1] > 10)
            cout << "Biały skoczek może zbić figure stojącą na polu " << kolumna[m + 1] << n + 3;
        if (s.tab[n + 2][m - 1] > 10)
            cout << "Biały skoczek może zbić figure stojącą na polu " << kolumna[m - 1] << n + 3;
        if (s.tab[n - 2][m + 1] > 10)
            cout << "Biały skoczek może zbić figure stojącą na polu " << kolumna[m + 1] << n-2;
        if (s.tab[n - 2][m - 1] > 10)
            cout << "Biały skoczek może zbić figure stojącą na polu " << kolumna[m - 1] << n;
        if (s.tab[n + 1][m - 2] > 10)
            cout << "Biały skoczek może zbić figure stojącą na polu " << kolumna[m - 2] << n;
        if (s.tab[n - 1][m - 2] > 10)
            cout << "Biały skoczek może zbić figure stojącą na polu " << kolumna[m - 2] << n;
        if (s.tab[n + 1][m + 2] > 10)
            cout << "Biały skoczek może zbić figure stojącą na polu " << kolumna[m + 2] << n + 2;
        if (s.tab[n - 1][m + 2] > 10)
            cout << "Biały skoczek może zbić figure stojącą na polu " << kolumna[m + 2] << n;
        break;

    case 5:
        x = 0;
        for (m = kolumna1 + 1; m <= 7; m++)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Biała wieża może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] > 10)
                {
                    cout << "Biała wieża może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        for (m = kolumna1 - 1; m >= 0; m--)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Biała wieża może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] > 10)
                {
                    cout << "Biała wieża może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        for (n = rzad - 1; n >= 0; n--)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Biała wieża może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] > 10)
                {
                    cout << "Biała wieża może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        for (n = rzad + 1; n <= 7; n++)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Biała wieża może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] > 10)
                {
                    cout << "Biała wieża może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        break;

    case 7:
        if (s.tab[n - 1][m + 1] > 10)
            cout << "Biały pionek może zbić figure będącą na polu " << kolumna[m + 1] << n << endl;
        if (s.tab[n - 1][m - 1] > 10)
            cout << "Biały pionek może zbić figure będącą na polu " << kolumna[m - 1] << n << endl;
        if (s.tab[n - 1][m] == 0)
            cout << "Biały pionek może się ruszyć na pole " << kolumna[m] << n << endl;
        break;
    case 11:
        if (s.tab[n + 1][m] == 0)
            cout << "Czarny król może ruszyć się na pole " << kolumna[m] << n + 2 << endl;
        if (s.tab[n - 1][m] == 0)
            cout << "Czarny król może ruszyć się na pole " << kolumna[m] << n << endl;
        if (s.tab[n][m + 1] == 0)
            cout << "Czarny król może ruszyć się na pole " << kolumna[m + 1] << n + 1 << endl;
        if (s.tab[n][m - 1] == 0)
            cout << "Czarny król może ruszyć się na pole " << kolumna[m - 1] << n + 1 << endl;
        if (s.tab[n + 1][m + 1] == 0)
            cout << "Czarny król może ruszyć się na pole " << kolumna[m + 1] << n + 2 << endl;
        if (s.tab[n - 1][m - 1] == 0)
            cout << "Czarny król może ruszyć się na pole " << kolumna[m - 1] << n << endl;
        if (s.tab[n + 1][m - 1] == 0)
            cout << "Czarny król może ruszyć się na pole " << kolumna[m - 1] << n + 2 << endl;
        if (s.tab[n - 1][m + 1] == 0)
            cout << "Czarny król może ruszyć się na pole " << kolumna[m + 1] << n << endl;
        if (s.tab[n + 1][m] < 10 && s.tab[n + 1][m] != 0)
            cout << "Czarny król może zbić figurę na polu " << kolumna[m] << n + 2 << endl;
        if (s.tab[n - 1][m] < 10 && s.tab[n - 1][m] != 0)
            cout << "Czarny król może zbić figurę na polu " << kolumna[m] << n << endl;
        if (s.tab[n][m + 1] < 10 && s.tab[n][m + 1] != 0)
            cout << "Czarny król może zbić figurę na polu " << kolumna[m+1] << n + 1 << endl;
        if (s.tab[n][m - 1] < 10 && s.tab[n][m - 1] != 0)
            cout << "Czarny król może zbić figurę na polu " << kolumna[m - 1] << n + 1 << endl;
        if (s.tab[n + 1][m + 1] < 10 && s.tab[n + 1][m + 1] != 0)
            cout << "Czarny król może zbić figurę na polu " << kolumna[m + 1] << n + 2 << endl;
        if (s.tab[n - 1][m - 1] < 10 && s.tab[n - 1][m - 1] != 0)
            cout << "Czarny król może zbić figurę na polu " << kolumna[m - 1] << n << endl;
        if (s.tab[n + 1][m - 1] < 10 && s.tab[n + 1][m - 1] != 0)
            cout << "Czarny król może zbić figurę na polu " << kolumna[m - 1] << n+2 << endl;
        if (s.tab[n - 1][m + 1] < 10 && s.tab[n - 1][m + 1] != 0)
            cout << "Czarny król może zbić figurę na polu " << kolumna[m + 1] << n << endl;
        break;

    case 22:
     y = 0;
     x = 0;
        for (m = kolumna1 + 1; m <= 7; m++)
        {
            n=n+1;
            if (n >= 7)
                y = 1;
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Czarny Hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;
                
                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarny Hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
                }
                
                    
            }
        }
        x = 0;
        y = 0;
        m=kolumna1;
        n=rzad;
        for (m = kolumna1 - 1; m >= 0; m--)
        {
            n=n+1;
            if (n >= 7)
                y = 1;
            
            
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Czarny Hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                    if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                    {
                        cout << "Czarny Hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                        x = 1;
                    }
                }
                
                    
            }
        }
        x = 0;
        y = 0;
        m=kolumna1;
        n=rzad;
        for (n = rzad - 1; n >= 0; n--)
        {
             m=m+1;
             if (m >= 7)
                    y = 1;
                 
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Czarny Hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                    if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                    {
                        cout << "Czarny Hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                        x = 1;
                    }
                }
               
            }
        }
        m=kolumna1;
        n=rzad;
        x = 0;
        y = 0;
        for (n = rzad - 1; n >= 0; n--)
        {
            m=m-1;
             if (m >= 7)
                    y = 1;
                
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Czarny Hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;
                
                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarny Hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
                }
                
            }
        }
        m=kolumna1;
        n=rzad;
        x = 0;
        y = 0;
        for (n = rzad; n <= 7; n++)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Czarny Hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarny Hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        m=kolumna1;
        n=rzad;
        for (n = rzad; n >= 0; n--)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Czarny Hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarny Hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        m=kolumna1;
        n=rzad;
        for (m = kolumna1; m >= 0; m--)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Czarny Hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarny Hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        m=kolumna1;
        n=rzad;
        for (m = kolumna1; m <= 7; m++)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Czarny Hetman może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarny Hetman może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        m=kolumna1;
        n=rzad;
        break;

    case 33:
        x = 0;
        for (m = kolumna1 + 1; m <= 7; m++)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Czarny goniec może się ruszyć na pole " << kolumna[m] << n + 1 << endl;
                
                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarny goniec może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
                }
                if (n == 7)
                    y = 1;
                else
                    n++;
            }
        }
        
        x = 0;
        y = 0;
        for (m = kolumna1 - 1; m >= 0; m--)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Czarny goniec może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                    if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                    {
                        cout << "Czarny goniec może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                        x = 1;
                    }
                }
                if (n == 7)
                    y = 1;
                else
                    n++;
            }
        }
        m=kolumna1;
        n=rzad;
        x = 0;
        y = 0;
        for (n = rzad - 1; n >= 0; n--)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Czarny goniec może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                    if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                    {
                        cout << "Czarny goniec może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                        x = 1;
                    }
                }
                if (m == 7)
                    y = 1;
                else
                    m++;
            }
        }
        m=kolumna1;
        n=rzad;
        x = 0;
        y = 0;
        for (n = rzad - 1; n >= 0; n--)
        {
            if (y == 0)
            {
                if (x == 0)
                {
                    if (s.tab[n][m] == 0)
                        cout << "Czarny goniec może się ruszyć na pole " << kolumna[m] << n + 1 << endl;
                
                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarny goniec może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
                }
                if (m == 0)
                    y = 1;
                else
                    m--;
            }
        }
        m=kolumna1;
        n=rzad;
        x = 0;
        y = 0;
        break;

    case 44:
        if (s.tab[n + 2][m + 1] == 0)
            cout << "Czarny skoczek może się ruszyć na pole " << kolumna[m + 1] << n + 3;
        if (s.tab[n + 2][m - 1] == 0)
            cout << "Czarny skoczek może się ruszyć na pole " << kolumna[m - 1] << n + 3;
        if (s.tab[n - 2][m + 1] == 0)
            cout << "Czarny skoczek może się ruszyć na pole " << kolumna[m + 1] << n - 1;
        if (s.tab[n - 2][m - 1] == 0)
            cout << "Czarny skoczek może się ruszyć na pole " << kolumna[m - 1] << n - 1;
        if (s.tab[n + 1][m - 2] == 0)
            cout << "Czarny skoczek może się ruszyć na pole " << kolumna[m - 2] << n + 2;
        if (s.tab[n - 1][m - 2] == 0)
            cout << "Czarny skoczek może się ruszyć na pole " << kolumna[m - 2] << n;
        if (s.tab[n + 1][m + 2] == 0)
            cout << "Czarny skoczek może się ruszyć na pole " << kolumna[m + 2] << n + 2;
        if (s.tab[n - 1][m + 2] == 0)
            cout << "Czarny skoczek może się ruszyć na pole " << kolumna[m + 2] << n;

        if (s.tab[n + 2][m + 1] < 10 && s.tab[n][m] != 0)
            cout << "Czarny skoczek może zbić figure stojącą na polu " << kolumna[m + 1] << n + 3;
        if (s.tab[n + 2][m - 1] < 10 && s.tab[n][m] != 0)
            cout << "Czarny skoczek może zbić figure stojącą na polu " << kolumna[m - 1] << n + 3;
        if (s.tab[n - 2][m + 1] < 10 && s.tab[n][m] != 0)
            cout << "Czarny skoczek może zbić figure stojącą na polu " << kolumna[m + 1] << n-2;
        if (s.tab[n - 2][m - 1] < 10 && s.tab[n][m] != 0)
            cout << "Czarny skoczek może zbić figure stojącą na polu " << kolumna[m - 1] << n;
        if (s.tab[n + 1][m - 2] < 10 && s.tab[n][m] != 0)
            cout << "Czarny skoczek może zbić figure stojącą na polu " << kolumna[m - 2] << n;
        if (s.tab[n - 1][m - 2] < 10 && s.tab[n][m] != 0)
            cout << "Czarny skoczek może zbić figure stojącą na polu " << kolumna[m - 2] << n;
        if (s.tab[n + 1][m + 2] < 10 && s.tab[n][m] != 0)
            cout << "Czarny skoczek może zbić figure stojącą na polu " << kolumna[m + 2] << n + 2;
        if (s.tab[n - 1][m + 2] < 10 && s.tab[n][m] != 0)
            cout << "Czarny skoczek może zbić figure stojącą na polu " << kolumna[m + 2] << n;
        break;

    case 55:
        x = 0;
        for (n = rzad + 1; n <= 7; n++)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Czarna wieża może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarna wieża może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        for (n = rzad - 1; n >= 0; n--)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Czarna wieża może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarna wieża może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        for (m = kolumna1 - 1; m >= 0; m--)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Czarna wieża może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarna wieża może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        for (m = kolumna1 + 1; m <= 7; m++)
        {
            if (x == 0)
            {
                if (s.tab[n][m] == 0)
                    cout << "Czarna wieża może się ruszyć na pole " << kolumna[m] << n + 1 << endl;

                if (s.tab[n][m] < 10 && s.tab[n][m] != 0)
                {
                    cout << "Czarna wieża może zbić figurę stojącą na polu " << kolumna[m] << n + 1 << endl;
                    x = 1;
                }
            }
        }
        x = 0;
        break;

    case 77:
        if (s.tab[n + 1][m + 1] < 10 && s.tab[n + 1][m + 1] != 0)
            cout << "Czarny pionek na polu " << kolumna[m] << n + 1 << " może zbić figure będącą na polu " << kolumna[m + 1] << n + 2 << endl;
        if (s.tab[n + 1][m - 1] < 10 && s.tab[n + 1][m - 1] != 0)
            cout << "Czarny pionek na polu " << kolumna[n] << n+1 << " może zbić figure będącą na polu " << kolumna[m - 1] << n + 1 << endl;
        if (s.tab[n + 1][m] == 0)
            cout << "Czarny pionek na polu " << kolumna[n] << m << " może się ruszyć na pole " << kolumna[m] << n + 2 << endl;
        break;
    }
}