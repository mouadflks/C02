int ft_str_is_lowercase(char *str){
    for(int i = 0;str[i]!='\0';i++){
       if(str[i]<'a' || str[i]>'z'){// a = 65 and z = 90;
           return 0;
       }
}
return 1;
}
int main() {
    char nim[]="thc";
    ft_str_is_lowercase(nim);
  

    return 0;
}
