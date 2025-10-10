/*********************************
 * Автор:     Иккерт А.С.        *
 * Название:  Циклы              *
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
    
    // Вычисляем коэффициент
    double ratio = V / (V + V0);
    
    const int Precision = 2;
    const int maxN = 250;
    
    // Цикл с предусловием (while)
    cout << "while:" << endl;
    cout << "n\t\tP (mm rt. st.)" << endl;
    cout << "----------------------------" << endl;
    
    int nValues[] = {10, 20, 30, 40, 50, 100, 150, 200, 250};
    int count = sizeof(nValues) / sizeof(nValues[0]);
    
    int i = 0;
    while (i < count) {
        int n = nValues[i];
        double P = P0 * pow(ratio, n);
        cout << n << "\t\t" << fixed << setprecision(Precision) << P << endl;
        i++;
    }
    
    cout << endl;
    
    // Цикл с постусловием (do-while)
    cout << "do-while:" << endl;
    cout << "n\t\tP (mm rt. st.)" << endl;
    cout << "----------------------------" << endl;
    
    i = 0;
    do {
        int n = nValues[i];
        double P = P0 * pow(ratio, n);
        cout << n << "\t\t" << fixed << setprecision(Precision) << P << endl;
        i++;
    } while (i < count);
    
    return 0;
}