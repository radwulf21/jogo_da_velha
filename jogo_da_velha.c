#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	-Autor: Raul Andrade de Oliveira Fernandes
	-Curso: Sistemas de Informação
	-2° Semestre
	-Instituição: Centro Universiário e Faculdade Projeção
	
	-Jogo da Velha com matrizes.
*/

void estrutura( char mat3[3][3] );
void jogada( int *op, char *ver, int *k );
void result( char mat3[3][3], int *k );

main() {
	setlocale( LC_ALL, "portuguese" );
	
	int i, j, k;
	int op;
	int mat[3][3] = { };
	
	char mat3[3][3];
	char ver;
	
	for( i = 0;i < 3;i++ )
	{
		for( j = 0;j < 3;j++ )
		{
			mat3[i][j] = 'N';
		}
	}
	
	for( k = 0;k < 10;k++ )
	{
		estrutura( mat3 );
		
		result( mat3, &k );

		jogada( &op, &ver, &k );
		

		for( i = 0;i < 3;i++ )
		{
			for( j = 0;j < 3;j++ )
			{
				while( op == mat[i][j] )
				{
					estrutura( mat3 );
					puts( "OPÇÃO INVÁLIDA!" );
					jogada( &op, &ver, &k );
					i = -1;
					j = -1;
				}
			}
		}
	
		
		switch( op )
		{
			case 1:
				mat[0][0] = op;
				if( k == 0 || k == 2 || k == 4 || k == 6 || k == 8 )
				{
					mat3[0][0] = ver;
				}
				else
				{
					mat3[0][0] = ver;
				}
				break;
			case 2:
				mat[0][1] = op;
				if( k == 0 || k == 2 || k == 4 || k == 6 || k == 8 )
				{
					mat3[0][1] = ver;
				}
				else
				{
					mat3[0][1] = ver;
				}
				break;
			case 3:
				mat[0][2] = op;
				if( k == 0 || k == 2 || k == 4 || k == 6 || k == 8 )
				{
					mat3[0][2] = ver;
				}
				else
				{
					mat3[0][2] = ver;
				}
				break;
			case 4:
				mat[1][0] = op;
				if( k == 0 || k == 2 || k == 4 || k == 6 || k == 8 )
				{
					mat3[1][0] = ver;
				}
				else
				{
					mat3[1][0] = ver;
				}
				break;
			case 5:
				mat[1][1] = op;
				if( k == 0 || k == 2 || k == 4 || k == 6 || k == 8 )
				{
					mat3[1][1] = ver;
				}
				else
				{
					mat3[1][1] = ver;
				}
				break;
			case 6:
				mat[1][2] = op;
				if( k == 0 || k == 2 || k == 4 || k == 6 || k == 8 )
				{
					mat3[1][2] = ver;
				}
				else
				{
					mat3[1][2] = ver;
				}
				break;
			case 7:
				mat[2][0] = op;
				if( k == 0 || k == 2 || k == 4 || k == 6 || k == 8 )
				{
					mat3[2][0] = ver;
				}
				else
				{
					mat3[2][0] = ver;
				}
				break;
			case 8:
				mat[2][1] = op;
				if( k == 0 || k == 2 || k == 4 || k == 6 || k == 8 )
				{
					mat3[2][1] = ver;
				}
				else
				{
					mat3[2][1] = ver;
				}
				break;
			case 9:
				mat[2][2] = op;
				if( k == 0 || k == 2 || k == 4 || k == 6 || k == 8 )
				{
					mat3[2][2] = ver;
				}
				else
				{
					mat3[2][2] = ver;
				}
				break;		
		}
	}
}

void estrutura( char mat3[3][3] )
{
	int i, j, cont = 0;
	
	system( "cls" );
		
	puts( " =================" );
	puts( "   JOGO DA VELHA  " );
	puts( " =================" );
	for( i = 2;i > -1;i-- )
	{
		for( j = 0;j < 3;j++ )
		{
			cont++;
		
			if( mat3[i][j] == 'N' )
			{
				printf( "|     ", cont );
			}
			else
			{
				printf( "|  %c  ", mat3[i][j] );
			}
		}
		puts( "|" );
		puts( " =================" );
	}
	
	cont = 0;
}

void jogada( int *op, char *ver, int *k )
{
	if( *k == 0 || *k == 2 || *k == 4 || *k == 6 || *k == 8 )
	{
		printf( "QUER JOGAR [X] EM QUAL POSIÇÃO? " );
		scanf( "%d", &*op );	
		*ver = 'X';
	}
	else
	{
		printf( "QUER JOGAR [O] EM QUAL POSIÇÃO? " );
		scanf( "%d", &*op );
		*ver = 'O';
	}
}

void result( char mat3[3][3], int *k )
{
		//VITÓRIA DO [X] ------------------------------------------------	
			//Diagonal Principal
		if( mat3[0][0] == 'X' && mat3[1][1] == 'X' && mat3[2][2] == 'X' )
		{
			printf( "VITÓRIA DO [X]" );
			exit(0);
		}
		
			//Diagonal Oposta
		if( mat3[2][0] == 'X' && mat3[1][1] == 'X' && mat3[0][2] == 'X' )
		{
			printf( "VITÓRIA DO [X]" );
			exit(0);
		}
		
			//Horizontal linha 1
		if( mat3[0][0] == 'X' && mat3[0][1] == 'X' && mat3[0][2] == 'X' )
		{
			printf( "VITÓRIA DO [X]" );
			exit(0);
		}
		
			//Horizontal linha 2
		if( mat3[1][0] == 'X' && mat3[1][1] == 'X' && mat3[1][2] == 'X' )
		{
			printf( "VITÓRIA DO [X]" );
			exit(0);
		}
		
			//Horizontal linha 3
		if( mat3[2][0] == 'X' && mat3[2][1] == 'X' && mat3[2][2] == 'X' )
		{
			printf( "VITÓRIA DO [X]" );
			exit(0);
		}
		
			//Vertical coluna 1
		if( mat3[0][0] == 'X' && mat3[1][0] == 'X' && mat3[2][0] == 'X' )
		{
			printf( "VITÓRIA DO [X]" );
			exit(0);
		}
		
			//Vertical coluna 2
		if( mat3[0][1] == 'X' && mat3[1][1] == 'X' && mat3[2][1] == 'X' )
		{
			printf( "VITÓRIA DO [X]" );
			exit(0);
		}
		
			//Vertical coluna 3
		if( mat3[0][2] == 'X' && mat3[1][2] == 'X' && mat3[2][2] == 'X' )
		{
			printf( "VITÓRIA DO [X]" );
			exit(0);
		}
		//---------------------------------------------------------------
		
		
		//VITÓRIA DO [O] ------------------------------------------------	
			//Diagonal Principal
		if( mat3[0][0] == 'O' && mat3[1][1] == 'O' && mat3[2][2] == 'O' )
		{
			printf( "VITÓRIA DO [O]" );
			exit(0);
		}
		
			//Diagonal Oposta
		if( mat3[2][0] == 'O' && mat3[1][1] == 'O' && mat3[0][2] == 'O' )
		{
			printf( "VITÓRIA DO [O]" );
			exit(0);
		}
		
			//Horizontal linha 1
		if( mat3[0][0] == 'O' && mat3[0][1] == 'O' && mat3[0][2] == 'O' )
		{
			printf( "VITÓRIA DO [O]" );
			exit(0);
		}
		
			//Horizontal linha 2
		if( mat3[1][0] == 'O' && mat3[1][1] == 'O' && mat3[1][2] == 'O' )
		{
			printf( "VITÓRIA DO [O]" );
			exit(0);
		}
		
			//Horizontal linha 3
		if( mat3[2][0] == 'O' && mat3[2][1] == 'O' && mat3[2][2] == 'O' )
		{
			printf( "VITÓRIA DO [O]" );
			exit(0);
		}
		
			//Vertical coluna 1
		if( mat3[0][0] == 'O' && mat3[1][0] == 'O' && mat3[2][0] == 'O' )
		{
			printf( "VITÓRIA DO [O]" );
			exit(0);
		}
		
			//Vertical coluna 2
		if( mat3[0][1] == 'O' && mat3[1][1] == 'O' && mat3[2][1] == 'O' )
		{
			printf( "VITÓRIA DO [O]" );
			exit(0);
		}
		
			//Vertical coluna 3
		if( mat3[0][2] == 'O' && mat3[1][2] == 'O' && mat3[2][2] == 'O' )
		{
			printf( "VITÓRIA DO [O]" );
			exit(0);
		}
		
			//Velha
		if( *k == 9 )
		{
			printf( "DEU VELHA!" );
			exit(0);
		}
}
