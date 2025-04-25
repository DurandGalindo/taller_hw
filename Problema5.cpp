#include <iostream>
using namespace std;
void imprimir(int n) {
	  if (n<3 || n%2==0) {
    cout << "El numero ingresado no es valido, la entrada debe ser un entero impar mayor o igual a 3." << endl;
    return;
  }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        if (i == 0 || i == n - 1) {
            for (int k = 0; k < n; k++) {
                cout << "* ";
            }
        } else {
            cout << "*";        
            for (int s = 1; s < 2 * (n - 1); s++) {
                if (s == 2 * (n - i - 1)) {
                    cout << "*"; 
                } else {
                    cout << " ";
                }
            }
            cout << "*"; 
        }
        cout << endl;
    }
}
int main() {
  int n;
  cout << "Por favor ingresar un entero impar mayor o igual a 3: ";
  cin >> n;
  imprimir(n);
  return 0;
}