unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    
    for(int i = 0;i<size-1;i++){
        dest[i] = src[i];
    }
    dest[size-1]='\0';
}
int main() {
    char strn[]="hello";
char dest[4];
   ft_strlcpy(dest, strn,4);
   
   

    return 0;
}
