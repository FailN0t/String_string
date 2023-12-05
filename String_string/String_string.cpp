// String_string.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <regex>
using namespace std;



int main()
{
    string str{ "abcdefgfdgsfde" };
    cout << str[0] << endl;
    cout << str.at(2) << endl;
    cout << str.size() << endl;
    cout << str.front() << endl;
    cout << *(str.begin()) << endl;
    for (auto it = str.begin(); it < str.end(); it++) {
        cout << *it;
    }
    cout << endl;
    cout << str.find("cde") << endl;
    cout << str.rfind("cde") << endl;
    cout << str.find_first_of("cde") << endl;
    cout << str.find_last_of("cde") << endl;
    cout << str.find_last_not_of("cdefg") << endl;
    str.assign("Hello");
    cout << str << endl;
    str.clear();
    cout << str << endl;
    str = "dasdvasvdasdv";
    cout << str << endl;
    str.push_back('H');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    str.append("Helllo");
    cout << str << endl;
    str += "Hello";
    cout << str << endl;



    cout << str.empty() << endl;
    cout << str.max_size() << endl;
    cout << str.capacity() << endl;


    string str2{ "123.1" };
    int n = stoi(str2);
    long n2 = stol(str2);
    long long n3 = stoll(str2);

    float f = stof(str2);
    double d = stod(str2);
    cout << n << endl;
    cout << n2 << endl;
    cout << n3 << endl;

    cout << f << endl;
    cout << d << endl;

    str = to_string(45);
    cout << str << endl;

    cout << str << "  " << str2 << endl;
    swap(str, str2);
    cout << str << "  " << str2 << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
