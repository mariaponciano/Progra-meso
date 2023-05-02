// Parte 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    int opcion, opcion1, opcion0,opcion2, opcion3, opcion4, volver, n;
    cout << "Bienvenidos al programa" << endl; 
    cout << "¿Que deseas jugar?" << endl; 
    cout << "1. Tenis" << endl;
    cout << "2. ciclismo" << endl; 
    cout << "3. Boxeo" << endl; 
    cin >> opcion;
    switch (opcion)
    {
    case 1: 
      
        cout << "1. Que es tenis" << endl; 
        cout << "2. Reglas del juego" << endl; 
        cout << "3. Jugadores mas famosos" << endl;
        cout << "4. Datos curiosos" << endl;
        cout << "5. ¿Con quien quieres jugar?" << endl;
        cin >> opcion1;
        if (opcion1 == 1)
        {
            cout << "Es un deporte que se practica entre dos jugadores o dos parejas en una pista rectangular dividida transversalmente por una red; consiste en impulsar una pelota con una raqueta por encima de la red intentando que bote en el campo contrario y que el adversario no la pueda devolver; los partidos se disputan a tres o cinco sets siguiendo un complejo sistema de puntuación." << endl;
            cout << " Pueden jugarlo dos individuos (uno contra uno) o dos parejas (dos personas contra las otras dos). El objetivo es impactar la pelota para que pase por encima de la red que divide la cancha a la mitad, intentando que el rival no consiga devolverla." << endl;
        }
        if (opcion1 == 2)
        {
            cout << "1. Es necesaria la presencia de al menos dos jugadores. Aunque la modalidad más habitual es la de individuales, también se puede practicar en dobles o parejas y que haya cuatro jugadores en la cancha." << endl;
            cout << "2. El partido comienza cuando saca uno de los jugadores." << endl;
            cout << "3. Los jugadores solo pueden golpear la pelota una vez por turno." << endl;
            cout << "4. Las reglas de tenis determinan que la pelota solo puede botar una vez antes de ser golpeada." << endl;
            cout << "5.Ningún jugador puede tocar la red durante la disputa de un punto. Si lo hiciera, le estaría dando automáticamente un punto al oponente. " << endl;
        }

        if (opcion1 ==3 )
        {
            cout << "1. Bjorn Borg" << endl;
            cout << "2. Rafa Nadal" << endl; 
            cout << "3. Novak Djokovic" << endl; 
            cout << "4. Roger Federer" << endl; 
            cout << "5. Pete Sampras" << endl; 
            cout << "6. Serena Williams" << endl; 
            cout << "7 Steffi Graff." << endl; 
            cout << "8. Martina Navratilova" << endl; 
            cout << "9. Ryan Sweeting" << endl; 
            cout << "10. Maria Sharapova" << endl;
        }
        if (opcion1 == 4)
        {
            cout << "En el tenis olímpico pueden participar jugadores en silla de ruedas." << endl;
            cout << "El jugador de tenis mas viejo es José Guadalupe Leal Lemus, que lleva 79 de sus 101 años jugando al tenis" << endl;
            cout << "El partido más largo se jugó entre el 22 y 24 de junio de 2010, que duró 11 horas, 6 minutos y 23 segundos" << endl;
        }
        if (opcion1 == 5)
        {
            cout << "Elige con quien quieres jugar" << endl;

            cout << "1. Bjorn Borg" << endl;
            cout << "2. Rafa Nadal" << endl;
            cout << "3. Novak Djokovic" << endl;
            cout << "4. Roger Federer" << endl;
            cout << "5. Pete Sampras" << endl;
            cout << "6. Serena Williams" << endl;
            cout << "7 Steffi Graff." << endl;
            cout << "8. Martina Navratilova" << endl;
            cout << "9. Ryan Sweeting" << endl;
            cout << "10. Maria Sharapova" << endl;
            cin >> opcion0;
            if (opcion0 ==1)
            {
                cout << "Suerte en tu partida " << endl;
            }
            else
            {
                cout << "Surte en tu partida" << endl;
            }
        }
        cout << "¿Desea regesar el menu principal?" << endl;
        cout << "1 : si  2 : no" << endl; 
        cin >> volver;
        if (volver == 1)
        {
            return main();
        }
        system("pause");
        system("cls"); 
        break;

    case 2: 
        cout << "1. Que es cilcismo" << endl; 
        cout << "2. Tipos de ciclismo" << endl; 
        cout << "3. Ciclistas mas famosos " << endl; 
        cout << "4. Datos curiosos" << endl; 
        cout << "5. ¿Con quien te gustaria practicar" << endl;
        cin >> opcion3;
        if (opcion3 == 1)
        {
            cout << "Se conoce como ciclismo de competición a la disciplina que consiste en tratar de recorrer una cierta distancia en el menor tiempo posible. El ciclista que llega en primer lugar es el ganador de la competencia." << endl; 
        }
    if (opcion3 == 2)
    {
        cout << "Existen 3 tipos de cilcismo: " << endl; 
        cout << "1. El Ciclismo en Ruta consiste en recorrer determinada distancia a través de carretera, generalmente pavimentada y con asistencia por parte de los equipos en todo momento." << endl;
        cout << "2. El ciclismo en pista o también conocido como carreras sobre pista es un deporte de ciclismo que se caracteriza por disputarse en un velódromo" << endl;
        cout << "3. El Ciclismo de Montaña se disputa en circuitos naturales, con caminos estrechos, cuestas empinadas y descensos rápidos." << endl;
    }
    if (opcion3 == 3)
    {
        cout << "1. Eddy Merckx" << endl; 
        cout << "2. Lance Armstrong" << endl; 
        cout << "3. Miguel Indurain" << endl; 
        cout << "4. Bernard Hinault" << endl;
        cout << "5. Jacques Anquetil" << endl;
    }
    if (opcion3 == 4)
    {
        cout << "1. El primer ciclista en dar la vuelta al mundo tardó 2 años y 8 meses en 1895" << endl; 
        cout << "2. Una bici es sumamente económica" << endl; 
        cout << "3. Existe una bicicleta hecha de oro. Con un precio que supera los 100.000 dólares." << endl; 
    }

    if (opcion3 == 5)
    {
        cout << "Escoge con quien quisieras practicar ciclismo" << endl;
        cout << "1. Eddy Merckx" << endl;
        cout << "2. Lance Armstrong" << endl;
        cout << "3. Miguel Indurain" << endl;
        cout << "4. Bernard Hinault" << endl;
        cout << "5. Jacques Anquetil" << endl;
        cin >> n;
        if (n == 1)
        {
            cout << "Suerte con tu entrenamiento" << endl;
        }
        else
            cout << "Surte con tu entrenamiento" << endl; 

        cout << "¿Desea regesar el menu principal?" << endl;
        cout << "1 : si  2 : no" << endl;
        cin >> volver;
        if (volver == 1)
        {
            return main();
        }
        system("pause");
        system("cls");
        break;

    case 3: 
        cout << "1. ¿Que es boxeo?" << endl; 
        cout << "2. Reglas del boxeo" << endl; 
        cout << "3 Boxeadores mas famosos" << endl; 
        cout << "4. Datos curiosos" << endl; 
        cout << "5. ¿Con quien deseas entrenar?" << endl;
        cin >> opcion4; 

        if (opcion4 == 1)
        {
            cout << "Boxeo, deporte en el que dos personas combaten entre sí, únicamente con sus puños.Un combate de boxeo se desarrolla bajo unas reglas establecidas y cuenta con un árbitro, jueces y un cronometrador" << endl;
            cout << "Las peleas de boxeo se llevan a cabo en un cuadrilátero conocido como ring. Estos combates están divididos en secuencias llamadas rounds o asaltos. La cantidad de rounds por evento varía de acuerdo al reglamento." << endl;
        }
        if (opcion4 == 2)
        {
            cout << "1. La pelea se tendrá que realizar en un ring de boxeo de 7.3 metros por lado o lo más aproximado posible" << endl; 
            cout << "2. Los rounds tendrán una duración de 3 minutos y un minuto entre ellos." << endl; 
            cout << "3. Los guantes deberán ser nuevos y del tamaño adecuado." << endl; 
            cout << "4. Si un peleador cae, debe levantarse sin la ayuda de nadie en 10 segundos máximo. El oponente deberá regresar a la esquina neutral del ring, cuando el boxeador en el suelo se levante el round continuará. En caso de que el peleador caído no se levante a los 10 segundos, el árbitro tiene el poder para el triunfo al oponente." << endl; 
            cout << "5. Un peleador con una rodilla en la lona es considerado caído y si es golpeado por su oponente, la pelea puede considerarse empate." << endl;
        }
        if (opcion4 ==3)
        {
            cout << "1. Archie Moore" << endl; 
            cout << "2. Manny Pacquiao" << endl; 
            cout << "3. Ezzard Charles" << endl; 
            cout << "4. Willie Pep" << endl; 
            cout << "5. Floyd Mayweather" << endl; 
            cout << "6. Émile Griffith" << endl; 
            cout << "7. Tony Canzoneri" << endl; 
            cout << "8. Muhammad Ali" << endl; 
            cout << "9. Joe Louis" << endl; 
            cout << "10. Sugar Ray Robinson" << endl; 
        }
        if (opcion4 == 4)
        {

        }
}


