#include<stdio.h>
int	ft_strcmp(char *s1, char *s2){
    int i=0,z=0,a;
	while(s1[i] && s2[i]){
	    if(s1[i]==s2[i]){
	        i++;
	    }else{
	        return 1;
	    }
	    
	}return 0;
    
}

int main(){
char a[]="test";
char b[]="hhh";
printf("%d",ft_strcmp(a,b));
}
