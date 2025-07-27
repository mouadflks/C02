char *ft_strlowcase(char *str){
    
    if(str[0]>='a' || str[0]>='z'){
    str[0]-=32;
    }
    for(int i =1;str[i]!='\0';i++){
        if(str[i] >'A' && str[i] <'Z'){
            str[i]= str[i] + 32;
        }
        
        
}}
int main() {
    char hi[]="helMo";
   ft_strlowcase(hi);
 

    return 0;
}
