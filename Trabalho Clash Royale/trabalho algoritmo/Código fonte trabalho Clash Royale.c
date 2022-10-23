#include<stdio.h>
#include<string.h>
typedef struct{
	int elixir, id;
	char nome[30];
	char tipo[30];
	char rar[30];
	int nivel;
}Carta;
void inicializarVetor(Carta carta[]){
	int i;
	for(i=0; i<50; i++){
		carta[i].id=-1;
	}
}
void adicionarCarta(char nom[], char tip[], char rari[], int *el, int *lvl){
   	printf("\ndigite o nome da nova carta: ");
    scanf(" %[^\n]s", nom);
    //esta funcao na string serve para conseguir inserir mais de uma palavra
	printf("\ndigite o tipo da nova carta: ");
	scanf("%s", tip);
	printf("\ndigite a raridade da nova carta: ");
	scanf("%s", rari);
	printf("\ndigite o custo da nova carta: ");
	scanf("%d", &*el);
	printf("\ndigite o nivel da nova carta: ");
	scanf("%d", &*lvl);
}
void inserirCarta(Carta carta[], char nom[], char tip[], char rari[], int el, int lvl,int aux){
	int i;
	for(i=0; i<50; i++){
		if (i == aux){
			strcpy(carta[i].nome,nom);
			strcpy(carta[i].tipo,tip);
			strcpy(carta[i].rar,rari);
			carta[i].elixir=el;
			carta[i].nivel=lvl;
			carta[i].id=i+1;
			i=aux;// sair do for
		}
	}
}
void printarCartas(Carta carta[], int aux){
	int i;
	for(i=0; i<aux; i++){
		printf("%d-\n", carta[i].id);
		printf("Nome: %s\n", carta[i].nome);
		printf("tipo: %s\n", carta[i].tipo);
		printf("raridade: %s\n", carta[i].rar);
		printf("elixir: %d\n", carta[i].elixir);
		printf("Nivel: %d\n\n", carta[i].nivel);
	}
}
void printarNome(Carta carta[],int aux){
	int i;
	for(i=0; i<aux; i++){
		printf("\n%d - %s", carta[i].id, carta[i].nome);
	}
}
int main(){
	int i, j=0, k=0, opcao, altNivel, novoNivel, aux=0, consult, deck;//a variavel aux serve para contar o numero de "switches" que sao executados
	int bomba;//'bomba' vai explodir uma carta(deletar)
	//estas variaveis sao para a adicao de valores na funcao "inserirCarta":
	int elixir, nivel;
	char nome[30], tipo[30], rar[30];
	int ifDeck=0;//esta variavel serve para conferir se ja existe algum deck no caso 7 e 8
	int altDeck=0, altDeck1=0;//estas variaveis servem para auxiliar na edicao do deck, atraves da comparacao de id
	int posID=0;//esta variavel serve para conferir a posicao da carta no deck(caso 5), para a atualizacao de nivel no deck
	Carta novoDeck[8];
	Carta carta[50];
	inicializarVetor(x);
	do{
		printf("\nDigite o que deseja fazer: \n\n  [0] Terminar programa \n  [1] Inserir carta \n  [2] Remover carta \n  [3] Ver cartas disponiveis \n  [4] Pesquisar carta \n  [5] Alterar o nivel \n  [6] Criar Deck \n  [7] Consultar deck \n  [8] Editar deck \n\n");
		scanf("\n%d", &opcao);
		switch (opcao){
	        case 1:
				adicionarCarta(nome,tipo,rar,&elixir,&nivel);
				inserirCarta(carta,nome,tipo,rar,elixir,nivel, aux);
				printf("\n");
				aux++;
			break;
			case 2:
				for(i=0; i<aux; i++){
					printf("\n%d - %s\n", carta[i].id, carta[i].nome);
				}
				printf("\nDigite a ID da carta que deseja remover: ");
				scanf("%d", &bomba);
				for(i=bomba-1; i < aux-1; i++){
					//explodir carta
					if(i!=aux){
						strcpy(carta[i].nome, carta[i+1].nome);
						strcpy(carta[i].tipo, carta[i+1].tipo);
						strcpy(carta[i].rar, carta[i+1].rar);
						carta[i].elixir = carta[i+1].elixir;
						carta[i].nivel = carta[i+1].nivel;	
					}else{
						carta[i].id=-1;
					}
				}
				aux--;
			break;
			case 3:
				printarCartas(carta,aux);
			break;
			case 4:
				printarNome(carta, aux);
				printf("\nDigite a ID da carta que deseja consultar: ");
				scanf("%d", &consult);
				for(i=0; i<aux; i++){
					if(x[i].id==consult){
						printf("%d-\n", carta[i].id);
					    printf("Nome: %s\n", carta[i].nome);
					    printf("tipo: %s\n", carta[i].tipo);
					    printf("raridade: %s\n", carta[i].rar);
					    printf("elixir: %d\n", carta[i].elixir);
						printf("Nivel: %d\n\n", carta[i].nivel);
					}
				}
			break;
			case 5:
				printarNome(carta, aux);
				printf("\nDigite a ID da carta que deseja alterar o nivel: ");
				scanf("%d", &altNivel);
				printf("digite o novo nivel: ");
				scanf("%d", &novoNivel);
				for(i=0; i<aux; i++){
					if(carta[i].id==altNivel){
						carta[i].nivel=novoNivel;
						posID=i;
					}
				}
				if(ifDeck!=0){
					novoDeck[posID].id=carta[posID].id;
				}
			break;
			case 6:
				printf("\nSuas opcoes sao: \n");
				printarNome(carta, aux);
				//os decks de cartas no clash royale possuem 8 cartas
				for(i=0; i<8; i++){
					printf("\nDigite a %d carta do seu deck: ", i+1);
					scanf("%d", &deck);
					setbuf(stdin,NULL);
					for(k=0; k<aux; k++){
						if(x[k].id==deck){
							strcpy(novoDeck[j].nome,carta[k].nome);
							strcpy(novoDeck[j].tipo,carta[k].tipo);
							strcpy(novoDeck[j].rar,carta[k].rar);
							novoDeck[j].elixir=carta[k].elixir;
							novoDeck[j].nivel=carta[k].nivel;
							novoDeck[j].id=carta[k].id;
							ifDeck=1;
							j++;
						}
					}
				}
			break;
			case 7:
				if(ifDeck!=0){
					printarCartas(novoDeck, 8);
				}else{
					printf("\nAinda nao foi adicionado um deck!\n\n");
				}
			break;
			case 8:
				if(ifDeck!=0){
					printarNome(novoDeck,8);
					printf("Selecione qual carta deseja alterar(id): ");
					scanf("%d", &altDeck);
					printarNome(carta,aux);
				    printf("Selecione a nova carta do deck: ");
				    scanf("%d", &altDeck1);
					for(i=0; i<8; i++){
						if(altDeck==novoDeck[i].id){
							strcpy(novoDeck[altDeck-1].nome,carta[altDeck1-1].nome);
							strcpy(novoDeck[altDeck-1].tipo,carta[altDeck1-1].tipo);
							strcpy(novoDeck[altDeck-1].rar,carta[altDeck1-1].rar);
							novoDeck[altDeck-1].elixir=carta[altDeck1-1].elixir;
							novoDeck[altDeck-1].nivel=carta[altDeck1-1].nivel;
							novoDeck[altDeck-1].id=carta[altDeck1-1].id;
							//sair do for
							i=8;
						}
					}
			    }else{
			    	printf("\nAinda nao foi adicionado um deck!\n\n");
				}
			break;
	    }
		if(opcao>8){
			printf("nao existe essa opcao, escolha outra: \n\n");
		}
	}while(opcao!=0);
	
	return 0;
}