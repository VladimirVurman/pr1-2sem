
 #include <iostream>
 #include<windows.h> 
using namespace std;

struct Reis
{
    char marka[50], punktnaznach[50];
    int nomeravto, gruzopodiemvtonnax, edinicagruza, obshayacena;
};

Reis* AddStruct(Reis* Obj, const int amount);
void setData(Reis* Obj, const int amount);
void showData(const Reis* Obj, const int amount);
void findData(Reis* Obj, const int amount);

int main()
{
    setlocale(LC_ALL, "rus");

    Reis* OurReises = 0;
    int ReisAmount = 0;
    int YesOrNot = 0; //  продолжить или остановить ввод данных
    int Numbersort = 0;
    do
    {
        OurReises = AddStruct(OurReises, ReisAmount);
        setData(OurReises, ReisAmount);

        ReisAmount++;

        cout << "Продолжить ввод данных (1 - да, 0 - нет): ";
        cin >> YesOrNot;
        cin.get();
    } while (YesOrNot != 0);
    showData(OurReises, ReisAmount);
    cout << "\nНахождение какого параметра по вашему числу вас интересует(Введите число) :  \n1.Марка\n2.Пункт назначения\n3.Номер авто\n4.Грузоподъёмность в тоннах\n5.Цена за 1 груза\n6.Общая цена\n";  
    cin >> Numbersort; /* ПРОДОЛЖИТЬ ПОТОМ */
    delete[] OurReises;
    return 0;
} 
Reis* AddStruct(Reis* Obj, const int amount)
{
    if (amount == 0)
    {
        Obj = new Reis[amount + 1]; // выделение памяти для первой структуры
    }
    else
    {
       Reis* tempObj = new Reis[amount + 1];

        for (int i = 0; i < amount; i++)
        {
            tempObj[i] = Obj[i]; // копируем во временный объект
        }
        delete[] Obj;

        Obj = tempObj;
    }
    return Obj;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void setData(Reis* Obj, const int amount)
{
    cout << "Марка авто: ";
    cin.getline(Obj[amount].marka, 50);
    cout << "Пункт назначения: ";
    cin.getline(Obj[amount].punktnaznach, 50);
Obj[amount].nomeravto=rand();
Obj[amount].gruzopodiemvtonnax = rand();
Obj[amount].edinicagruza = rand();
Obj[amount].obshayacena = rand();
    cout << endl;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void showData(const Reis* Obj, const int amount)
{
    system("cls");
    cout << "№  " << "Марка авто\t" << "Пункт назначения\t" << "Номер авто\t" << "Грузопод. в тоннах\t" << "Цена за 1 груза\t" << "Общая стоимость груза\t" << endl;
    cout << "========================================" << endl;
    for (int i = 0; i < amount; i++)
    {
        cout << i + 1 << "  " << Obj[i].marka << '\t' << Obj[i].punktnaznach << '\t' << Obj[i].nomeravto << '\t' << Obj[i].gruzopodiemvtonnax << '\t' << Obj[i].edinicagruza << '\t' << Obj[i].obshayacena << endl;
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*марка авто,номер авто,пункт назначения,грузоподъёмность(в тоннах),стоимость единицы груза,общая стоимость груза;*/
/*struct Reis
{
    char marka[50], punktnaznach[50];
    int nomeravto, gruzopodiemvtonnax, edinicagruza, obshayacena;
};*/
