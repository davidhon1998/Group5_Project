#include "group5.h"
//���MAIN��UI���ܤ� 
int score = readfile();
char menu;
//Created by hihison 
void printmenu(){ //�ڪ��D�H�O hihison 
	score = readfile();
	system("cls");
	system("COLOR 70");
	printf("\n                                                ����̤j���C���t��               \n");
	delay(0.005);
	printf("                                                 �W");
	delay(0.005 );
	printf("     �u");
	delay(0.005);
	printf("     �o\n");   
	delay(0.005);
	//�W�u�o!! (�U�u��) 
	printf("            ��������������������������������������������������������������������������������������������\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��                  �|�ӹC�����g���                                                      ��\n");
	printf("            ��                                                                                        ��\n");	
	printf("            ��                  1. Riddle                                                             ��\n");	
	printf("            ��                                                                                        �� \n");	
	printf("            ��                  2. �|�D�� /no                                                         ��\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��                  3. �q�Ʀr                                                             ��\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��                  4. �ܤ@�I   /no                                                       ��\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��                  �ХH�Ʀr����,�� �Ʀr0 ���}���t�� ...                                ��\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��������������������������������������������������������������������������������������������\n");
	printf("            ��������������������������������������������������������������������������������������������\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��                �{������ : %d                                                          ��\n",score);
	printf("            ��                                                                                        ��\n");
	printf("            ��                                                                                        ��\n");
	printf("            ��������������������������������������������������������������������������������������������\n");
}
int main(){
	readfile();
	printf("");
	
	int imenu = 1;
	do{
		printmenu();
		menu = getch();
		imenu = menu - '0';

		switch(imenu){
			case 1:
				system("cls");
				riddle();
				break;
			case 2 :
				printf("game2\n");
				break;
			case 3:
				guessnum();
				break;
			case 4:
				break;
			
		};
		if (imenu<0||imenu>4) {
			printf("Wrong Choice!"); 
			delay(0.1);
		}
	} while (imenu!=0);
	MessageBox(NULL, "Good Bye!", "Bye", MB_OK);
	savefile(score);

	
}


