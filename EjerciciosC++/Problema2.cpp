#include <iostream>
using namespace std;

void imprimir(int n) {
	int p;
	p=n/2;
    if (n < 5 || n % 2 == 0) {
        cout << "El numero ingresado no es valido. Debe ser un entero impar mayor o igual a 5." << endl;
        return;
    }

    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) {
            	
                if(i==0 && (j==0 || j>=p)){
                    cout<<"*";
                }
                else if(i==p){
                    cout<<"*";
                }
                else if(i==n-1 && (j<=p || j==n-1)){
                    cout<<"*";
                }
                else if(j==0 && i<=p){
                    cout<<"*";
                }
                else if (j==p){
                    cout<<"*";
                }
                else if(j==n-1 && i>=p){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout << endl;
        }
}

int main() {
    int n;
    cout << "Por favor ingresa un entero impar mayor o igual a 5: ";
    cin >> n;
    imprimir(n);
    return 0;
}
