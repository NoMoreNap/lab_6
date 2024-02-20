#include <iostream>
#include <string>

using  namespace std;

wstring get_month(int n) {
    const wstring months[]={L"Январь",L"Февраль",L"Март",L"Апрель",L"Май",L"Июнь",L"Июль",L"Август",L"Сентябрь",L"Октябрь",L"Ноябрь",L"Декабрь"};
    switch (n) {
        case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:
            return months[n];
        default:
            return L"Введено неверное число";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    unsigned short int n = 0;
    wcout << L"Введите номер месяца >> ";
    cin >> n;
    if(!cin.good()) {
        wcout << L"Введен неверный тип данных";
        return 0;
    }
    const wstring month = get_month(n - 1);
    wcout << month;
    return 0;
}
