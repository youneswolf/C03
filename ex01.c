#include<stdio.h>
int	ft_strncmp(char *s1, char *s2,int n){
    int i=0,z=0,a=0;
  
	while(s1[i] && s2[i] && n!=0){
	    if(s1[i]==s2[i]){
	        i++;
	        n--;
	    }else{
	        return 1;
	    }
	    
	}return 0;
    
}

int main(){
char a[]="test";
char b[]="hhh";
printf("%d",ft_strncmp(a,b,3));
}
