int ft_str_is_uppercase(char *str){
    for(int i = 0;str[i]!='\0';i++){
       if(str[i]<'A' || str[i]>'Z'){// a = 65 and z = 90;
           return 0;
       }
}
return 1;
}
int main() {
    char nim[]="ASD";
    ft_str_is_uppercase(nim);
    
    return 0;
}
