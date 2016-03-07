#include "Tablica_dynamiczna.hh"

    void tablica_dyn::zapisz()
    {
        for(int i=0; i<rozmiar; i++)
        {
            tablica[i]=1;
            licznik++;
        }
    }
    int tablica_dyn::get_licznik()
    {
        return licznik;
    }
    int tablica_dyn::get_rozmiar()
    {
        return rozmiar;
    }
    void tablica_dyn::wypisz()
    {
        for(int i=0; i<rozmiar; i++)
        {
            cout<<tablica[i];
        }
    }
    void tablica_dyn::powieksz(int o_ile)
    {
        rozmiar=rozmiar+o_ile;
        int *nowa=new int [rozmiar];
        for(int i=0; i<rozmiar-o_ile; i++)
        {
            nowa[i]=tablica[i];
        }
        delete [] tablica;
        tablica=nowa;
    }
    void tablica_dyn::dopisz()
    {
        tablica[licznik]=1;
        licznik++;
    }
    bool tablica_dyn::czy_miejsce()
    {
        if(licznik==rozmiar)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    void tablica_dyn::suma()
    {
        int suma=0;
        for(int i=0; i<rozmiar; i++)
        {
            suma=suma+tablica[i];
        }
        cout<<suma;
    }