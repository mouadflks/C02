char *ft_strncpy(char *dest, char *src, unsigned int n){
    for(int i =0;i<n;i++){
        if(src[i]=='\0' && n>i){
            for(int k = i;k<n;k++){
                dest[k] = '\0';
            }
            break;
        }
        dest[i] = src[i];
    }return dest;
}
int main(){
    char strc[]="write what you want to copy:??";
    char arr[35]; 
    ft_strncpy(arr,strc,29);
    
}

