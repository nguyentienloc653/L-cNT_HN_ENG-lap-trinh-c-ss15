#include<stdio.h>
#include<string.h>
int main(){
char text[]="ashduia";
int countcharacterNum=0;
int countcharacterSpecial=0;
int countcharacterText=0;
int lenght= strlen(text);
for(int i=0;i<lenght;i++){
	if(isalpha(text[i])){
		 countcharacterText++;
	}else if(isdigit(text[i])){
		 countcharacterNum++;
	}else{
		countcharacterSpecial++;
	}
}
printf("%d ki tu chu cai \n",countcharacterText);
printf("%d ki tu chu so \n",countcharacterNum);
printf("%d ki tu chu cai dac biet \n",countcharacterSpecial);
}
