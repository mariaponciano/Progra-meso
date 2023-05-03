// ConsoleApplication3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
	int opcion, opcion0, opcion1, opcion2, opcion3, opcion4, volver, n;


	cout << " Bienvenidos " << endl;
	cout << "Que deseas jugar? " << endl;

	cout << " 1 Basquetbol " << endl;
	cout << " 2 Futbol " << endl;
	cout << " 3 Tenis " << endl;
	cout << " 4 Ciclismo " << endl;
	cout << " 5 Boxeo " << endl;

	cin >> opcion;
	system("pause");
	system("cls");

	switch (opcion)
	{

	case 1:

		cout << " Que quieres saber acerca del Basquetbol? " << endl;

		cout << " 1_Que es el Basquetbol? " << endl;
		cout << " 2_Las reglas de Basquetbol " << endl;
		cout << " 3_Que posiciones se juegan en basquetbol? " << endl;
		cout << " 4_Que jugador a encestado más canastas en la historia " << endl;
		cout << " 5_A que se le considera juego perfecto ?" << endl;
		cout << " 6_Titulares de los 10 equipos de basquetbol mas famosos" << endl;


		if (volver == 1)
		{
			return main();
		}
		system("pause");
		system("cls");
		break;


		switch (opcion1)
		{
		case 1:

			cout << " Es un deporte entre dos equipos que se enfrentan sobre un terreno de juego liso, en cuyos extremos se disponen dos canastas enfrentadas." << endl;


			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 2:

			cout << "1-Los equipos estan compuestos por doce jugadores, de ellos unicamente cinco pueden jugar contemporaneamente en la cancha. " << endl;
			cout << "2-El tiempo de juego en la FIBA es de 40 minutos de juego real, dividido endos partes de 20 minutos." << endl;
			cout << "3-El periodo maximo de posesion es de 30 segundos, lo cual relentiza unpoco el juego " << endl;
			cout << "4-El tiempo que se tiene para sobrepasar el medio del campo es de 10segundos. " << endl;
			cout << "5-Un tiro libre convertido vale 1 punto " << endl;
			cout << "6-Un tiro de campo dentro del perimetro vale 2 puntos. " << endl;
			cout << "7-Un tiro realizado fuera del perimetro vale 3 puntos. " << endl;
			cout << "8-El balon no se puede interceptar en su fase descendente y mientras el balon no haya tocado el aro, en el momento que el balon toca el aro cualquier jugador puede interceptar el balon " << endl;
			cout << "9-Una canasta se da por valida despues de que el arbitro haya pitado. " << endl;
			cout << "10-Una canasta y tiro libre se dara por valida si cuando el jugador haya sido golpeado ya ha soltado el balón y la introduce en el aro. " << endl;
			cout << "Si el balon no entra, seran 2 tiros libres para el jugador si este ha tirado dentro del perimetro, si el aro ha sido fuera del perimetro seran 3 tiros libres para el jugador. " << endl;
			cout << "11-A partir de la septima falta de equipo contrario comenzara a tirar 2 tiros libres cada vez que el equipo contrario cometa una falta personal. " << endl;
			cout << "12-Si un jugador se encuentra dentro de la zona delimitada por el area de los tiros libres, se cometera una infraccion llamada 3 segundos. " << endl;
			cout << "13-El balon solo se puede controlar con las manos. " << endl;
			cout << "14-Si en el final del partido con el reloj casi a cero, se realiza un tiro este seravalido si el balon se ha salido de las manos del jugador antes de que sonara labocina, de otra manera sera anulado " << endl;
			cout << "15-Si un jugador recibe el balon lo bota, lo coge, y lo vuelve a botar cometera una infraccion llamadas dobles. " << endl;
			cout << "16-Si un jugador recibe el balon y levanta los dos pies del suelo antes de botar cometera una infraccion llamada pasas " << endl;
			cout << "17-Si un jugador esta sacando de fondo y tarda mas de 5 segundos en sacar el balon estara en posesion del equipo contrario. " << endl;
			cout << "18-Si un jugador retiene el balon mas de 5 segundos sin botar se cometera una infraccion llamada retencion " << endl;
			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 3:

			cout << " Base o playmaker. Contraataca con la pelota hasta el sector contrario, tutelando el juego de ataque de su propio equipo. Poseen un gran gobierno de balon, vision de juego, etc. No necesitan tener una gran altura. " << endl;
			cout << " Escolta o ayuda-base. Jugador regularmente mas bajo, vertiginoso y rapido que el resto. Colabora con el base en la coordinacion del ataque. " << endl;
			cout << " Alero o ala. Generalmente tiene una altura media. Su juego es equitativo entre el impulso y el tiro. Ocupa un lugar significativo gracias a su capacidad de integrar altura con rapidez y porque logra romper a la defensa contraria. " << endl;
			cout << " Ala-Pivot. Son de gran ayuda para el pivot. Intentan reprimir el juego interior del conjunto contrario cerrando el rebote. Deben tener una altura considerable " << endl;
			cout << " Centro. Son los jugadores de mayor altura y contextura fisica dentro del equipo. Emplean estas condiciones junto al aro, tanto en faceta ofensiva como defensiva. Situados en la defensa, aspiraran a recoger un rebote corto, imposibilitar el juego del contrario e interceptar entradas. En la ofensiva, suelen definir las jugadas bajo el aro." << endl;
			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 4:

			cout << " LeBron James ha logrado convertirse en el maximo anotador de la historia de la NBA al superar los 38.387 puntos " << endl;
			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;


		case 5:

			cout << " juego perfecto se da cuando un equipo enfrenta al minimo tres bateadores por entrada sin permitir hits, conceder bases por bolas, pegar un pelotazo ni permitir que un corredor llegue a base por causa de un error en la defensa." << endl;
			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 6:

			cout << " De que equipo deseas saber los titulares que lo conformado?" << endl;
			cout << "" << endl;
			cout << "1. Dallas Mavericks" << endl;
			cout << "2. Atlanta Hawks" << endl;
			cout << "3. Memphis Grizzlies " << endl;
			cout << "4. Portland Trail Blazers" << endl;
			cout << "5. Denver Nuggets" << endl;
			cout << "6. Boston Celtics" << endl;
			cout << "7. Utah Jazz" << endl;
			cout << "8. Phoenix Suns" << endl;
			cout << "9. leveland Cavaliers" << endl;
			cout << "10. Milwaukee Bucks" << endl;
			cin >> opcion2;
			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

			switch (opcion2)
			{
			case 1:
				cout << " Sus jugadores titulares son:" << endl;

				cout << "Base" << endl;
				cout << "Luka Doncic	Frank Ntilikina  	Kyrie Irving	McKinley Wright IV	Jaden Hardy" << endl;
				cout << " Escolta" << endl;
				cout << "Kyrie Irving	Jaden Hardy	 Justin Holiday	  Tim Hardaway Jr.	Frank Ntilikina" << endl;
				cout << "Alero" << endl;
				cout << "Tim Hardaway Jr.	Josh Green	Justin Holiday	Reggie Bullock	Theo Pinson" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "Reggie Bullock	  Maxi Kleber	Davis Bertans	Josh Green	Markieff Morris" << endl;
				cout << "Centro" << endl;
				cout << "Dwight Powell	Christian Wood	Maxi Kleber	 Markieff Morris	 JaVale McGee" << endl;
				cout << "" << endl;

				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;

				break;

			case 2:

				cout << " Sus jugadores titulares son:" << endl;

				cout << "Base" << endl;
				cout << "Trae Young	Dejounte Murray	Aaron Holiday	Vit Krejci	Bogdan Bogdanovic" << endl;
				cout << " Escolta" << endl;
				cout << "Dejounte Murray	Bogdan Bogdanovic	AJ Griffin	Aaron Holiday	Garrison Mathews" << endl;
				cout << "Alero" << endl;
				cout << "De'Andre Hunter	Saddiq Bey	AJ Griffin	Bogdan Bogdanovic	Garrison Mathews" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "John Collins	Jalen Johnson	Saddiq Bey	De'Andre Hunter	Bruno Fernando" << endl;
				cout << "Centro" << endl;
				cout << "Clint Capela	Onyeka Okongwu	Bruno Fernando	John Collins" << endl;
				cout << "" << endl;

				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;

			case 3:
				cout << " Sus jugadores titulares son:" << endl;

				cout << "Base" << endl;
				cout << "Ja Morant	Tyus Jones	Jacob Gilyard	John Konchar	Luke Kennard" << endl;
				cout << " Escolta" << endl;
				cout << "Desmond Bane	Luke Kennard	John Konchar	Dillon Brooks	Tyus Jones" << endl;
				cout << "Alero" << endl;
				cout << "Dillon Brooks	John Konchar	David Roddy	Luke Kennard	Ziaire Williams" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "Jaren Jackson Jr.	David Roddy	Santi Aldama	Kenneth Lofton Jr.	Jake LaRavia" << endl;
				cout << "Centro" << endl;
				cout << "Xavier Tillman	Santi Aldama	Jaren Jackson Jr.	Kenneth Lofton Jr.	Steven Adams " << endl;
				cout << "" << endl;

				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;

			case 4:
				cout << " Sus jugadores titulares son:" << endl;

				cout << "Base" << endl;
				cout << "Anfernee Simons	Skylar Mays	Shaedon Sharpe	Keon Johnson	Damian Lillard" << endl;
				cout << " Escolta" << endl;
				cout << "Shaedon Sharpe	Anfernee Simons	Skylar Mays	Cam Reddish	Matisse Thybulle" << endl;
				cout << "Alero" << endl;
				cout << "Matisse Thybulle	Cam Reddish	Nassir Little	Kevin Knox II	Jeenathan Williams" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "Nassir Little   Trendon Watford  Kevin Knox II  Jabari Walker Cam Reddish Matisse Thybulle John Butler Jr.  Drew Eubanks" << endl;
				cout << "Centro" << endl;
				cout << "Jusuf Nurkic	Drew Eubanks	Trendon Watford	John Butler Jr.	Chance Comanche" << endl;
				cout << "" << endl;
				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;

			case 5:
				cout << " Sus jugadores titulares son:" << endl;

				cout << "Base" << endl;
				cout << "Jamal Murray	Bruce Brown	Reggie Jackson	Ish Smith	Collin Gillespie" << endl;
				cout << " Escolta" << endl;
				cout << "Kentavious Caldwell-Pope	Christian Braun	Bruce Brown	Peyton Watson	Reggie Jackson" << endl;
				cout << "Alero" << endl;
				cout << "Michael Porter Jr.	Bruce Brown	Peyton Watson	Christian Braun	Vlatko Cancar" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "Aaron Gordon	Jeff Green	Peyton Watson	Vlatko Cancar	Bruce Brown" << endl;
				cout << "Centro" << endl;
				cout << "Nikola Jokic	Zeke Nnaji	Thomas Bryant	Jeff Green	DeAndre Jordan" << endl;
				cout << "" << endl;
				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;

			case 6:
				cout << " Sus jugadores titulares son:" << endl;

				cout << "Base" << endl;
				cout << "Marcus Smart	Malcolm Brogdon	Payton Pritchard	Derrick White	JD Davison" << endl;
				cout << " Escolta" << endl;
				cout << "Derrick White	Jaylen Brown	Payton Pritchard	Sam Hauser	Malcolm Brogdon" << endl;
				cout << "Alero" << endl;
				cout << "Jaylen Brown	Jayson Tatum	Sam Hauser	Grant Williams	Marcus Smart" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "Jayson Tatum	Al Horford	Grant Williams	Sam Hauser	Luke Kornet" << endl;
				cout << "Centro" << endl;
				cout << "Al Horford	Robert Williams III	Mike Muscala	Blake Griffin	Luke Kornet" << endl;
				cout << "" << endl;
				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;

			case 7:
				cout << " Sus jugadores titulares son:" << endl;

				cout << "Base" << endl;
				cout << "Collin Sexton	Kris Dunn	Talen Horton-Tucker	Jordan Clarkson" << endl;
				cout << " Escolta" << endl;
				cout << "Jordan Clarkson	Ochai Agbaji	Talen Horton-Tucker	Johnny Juzang	Kris Dunn" << endl;
				cout << "Alero" << endl;
				cout << "Lauri Markkanen	Talen Horton-Tucker	Simone Fontecchio	Ochai Agbaji	Rudy Gay" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "Kelly Olynyk	Rudy Gay	Simone Fontecchio	Juan Toscano-Anderson	Lauri Markkanen" << endl;
				cout << "Centro" << endl;
				cout << "Walker Kessler	Udoka Azubuike	Damian Jones	Vernon Carey Jr.	Micah Potter " << endl;
				cout << "" << endl;
				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;
			case 8:
				cout << " Sus jugadores titulares son:" << endl;
				cout << "Base" << endl;
				cout << "	Chris Paul	Cameron Payne	Landry Shamet	Saben Lee	Devin Booker" << endl;
				cout << " Escolta" << endl;
				cout << "	Devin Booker	Landry Shamet	Damion Lee	Terrence Ross	Josh Okogie" << endl;
				cout << "Alero" << endl;
				cout << "	Josh Okogie	Damion Lee	Terrence Ross	Kevin Durant	T.J. Warren" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "	Kevin Durant	Torrey Craig	Ish Wainright	T.J. Warren	Josh Okogie" << endl;
				cout << "Centro" << endl;
				cout << "	Deandre Ayton	Jock Landale	Bismack Biyombo	Ish Wainright	Kevin Durant" << endl;
				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;

			case 9:
				cout << " Sus jugadores titulares son:" << endl;

				cout << "Base" << endl;
				cout << "Darius Garland	Ricky Rubio	Donovan Mitchell	Raul Neto	Caris LeVert" << endl;
				cout << " Escolta" << endl;
				cout << "Donovan Mitchell	Caris LeVert	Cedi Osman	Danny Green	Isaac Okoro" << endl;
				cout << "Alero" << endl;
				cout << "Isaac Okoro	Danny Green	Caris LeVert	Lamar Stevens	Cedi Osman" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "Evan Mobley	Cedi Osman	Dean Wade	Mamadi Diakite	Lamar Stevens" << endl;
				cout << "Centro" << endl;
				cout << "Jarrett Allen	Evan Mobley	Dean Wade	Robin Lopez	Mamadi Diakite" << endl;
				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;
			case 10:
				cout << " Sus jugadores titulares son:" << endl;

				cout << "Base" << endl;
				cout << "Jrue Holiday	Jevon Carter	Goran Dragic	Joe Ingles	AJ Green" << endl;
				cout << " Escolta" << endl;
				cout << "Grayson Allen	Joe Ingles	Wesley Matthews	Pat Connaughton	Jevon Carter" << endl;
				cout << "Alero" << endl;
				cout << "Khris Middleton	Pat Connaughton	Wesley Matthews	Jae Crowder	Joe Ingles" << endl;
				cout << "Ala-Pivot" << endl;
				cout << "Giannis Antetokounmpo	Jae Crowder	Bobby Portis	Joe Ingles	Pat Connaughton" << endl;
				cout << "Centro" << endl;
				cout << "Brook Lopez	Bobby Portis	Meyers Leonard	Giannis Antetokounmpo" << endl;
				if (volver == 1)
				{
					return main();
				}
				system("pause");
				system("cls");
				break;

			default:
				cout << " No ingresaste ninguna opcion " << endl;

			}



		}

	case 2:
		cout << " Que quieres saber acerca del papifutbol? " << endl;

		cout << " 1_Que es el papifutbol? " << endl;
		cout << " 2_Que diferencia hay entre futbol y papifutbol" << endl;
		cout << " 3_Algunas de las reglas de papifutbol " << endl;
		cout << " 4_Que posiciones se juegan en papifutbol? " << endl;
		cout << " 5_Que jugador a metido mas goles en la historia " << endl;
		cout << " 6_Que jugador a metido mas penales en la historia " << endl;
		cout << " 7_Que jugador nunca ha fallado un penalti? " << endl;
		cout << " 8_Jugadores mas recoonocidos" << endl;

		cin >> opcion3;

		system("cls");

		switch (opcion3)
		{
		case 1:

			cout << " Partido de futbol, generalmente informal y amistoso, en el que las personas que juegan superan una cierta edad o ya no son percibidas como jovenes." << endl;
			cout << "Tambien conocido como papi-futbol, 5 contra 5, es una adaptacion a la medida de la sociedad moderna. Con partidos de una hora, entre amigos o companeros del trabajo o universidad, el 5x5 es una buena forma de escapar a la rutina y salir a jugar." << endl;
			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 2:

			cout << "Mientras que el futbol 11 se disputa en campo  cesped natural, en la cancha de futbol sala se tiende a elegir entre madera u otro material especifico." << endl;
			cout << " Todo esto acompanado de que el campo de futbol tiene que ser abierto mientras que la cancha de futsal siempre se encuentra en recinto cerrado. " << endl;
			cout << "  " << endl;
			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 3:

			cout << "Cada partido debera tener disponible tres esfericos y el arbitro/a sera quien verificara las condiciones.  " << endl;
			cout << "En cada equipo deberan estar 5 jugadores en el terreno de juego incluyendo al portero. Además uno de ellos o ellas será capitán.  " << endl;
			cout << "Cada equipo podra inscribir como maximo a 12 jugadores para asistir a los partido y minimo 7. " << endl;
			cout << "Los porteros deberan llevar una equipacion de color diferente al resto del equipo, y se le permite llevar pantalones largos.  " << endl;
			cout << "No se permite utilizar objetos peligrosos o inconvenientes para realizar el juego. Como por ejemplo, anillos, pearcing, extensiones, pulseras… " << endl;
			cout << "Los auxiliares de mesa y autoridades , deberan ir de color gris o similar al color del arbitro.  " << endl;
			cout << "Los equipos podrán realizar sustituciones ilimitadas.  " << endl;
			cout << "El jugador sustituido podra volver al campo cuando sea necesario.  " << endl;
			cout << "Si se realiza cambio entre portero y jugador, se debera comunicar al arbitro y realizarse cuando el juego este parado.  " << endl;
			cout << "El partido tendra una duración de 40 minutos, cronometrado y dividido en dos partes de la misma duracion. Con un descaso entre cada periodo de 10 minutos.  " << endl;
			cout << "  " << endl;
			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 4:

			cout << " portero   " << endl;
			cout << " defensa central, defensa,  " << endl;
			cout << " mediocentro o centrocampista " << endl;
			cout << " delanteros " << endl;

			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 5:

			cout << " Pele registro un total de 758 goles en 812 juegos oficiales." << endl;
			cout << "Manteniendo un promedio de 0.93 anotaciones por partido. " << endl;

			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 6:

			cout << " Cristiano Ronaldo " << endl;
			cout << "  autor de 152 tantos desde los once metros " << endl;

			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 7:

			cout << "Gonzalo Montiel " << endl;

			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;

		case 8:

			cout << " Algunos jugadores destacables son: " << endl;

			cout << "Porteros " << endl;
			cout << "Thibaut Courtois " << endl;
			cout << "Alisson Becker. " << endl;
			cout << "Edouard Mendy. " << endl;

			cout << " Defensas" << endl;
			cout << "Virgil Van Dijk " << endl;
			cout << "Jules Koundé " << endl;
			cout << "David Alaba " << endl;

			cout << "Medios" << endl;
			cout << "Andrés Iniesta " << endl;
			cout << "Pedri González. " << endl;
			cout << " Sergio Busquets" << endl;

			cout << "Delanteros " << endl;
			cout << "Leonel Andrés Messi " << endl;
			cout << "Hirvin Lozano " << endl;
			cout << " " << endl;


			if (volver == 1)
			{
				return main();
			}
			system("pause");
			system("cls");
			break;





		}

	case 3:

		cout << "1. Que es tenis" << endl;
		cout << "2. Reglas del juego" << endl;
		cout << "3. Jugadores mas famosos" << endl;
		cout << "4. Datos curiosos" << endl;
		cout << "5. Con quien quieres jugar?" << endl;
		cin >> opcion1;
		if (opcion1 == 1)
		{
			cout << "Es un deporte que se practica entre dos jugadores o dos parejas en una pista rectangular dividida transversalmente por una red; consiste en impulsar una pelota con una raqueta por encima de la red intentando que bote en el campo contrario y que el adversario no la pueda devolver; los partidos se disputan a tres o cinco sets siguiendo un complejo sistema de puntuación." << endl;
			cout << " Pueden jugarlo dos individuos (uno contra uno) o dos parejas (dos personas contra las otras dos). El objetivo es impactar la pelota para que pase por encima de la red que divide la cancha a la mitad, intentando que el rival no consiga devolverla." << endl;
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
		}
		if (opcion1 == 2)
		{
			cout << "1. Es necesaria la presencia de al menos dos jugadores. Aunque la modalidad más habitual es la de individuales, también se puede practicar en dobles o parejas y que haya cuatro jugadores en la cancha." << endl;
			cout << "2. El partido comienza cuando saca uno de los jugadores." << endl;
			cout << "3. Los jugadores solo pueden golpear la pelota una vez por turno." << endl;
			cout << "4. Las reglas de tenis determinan que la pelota solo puede botar una vez antes de ser golpeada." << endl;
			cout << "5.Ningún jugador puede tocar la red durante la disputa de un punto. Si lo hiciera, le estaría dando automáticamente un punto al oponente. " << endl;
		}

		if (opcion1 == 3)
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
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
		}
		if (opcion1 == 4)
		{
			cout << "En el tenis olímpico pueden participar jugadores en silla de ruedas." << endl;
			cout << "El jugador de tenis mas viejo es José Guadalupe Leal Lemus, que lleva 79 de sus 101 años jugando al tenis" << endl;
			cout << "El partido más largo se jugó entre el 22 y 24 de junio de 2010, que duró 11 horas, 6 minutos y 23 segundos" << endl;
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
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
			if (opcion0 == 1)
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
			system("pause");
			system("cls");
			return main();
		}
		break;

	case 4:
		cout << "1. Que es cilcismo" << endl;
		cout << "2. Tipos de ciclismo" << endl;
		cout << "3. Ciclistas mas famosos " << endl;
		cout << "4. Datos curiosos" << endl;
		cout << "5. Con quien te gustaria practicar" << endl;
		cin >> opcion3;
		if (opcion3 == 1)
		{
			cout << "Se conoce como ciclismo de competición a la disciplina que consiste en tratar de recorrer una cierta distancia en el menor tiempo posible. El ciclista que llega en primer lugar es el ganador de la competencia." << endl;
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
		}
		if (opcion3 == 2)
		{
			cout << "Existen 3 tipos de cilcismo: " << endl;
			cout << "1. El Ciclismo en Ruta consiste en recorrer determinada distancia a través de carretera, generalmente pavimentada y con asistencia por parte de los equipos en todo momento." << endl;
			cout << "2. El ciclismo en pista o también conocido como carreras sobre pista es un deporte de ciclismo que se caracteriza por disputarse en un velódromo" << endl;
			cout << "3. El Ciclismo de Montaña se disputa en circuitos naturales, con caminos estrechos, cuestas empinadas y descensos rápidos." << endl;
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
		}
		if (opcion3 == 3)
		{
			cout << "1. Eddy Merckx" << endl;
			cout << "2. Lance Armstrong" << endl;
			cout << "3. Miguel Indurain" << endl;
			cout << "4. Bernard Hinault" << endl;
			cout << "5. Jacques Anquetil" << endl;
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
		}
		if (opcion3 == 4)
		{
			cout << "1. El primer ciclista en dar la vuelta al mundo tardó 2 años y 8 meses en 1895" << endl;
			cout << "2. Una bici es sumamente económica" << endl;
			cout << "3. Existe una bicicleta hecha de oro. Con un precio que supera los 100.000 dólares." << endl;
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
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
			{
				cout << "Surte con tu entrenamiento" << endl;
			}

			cout << "Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}

			break;

	case 5:
		cout << "1. Que es boxeo?" << endl;
		cout << "2. Reglas del boxeo" << endl;
		cout << "3 Boxeadores mas famosos" << endl;
		cout << "4. Datos curiosos" << endl;
		cout << "5. Con quien deseas entrenar?" << endl;
		cin >> opcion4;

		if (opcion4 == 1)
		{
			cout << "Boxeo, deporte en el que dos personas combaten entre sí, únicamente con sus puños.Un combate de boxeo se desarrolla bajo unas reglas establecidas y cuenta con un árbitro, jueces y un cronometrador" << endl;
			cout << "Las peleas de boxeo se llevan a cabo en un cuadrilátero conocido como ring. Estos combates están divididos en secuencias llamadas rounds o asaltos. La cantidad de rounds por evento varía de acuerdo al reglamento." << endl;
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
		}
		if (opcion4 == 2)
		{
			cout << "1. La pelea se tendrá que realizar en un ring de boxeo de 7.3 metros por lado o lo más aproximado posible" << endl;
			cout << "2. Los rounds tendrán una duración de 3 minutos y un minuto entre ellos." << endl;
			cout << "3. Los guantes deberán ser nuevos y del tamaño adecuado." << endl;
			cout << "4. Si un peleador cae, debe levantarse sin la ayuda de nadie en 10 segundos máximo. El oponente deberá regresar a la esquina neutral del ring, cuando el boxeador en el suelo se levante el round continuará. En caso de que el peleador caído no se levante a los 10 segundos, el árbitro tiene el poder para el triunfo al oponente." << endl;
			cout << "5. Un peleador con una rodilla en la lona es considerado caído y si es golpeado por su oponente, la pelea puede considerarse empate." << endl;
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
		}
		if (opcion4 == 3)
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
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
		}
		if (opcion4 == 4)
		{
			cout << "El campeón más joven de la historia fue el puertorriqueño Wilfred Benítez con 17 años" << endl;
			cout << "El boxeo de ajedrez o cheesboxing tambien es un deporte donde dos jugadores/boxeadores se enfrentan al tablero de ajedrez en el centro del cuadrilatero durante los asaltos impares. En los pares lo hacen a los punios. Gana el primero que venza en cualquiera de las dos disciplinas " << endl;
			cout << "¿Desea regesar el menu principal?" << endl;
			cout << "1 : si  2 : no" << endl;
			cin >> volver;
			if (volver == 1)
			{
				system("pause");
				system("cls");
				return main();
			}
		}
		if (opcion4 == 5)
		{
			cout << "Elige con quien quieres practicar" << endl;
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
			cin >> n;
			if (n == 1)
			{
				cout << "Suerte con tu entrenamiento" << endl;
			}
			else
				cout << "Suerte con tu entrenamineto" << endl;
		}
		cout << "¿Desea regesar el menu principal?" << endl;
		cout << "1 : si  2 : no" << endl;
		cin >> volver;
		if (volver == 1)
		{
			system("pause");
			system("cls");
			return main();
		}

		break;
		}

	}

}
