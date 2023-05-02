#include<stdio.h>
char *ft_strstr(char *str, char *to_find){
	 int i=0;
	 int j=0;
	 if(to_find[j]=='\0'){
	     return str;
	 }
	 while(str[i]){
	 while(str[i+j]==to_find[j]){
	   if(to_find[j]=='\0'){
	       return str;
	   }else  
	  j++;
	 }
	 i++;
	}
	return NULL;
   }

int main(){
char t[]="tre";
char c[]="hello tt";
printf("%s",ft_strstr(c,t));
}
