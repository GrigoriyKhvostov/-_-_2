#include <iostream>
using namespace std;

struct Paladin
{
    char mass[20];
    int soul;
    
};
int main()
{
    Paladin first;
    Paladin second;
    Paladin third;
    Paladin fourth;
    /*for (int x = 0; x < 20; x++)
    {
        first.mass[x] = '0';
        second.mass[x] = '0';
        third.mass[x] = '0';
        fourth.mass[x] = '0';
    }*/
    cin >> first.mass >> first.soul;
    cin >> second.mass >> second.soul;
    cin >> third.mass >> third.soul;
    cin >> fourth.mass >> fourth.soul;
    /*for (int y = 0; y < 20; y++)
    {
        cout << first.mass[y] << " " << second.mass[y] << " " <<third.mass[y]<< " " << fourth.mass[y] << "\n";
    }*/

    cout << first.mass <<" "<< first.soul<< "\n"<< second.mass<<" "<< second.soul<< "\n" << third.mass << " " << third.soul << "\n" << fourth.mass << " " << fourth.soul<<"\n";
    int food, torch, N, a, b, c, k=1, damage;
    cin >> food >> torch >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            food = food - b;
            cout << i << " "<< a << " " << food << "\n";
        }
        else if (a == 2)
        {
            torch = torch - 1;
            cout << i << " " << a << " " << torch << "\n";
        }
        else if (a == 3)
        {
            cin >> b >> c;
            food = food + b;
            torch = torch + c;
            cout << i << " " << a << " " << food << " " << torch << "\n";
        }
        else if (a==4)
        {
            if (torch <= 0 && food <= 0)
            {
                k = 6;
            }
            else if (torch <= 0)
            {
                k = 2;
            }
            else if (food <= 0)
            {
                k = 3;
            }
            
            for (int b = 0; b < 4; b++)
            {
                int lesha = 1;
                    char mass[20];
                    cin >> mass;
                    /*while (2 < 5)
                    {
                        char bukva;
                        cin >> bukva;
                        if (bukva == ' ')
                        {
                            break;
                        }
                        else
                        {
                            mass = bukva;
                        }
                    }*/
                    //cout << mass <<" ";
                    

                    for (int t = 0; t < 20; t++)
                    {
                        if (mass[t] != first.mass[t])
                        {
                            lesha = 0;
                        }
                        //cout << lesha << " ";
                    }
                    
                    if (lesha == 1)
                    {
                        cin >> damage;
                        //cout << "\n" << "damage:" << damage << "\n";
                        first.soul = first.soul - damage * k;
                    }
                    lesha = 1;
                    for (int t = 0; t < 20; t++)
                    {
                        if (mass[t] != second.mass[t])
                        {
                            lesha = 0;
                        }
                        //cout << lesha << " ";
                    }
                    
                    if (lesha == 1)
                    {
                        cin >> damage;
                        second.soul = second.soul - damage * k;
                    }
                    
                    lesha = 1;
                    for (int t = 0; t < 20; t++)
                    {
                        if (mass[t] != third.mass[t])
                        {
                            lesha = 0;
                        }
                        //cout << lesha << " ";
                    }
                    
                    if (lesha == 1)
                    {
                        cin >> damage;
                        third.soul = third.soul - damage * k;
                    }
                    lesha = 1;
                    
                    for (int t = 0; t < 20; t++)
                    {
                        if (mass[t] != fourth.mass[t])
                        {
                            lesha = 0;
                        }
                        //cout << lesha << " ";
                    }
                    
                    if (lesha == 1)
                    {
                        cin >> damage;
                        fourth.soul = fourth.soul - damage * k;
                    }
                    lesha = 1;
                    /*for (int x = 0; x < 20; x++)
                     {
                        mass[x] = ' ';
                    }*/
                    //delete mass;
                    
            }
            cout << "\n" << first.mass << " " << first.soul << " " << second.mass << " " << second.soul << " " << third.mass << " " << third.soul << " " << fourth.mass << " " << fourth.soul << "\n";
            if (first.soul < 0 && second.soul < 0 && third.soul < 0 && fourth.soul < 0)
            {
                cout << i;
                break;
            }
        }
    }
    /*char mass[20], mass1[20];
    cin >> mass;
    cin >> mass1;
    int lesha = 1;
    for (int i = 0; i<20; i++)
    {
        if (mass[i] != mass1[i])
        {
            lesha = 0;
        }
    }
    if (lesha == 1)
    {
        cout << "rabotaet";
    }*/
    /*if (mass == mass1)
    {
        cout << 1;
    }*/
}
