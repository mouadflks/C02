int ft_str_is_alpha(char *str){
    for(int i = 0;str[i]!='\0';i++){
       if(!(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')){
           return 0;
       }
}
return 1;
}
int main() {
    ft_str_is_alpha("he?ll");
    

    return 0;
}
