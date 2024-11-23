#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS helyett
    std::cout << '1-100 ertekek duplazasa'//expected ;
    for (int i = 0;)//rossz szintaktika
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"//Érték üres pontos vessző hiánya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;//Ki kell nullázni ls int helyxett float
    for (int i = 0; i < N_ELEMENTS, i++)//for loop szintaktikai hhba
    {
        atlag += b[i]//pontos vessző hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;//Dinamikus memoria felszabaditása
}
