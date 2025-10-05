/*********************************
 * Автор:     Иккерт А.С.        *
 * Название:  Циклы              *
 * Вариант:   7                  *
 *********************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

    // Исходные данные
    const double V = 15.0;        // л - объем камеры
    const double V0 = 0.6;        // л - рабочий объем насоса
    const double P0 = 760.0;      // мм рт. ст. - начальное давление
    const double ratio;

int main() {

    // Вычисляем коэффициент
    ratio = V / (V + V0);

    // Цикл while
    cout << "Цикл while:" << endl << "n\t\tP (mm rt. st.)" << endl << "----------------------------" << endl;
    
    int n = 10;
    while (n <= 250) {
        double P = P0 * pow(ratio, n);
        cout << n << "\t\t" << fixed << setprecision(2) << P << endl;
        
        if (n < 50) {
            n += 10;
        } else if (n == 50) {
            n = 100;
        } else {
            n += 50;
        }
    }

    // Цикл do-while
    cout << "Цикл do-while:" << endl << "n\t\tP (mm rt. st.)" << endl << "----------------------------" << endl;
    
    n = 10;
    do {
        double P = P0 * pow(ratio, n);
        cout << n << "\t\t" << fixed << setprecision(2) << P << endl;
        
        if (n < 50) {
            n += 10;
        } else if (n == 50) {
            n = 100;
        } else {
            n += 50;
        }
    } while (n <= 250);

    return 0;
}