char *ft_strupcase(char *str){
    for(int i = 0;str[i]!='\0';i++){
       if(str[i]>='a' && str[i]<='z'){// a = 65 and z = 90;
       str[i] = str[i] - 32;
}}
return str;
}
int main() {
    char nim[]="ndcmnA";
   ft_strupcase(nim);
   
    
    return 0;
}
