char *ft_strcapitalize(char *str){
    if(str[0]>='a' && str[0]<='z'){
        str[0]-=32;
    }
    for(int i = 1;str[i]!='\0';i++){
        if(str[i]==32 && str[i+1]>='a' && str[i+1]<='z'){
            str[i+1]-=32;
            
        }
    }
}
int main() {
    char strn[]="hello im mouad";
   ft_strcapitalize(strn);
   

    return 0;
}
