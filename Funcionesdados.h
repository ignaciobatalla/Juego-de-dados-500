#ifndef FUNCIONESDADOS_H_INCLUDED
#define FUNCIONESDADOS_H_INCLUDED

//FUNCIONES PARA LOS DADOS//
    //FUNCION PARA TIRAR DADOS//
    void tirardados(int dados[],int X1,int Y1){
        X1=21;
        Y1=15;
                        //FUNCION QUE TIRA NUMEROS RANDOM
                        for(int h = 0; h <=5; h++) {
                            int numeroAleatorio = rand()%6+1;
                            dados[h]=numeroAleatorio;
                            gotoxy(X1,Y1++); cout <<"      _______" << endl;
                            gotoxy(X1,Y1++); cout <<"     |Dado Nº|"<<endl;
                            gotoxy(X1,Y1++); cout <<"     |   "<<h+1 <<"   |" <<"  : "<<dados[h]<<endl;
                            gotoxy(X1,Y1++); cout <<"     |_______|" <<endl;
                        }
    }
    //FUNCION ESCALERA//
    bool Escalera(int Dados[6]){
        int contador = 0;
            for (int i = 1; i <= 6; ++i) {
                for (int r = 0; r < 6; ++r) {
                    if (Dados[r] == i) {
                        contador++;
                        break;
                    }
                }
            }
            if (contador== 6) {
                return true;
            }
            else{
                return false;
            }
}
    //FUNCION PARA CARGAR NOMBRE//
    string cargarnombre(string nombrejugador,int X1,int Y1){

        gotoxy(X1,Y1++); cin >> nombrejugador;
        return nombrejugador;
    }
#endif // FUNCIONESDADOS_H_INCLUDED
