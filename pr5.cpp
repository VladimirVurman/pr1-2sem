
void task1() {
	ofstream five("D:\\Scientists.txt");//заполнение файла
	five << "Scientists:\nSurname, name, phone number, city, district, EducationType:\nSergeev Ivan 0634576862 Kiev Petrogradskii technic";
	five << "\nPetrov Egor 0894351726 Kiev Tatarovskii technic\nBobulev Dmitry 0456756123 Odessa Primorsky Gumanitariy";
	five << "\nPavlov Vladimir 0765432353 Peterburg Northern technic\nIvanova Yana 0345261783 Odessa Kievsky Gumanitariy";
	five.close();
}
void task1_1()
{
	string line, th="technic";
	int a = 0;
	ifstream five("D:\\Scientists.txt"); // окрываем файл для чтения
	ofstream out("D:\\Scientists2.txt");
	out << "\nTehniks:\nSurname, name, phone number, city, district, EducationType :" << std::endl;
	if (five.is_open())
	{
		while (getline(five, line))
		{
			cout << "\n" << line;
			for(int i=0;i< line.length();i++)
			{
				for (int o = 0; o < th.length()-1; o++) 
				{                                      //поиск слова technic
					if (line[i] == th[o] && line[i+1] == th[o+1] && a < th.length()-1) 
					{
							a++;
					}
					else 
						if (a ==th.length()-1 && line[i + 1] == th[o + 1]) 
					{
						out <<  line << std::endl;
						a = 0;
					}
				}
			}

		}
	}
	out.close();
	five.close();     // закрываем файл
}
void task1_2() {
	ifstream out("D:\\Scientists2.txt");
	string line;
	if (out.is_open())
	{
		while (getline(out, line))
		{
			cout << line<<std::endl;
		}
	}
	out.close();
}
int main() {
	setlocale(LC_ALL, "Russian");
	task1();
	task1_1();
	task1_2();
}
