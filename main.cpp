#include <iostream>
#include <string>

using  namespace std;

wstring get_day(int n) {
    const wstring days[]={L"Понедельник",L"Вторник",L"Среда",L"Четверг",L"Пятница",L"Суббота",L"Воскресенье",};

    switch (n) {
        case 0:case 1:case 2:case 3:case 4:case 5:case 6:
            return days[n];
        default:
            return L"Введено неверное число";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    unsigned short int n = 0;
    wcout << L"Введите номер дня >> ";
    cin >> n;
    if(!cin.good()) {
        wcout << L"Введен неверный тип данных";
        return 0;
    }
    const wstring day = get_day(n - 1);
    wcout << day;
    return 0;
}
