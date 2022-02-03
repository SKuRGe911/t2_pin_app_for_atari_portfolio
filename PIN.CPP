#include <STDIO.H>
#include <STDLIB.H>
#include <CONIO.H>
#include <DOS.H>

char i;
char pos;
char lines;
char length;
char decrease;
char delay_amount;

void delay(char d){
	for(char i=0;i<d;i++){

	}
}

int main(void){
	randomize();
	delay_amount=25;
	clrscr();
	printf("PPPPP IIIIIII N    N\r\n");
	delay(delay_amount);
	printf("P  PP    I    NN   N IDENTIFICATION\r\n");
	delay(delay_amount);
	printf("P  PP    I    N N  N\r\n");
	delay(delay_amount);
	printf("PPPPP    I    N  N N PROGRAM\r\n");
	delay(delay_amount);
	printf("P        I    N   NN\r\n");
	delay(delay_amount);
	printf("P     IIIIIII N    N\r\n");
	delay(delay_amount);
	printf("\r\n");
	delay(delay_amount);
	printf("Strike a key when ready ...");
	getch();
	delay_amount=5;
	printf("\r\n");
	printf("\r\n");
	printf("12345678901234567890123457890123456780\r\n");
	pos=0;
	lines=1;
	length=38;
	decrease=1;
	while(1){
		for(char i = 1;i<length;i++){
			char c[2]={('0'+random(9)),0};
			printf(c);
		}
		delay(delay_amount);
		printf("\r\n");
		lines+=1;
		if(lines==5){
			lines=0;
			length=length-decrease;
			if(decrease==1){
				decrease=2;
			}else{
				decrease=1;
			}
		}
		if(length<=4){
			break;
		}

	}
	for(char i=0;i<10;i++){
		printf("9003\r\n");
		delay(delay_amount);
	}
	printf("\r\nPIN IDENTIFICATION NUMBER: 9003\r\n\r\n");
	return 0;
}
