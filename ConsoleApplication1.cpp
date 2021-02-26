// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


    struct worker       //Создаем структуру!
    {
        char F[50];       //familiya
        char Y[5];        //god rojd
        char D[50];       //doljnost
        int zarplata;       //zp
        char O[10];         //obrazovanie
        void printInfo();
        void readInfo();
    };
	void worker::printInfo()
	{
		cout << endl << "Worker:" << endl;
		cout << "Surname: " << worker::F << endl;
		cout << "Year of birth: " << worker::Y << endl;
		cout << "Doljnost: " << worker::D << endl;
		cout << "zarplata: " << worker::zarplata << endl;
        cout << "obrazovanie: " << worker::O << endl;
	}
	void worker::readInfo()
	{
		cout << "\nInput worker surname: ";
		cin.ignore(std::cin.rdbuf()->in_avail());
		cin.getline(F, sizeof(F));

		cout << "\nInput Year of birth:: ";
		cin.ignore(std::cin.rdbuf()->in_avail());
		cin.getline(Y, sizeof(Y));

		cout << "\nInput Doljnost: ";
		cin.ignore(std::cin.rdbuf()->in_avail());
		cin.getline(D, sizeof(D));

		cout << "\nInput zarplata: ";
		cin >> zarplata;

		cout << "\nInput obrazovanie: ";
		cin.ignore(std::cin.rdbuf()->in_avail());
		cin.getline(O, sizeof(O));
	}

	void task19() {
		
		const int N = 3;
		worker stat[N];

		for (size_t i = 0; i < N; i++)
		{
			stat[i].readInfo();
		}

		for (size_t i = 0; i < N; i++)
		{
			stat[i].printInfo();
		}

		int youngest = 0;
		for (size_t i = 1; i < N; i++)
		{
			if (stat[i].Y > stat[youngest].Y)
				youngest = i;

		}
		cout << endl << "The youngest is: ";
		stat[youngest].printInfo();
	}

	
    int main()
    {
        setlocale(LC_ALL, "rus");
		task19();
     
    }



/*
*/