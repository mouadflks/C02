char *ft_strcpy(char *dest, char *src){
    for(int i =0;src[i]!='\0';i++){
        dest[i] = src[i];
    }return dest;
}
int main(){
    char strc[]="write what you want to copy:??";
    char arr[28]; 
    ft_strcpy(arr,strc);
  
    
}
