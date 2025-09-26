/*********************************
 * Автор:     Иккерт А.С.        *
 * Название:  Циклы *
 * Вариант:   7                  *
 *********************************/
 
 
 
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    // Исходные данные
    double V = 15.0;        // л - объем камеры
    double V0 = 0.6;        // л - рабочий объем насоса
    double P0 = 760.0;      // мм рт. ст. - начальное давление
    int n_values[] = {10, 20, 30, 40, 50, 100, 150, 200, 250}; // кол-во качаний
    int count;
    
    // Вычисляем коэффициент
    double ratio = V / (V + V0);
    
    // Заголовок таблицы
    cout << fixed << setprecision(3);
    cout << "n\t\tP (mm rt. st.)" << endl;
    cout << "----------------------------" << endl;
    
    count = sizeof(n_values) / sizeof(n_values[0]);
    
    for (int i = 0; i < count; i++) {
        int n = n_values[i];
        double P = P0 * pow(ratio, n);
        cout << n << "\t\t" << P << endl;
    }
    
    return 0;
}
