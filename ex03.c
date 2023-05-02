#include<stdio.h>
char *ft_strcat(char *dest, char *src, int nb){
    int i=0;
    int a=0;
    while(dest[a]!='\0'){
        a++;
    }
while(src[i] && nb!=0){
    dest[a+i]=src[i];
    i++;
    nb--;
}
dest[a+i]='\0';
return dest;
	    
}

int main(){
char src[]="1337";
char dest[]="ben";
printf("%s",ft_strcat(dest,src,2));
return 0;
}
