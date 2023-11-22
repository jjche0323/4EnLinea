#include <iostream>
using namespace std;
int eleccion, rows, col;
char tablero[0][0]={};


void iniciarPartida(){
    cout<<"Indique la cantidad de filas que desea usar";
    cin>>rows;
    cout<<"Indique la cantidad de columnas que utilizara";
    cin>>col;
    tablero[rows+2][col+2];
    for(int i=0;i>rows+2; i++){
        for (int j = 0; j < col+2; ++j) {
            if(i>rows+2){
                    tablero[i][j]='#';
                    tablero [i][col+2]='#';
        } else if(i== rows+2){
                tablero[i][j]='#';

            }
        }

    }


    for (int i = 0; i < rows+2; ++i) {
        for (int j = 0; j < col+2; ++j) {
            cout<<tablero[i][j];
        }
        cout<<endl;
    }


}

int main() {
   while(true){
       cout<<"\t::: CUATRO EN LINEA :::"<<endl;
       cout<<"\t\t1) Jugar. "<<endl;
       cout<< "\t\t2) Salir. "<<endl;
       cin>> eleccion;
       if(eleccion==1){
            iniciarPartida();

       } else if(eleccion==2){
           cout<<"Se finalizara el juego"<< endl;
           return 0;
       }
       else if(eleccion!=1||eleccion!=2){
           cout<<"debe agregar una opcion valida";
       }


}
    return 0;
}
