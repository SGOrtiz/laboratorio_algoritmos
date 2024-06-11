#include<iostream>
#include <cstdlib>
#include <unistd.h>


using namespace std;
//declaramos las variables afuera de todas lus funciones
bool game_over=false; 
int x, y, asteroide_en_x, asteroide_en_y, score=0;
const int width = 60;//tamaño de el espacio de guerra y tirosss
const int height = 40;

void pos_inicial_asteroide(){//Desde donde se generan los asteroides
    srand(time(0));
    x= width/2;
    y= height-1; 
    asteroide_en_x=rand()% width;
    asteroide_en_y= 0;

}
/*
void movimiento_x() {
    char key;
    cin >> key;
    switch (key) {
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        case 'q':
            game_over = true;
            break;
        default:
            break;
    }
}
*/
void movimiento_x() {
    char key;
    cin >> key;
    switch (key) {
        case 'a':
            if (x > 0) x--;
            break;
        case 'd':
            if (x < width - 1) x++;
            break;
        case 'q':
            game_over = true;
            break;
        default:
            break;
    }
}








void mover_asteroide() {
    asteroide_en_y++;
    if (asteroide_en_y >= height) {
        asteroide_en_x = rand() % width;
        asteroide_en_y = 0;
    }
}



/*
void juego(){// funcionamiento de generacion de asteroides y final del juego si uno de estos impacta en la nave
    
    if (asteroide_en_x == x && asteroide_en_y == y) {
        game_over = true;
    }

    asteroide_en_x = rand() % width;
    asteroide_en_y = 0;
        
    //la caida de el asterisco queda en veremos despues proba llamando a campo de batalla 
}
*/

void campo_de_batalla(){//diseñamos con beñita el campo de batalla
    system("clear");

    for (int i = 0; i < width; i++)
        cout << "-";
    cout << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1)
                cout << "|";
            else if (i == y && j == x)
                cout << "X";
            else if (i == asteroide_en_y&& j == asteroide_en_x)
                cout << "O";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < width; i++)
        cout << "-";
    cout << endl;

    cout << "Score: " << score << endl;

}



int main(){
    srand(time(0));
    pos_inicial_asteroide();
    while(!game_over){
        campo_de_batalla();
        movimiento_x();
        mover_asteroide();
        //juego();
        // Verificar colisión
        if (asteroide_en_x == x && asteroide_en_y == y) {
            game_over = true;
        } else {
            // Incrementar puntaje si no hay colisión
            score++;
        }

        usleep(50000);
    }
        
    }
    







