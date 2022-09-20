#include <math.h>

#include <fstream>
#include <iomanip>
#include <iostream>
#define N 5

using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    ifstream fout;
    ofstream fin;
    int X[N], i, j, m = 0, mx = 0, jj = 1;
    float A[N][N];
    string f;
    cout << "Введите название файла для чтения матрицы: ";
    cin >> f;
    fout.open(f);
    if (!fout.is_open()) {
        cout << endl << "Файл не найден!";
    } else {
        cout << endl << "Введите название файла для записи массива X: ";
        cin >> f;
        fin.open(f);
        cout << "Исходный массив:" << endl;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++) {
                fout >> A[i][j];
                cout << setw(5) << A[i][j];
                if (j % 5 == 4) cout << endl;
            }
        fout.close();
        cout << endl << "Сумма столбцов:" << endl;
        for (j = 0; j < N; j++) {
            for (i = 0; i < N; i++) m += A[i][j];
            cout << setw(5) << m;
            if (m > mx) {
                mx = m;
                m = 0;
                jj = j;
            }
        }
        cout << endl << "Наибольший столбец:" << endl;
        for (i = 0; i < N; i++) {
            X[i] = A[i][jj];
            fin << X[i] << " ";
            cout << setw(5) << X[i];
        }
        fin.close();
    }
}
