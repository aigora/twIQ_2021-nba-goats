
#include <stdio.h>
#include <stdlib.h>

//Desarollo principal del programa
int main(){
	
	system("color F5");
	int eleccion;
	
	
	printf("  NNNNN          NNN       BBBBBBB                 AA\n");
	printf("  NNN NN         NNN       BBB   BBB              AAAA\n");
	printf("  NNN  NNN       NNN       BBB    BBB            AAAAAA\n");
	printf("  NNN   NNN      NNN       BBB     BBB          AAA  AAA\n");
	printf("  NNN    NNN     NNN       BBB    BBB          AAA    AAA\n");
	printf("  NNN     NNN    NNN       BBB BBBBB          AAA      AAA\n");
	printf("  NNN      NNN   NNN       BBB    BBB        AAAAAAAAAAAAAA\n");
	printf("  NNN       NNN  NNN       BBB     BBB      AAA          AAA\n");
	printf("  NNN        NNN NNN       BBB    BBB      AAA            AAA\n");
	printf("  NNN         NN NNN       BBB   BBB      AAA              AAA\n");
	printf("  NNN          NNNNN       BBBBBBB       AAA                AAA\n\n\n\n");
 
	printf("          GGGGG   OOOOO   AAAAA   TTTTT   SSSSS\n");
	printf("          G       O   O   A   A     T     S\n");
	printf("          G GGG   O   O   AAAAA     T     SSSSS\n");
	printf("          G   G   O   O   A   A     T         S\n");
	printf("          GGGGG   OOOOO   A   A     T     SSSSS\n\n\n");


	//Inicio programa es un printf que muestra en la pantalla las distintas opciones para continuar
	printf("\nBienvenidos al mejor programa de la NBA\n\n");
	printf("1. Jugadores por equipo\n");
	printf("2. Rellena tu bracket de los playoffs\n");
	printf("3. Elige tus premios all star\n");
	printf("4. Salir del programa\n\n");
	
	// Este bucle do while permite volver a pedir que el usuario introduce un numero que se adecue a las opciones presentadas
	do {
	printf("Elige una opcion para continuar:\n");
	scanf("%d", &eleccion);//Con este scanf se recoge la variable que expresa que eleccion hace el usuario
	}while (eleccion > 4 || eleccion <=0);
	
	//Este switch case es el que redirige al usuario a su opcion deseada dependendo del numero que haya introducido
	switch (eleccion){
		case 1:
			system ("cls"); // Borra todo lo anterior
			
		break;
			
		case 2: 
			system ("cls"); // Borra todo lo anterior
		
			break;
		
		case 3: 
			system ("cls"); // Borra todo lo anterior
		
			break;
		
		case 4: 
			system ("cls"); // Borra todo lo anterior
			printf("Adios,vuelve pronto!\n");
			break;
		
	}
	
	return 0;
}

