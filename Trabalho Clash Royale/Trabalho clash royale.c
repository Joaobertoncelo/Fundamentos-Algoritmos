#include<stdio.h>
#include<string.h>
typedef struct{
	int elixir, id;
	char nome[30];
	char tipo[30];
	char rar[30];
	int nivel;
}carta;
void inicializarVetor(carta x[]){
	int i;
	for(i=0; i<50; i++){
		x[i].id=-1;
	}
}
void inserirCarta(carta x[], char nom[], char tip[], char rari[], int el, int lvl,int aux){
	int i;
	printf("%d", aux);
	for(i=0; i<aux; i++){
		if (x[i].id==-1){
			strcpy(x[i].nome,nom);
			strcpy(x[i].tipo,tip);
			strcpy(x[i].rar,rari);
			x[i].elixir=el;
			x[i].nivel=lvl;
			x[i].id=i+1;
			i=aux;// sair do for
		}
	}
}

void printarCartas(carta x[], int aux){
	int i;
	for(i=0; i<aux; i++){
		printf("%d-\n", x[i].id);
		printf("Nome: %s\n", x[i].nome);
		printf("tipo: %s\n", x[i].tipo);
		printf("raridade: %s\n", x[i].rar);
		printf("elixir: %d\n", x[i].elixir);
		printf("Nivel: %d\n\n", x[i].nivel);
	}
}
int main(){
	//a variavel aux serve para contar o número de "switches" que são executados
	int i, opcao, nivel, altNivel, novoNivel, elixir, aux=0, bomba, consult, deck;
	//'bomba' vai explodir uma carta(deletar)
	int contDeck=0;//esta variavel serve para fazer uma contagem correta na id das cartas do deck
	int ifDeck=0;//esta variavel serve para conferir se ja existe algum deck no caso 7 e 8
	int altDeck=0, altDeck1=0;//estas variaveis servem para auxiliar na edicao do deck, atraves da comparacao de id
	char nome[30], tipo[30], rar[30];
    //esta variavel abaixo serve para atribuir as cartas que serao selecionadas para o deck 
	carta novoDeck[8];
	carta x[50];
	inicializarVetor(x);
	do{
		printf("digite o que deseja fazer: \n\n 0-Terminar programa \n 1-Inserir carta \n 2-Remover carta \n 3-ver cartas disponiveis \n 4-pesquisar carta \n 5-Auterar o nivel \n 6-Criar Deck \n 7-Consultar deck \n 8-Editar deck \n");
		scanf("\n%d", &opcao);
		switch (opcao){
	        case 1:
	        	aux++;
	     	    printf("\ndigite o nome da nova carta: ");
			    scanf(" %[^\n]s", nome);
			    //esta função na string serve para conseguir inserir mais de uma palavra
				printf("\ndigite o tipo da nova carta: ");
				scanf("%s", tipo);
				printf("\ndigite a raridade da nova carta: ");
				scanf("%s", rar);
				printf("\ndigite o custo da nova carta: ");
				scanf("%d", &elixir);
				printf("\ndigite o nivel da nova carta: ");
				scanf("%d", &nivel);
				inserirCarta(x,nome,tipo,rar,elixir,nivel, aux);
				printf("\n");
				printarCartas(x,aux);
			break;
			case 2:
				for(i=0; i<aux; i++){
					printf("\n%d - %s\n", x[i].id, x[i].nome);
				}
				printf("digite a id da carta que deseja remover: ");
				scanf("%d", &bomba);
				for(i=bomba-1; i<aux; i++){
					//explodir carta
					if(i!=aux){
						strcpy(x[i].nome, x[i+1].nome);
						strcpy(x[i].tipo, x[i+1].tipo);
						strcpy(x[i].rar, x[i+1].rar);
						x[i].elixir = x[i+1].elixir;
						x[i].nivel = x[i+1].nivel;	
					}else{
						x[i].id=-1;
					}
				}
				aux--;
				printf("%d",aux);
				printarCartas(x, aux);
			break;
			case 3:
				for(i=0; i<aux; i++){
					printf("%d-\n", x[i].id);
					printf("Nome: %s\n", x[i].nome);
					printf("tipo: %s\n", x[i].tipo);
					printf("raridade: %s\n", x[i].rar);
					printf("elixir: %d\n", x[i].elixir);
					printf("Nivel: %d\n\n", x[i].nivel);
				}
			break;
			case 4:
				for(i=0; i<aux; i++){
					printf("\n%d - %s\n", x[i].id, x[i].nome);
				}
				printf("digite a id da carta que deseja consultar: ");
				scanf("%d", &consult);
				for(i=0; i<aux; i++){
					if(x[i].id==consult){
						printf("%d-\n", x[i].id);
					    printf("Nome: %s\n", x[i].nome);
					    printf("tipo: %s\n", x[i].tipo);
					    printf("raridade: %s\n", x[i].rar);
					    printf("elixir: %d\n", x[i].elixir);
						printf("Nivel: %d\n\n", x[i].nivel);
					}
				}
			break;
			case 5:
				for(i=0; i<aux; i++){
					printf("\n%d - %s\n", x[i].id, x[i].nome);
				}
				printf("digite a id da carta que deseja alterar o nivel: ");
				scanf("%d", &altNivel);
				printf("digite o novo nivel: ");
				scanf("%d", &novoNivel);
				for(i=0; i<aux; i++){
					if(x[i].id==altNivel){
						x[i].nivel=novoNivel;
					}
				}
			break;
			case 6:
				printf("Suas opcoes sao: \n");
				for(i=0; i<aux; i++){
					printf("\n%d - %s\n", x[i].id, x[i].nome);
				}
				//os decks de cartas no clash royale possuem 8 cartas
				for(i=0; i<8; i++){
					printf("Digite a %d carta do seu deck: ", i+1);
					scanf("%d", &deck);
					for(i=0; i<aux; i++){
						if(x[i].id==deck){
							strcpy(novoDeck[i].nome,x[i].nome);
							strcpy(novoDeck[i].tipo,x[i].tipo);
							strcpy(novoDeck[i].rar,x[i].rar);
							novoDeck[i].elixir=x[i].elixir;
							novoDeck[i].nivel=x[i].nivel;
						}
					}
				}
				
			break;
			case 7:
				if(ifDeck!=0){
					for(i=0; i<8; i++){
						printf("%d-\n", novoDeck[i].id);
						printf("Nome: %s\n", novoDeck[i].nome);
						printf("tipo: %s\n", novoDeck[i].tipo);
						printf("raridade: %s\n", novoDeck[i].rar);
						printf("elixir: %d\n", novoDeck[i].elixir);
						printf("Nivel: %d\n\n", novoDeck[i].nivel);
					}
				}else{
					printf("Ainda nao foi adicionado um deck!");
				}
			break;
			case 8:
				if(ifDeck!=0){
					for(i=0; i<aux; i++){
						printf("\n%d - %s\n", novoDeck[i].id, novoDeck[i].nome);
					}
					printf("Selecione qual carta deseja alterar(id): ");
					scanf("%d", &altDeck);
					for(i=0; i<aux; i++){
					printf("\n%d - %s\n", x[i].id, x[i].nome);
				    }
				    printf("Selecione a nova carta do deck: ");
				    scanf("%d", &altDeck1);
					for(i=0; i<8; i++){
						if(altDeck==novoDeck[i].id){
							strcpy(novoDeck[i].nome,x[altDeck].nome);
							strcpy(novoDeck[i].tipo,x[altDeck].tipo);
							strcpy(novoDeck[i].rar,x[altDeck].rar);
							novoDeck[i].elixir=x[altDeck].elixir;
							novoDeck[i].nivel=x[altDeck].nivel;
						}
					}
			    }else{
			    	printf("Ainda nao foi adicionado um deck!");
				}
			break;
	    }
	}while(opcao!=0);
	
	return 0;
}
