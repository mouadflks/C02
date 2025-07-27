#include<unistd.h>
void print_hex(char c){
    char *hex="0123456789abcdef";
 write(1,"\\",1);
    write(1,&hex[c / 16],1);
    write(1,&hex[c % 16],1);
}
void ft_putstr_non_printable(char *str){
    for(int i =0;str[i]!='\0';i++){
        if(str[i]<127 &&str[i]>=32){
            write(1,&str[i],1);
        }
       
        else {
             char c = str[i];
            print_hex(c);
        }
    }
}
int main() {
    char strn[]="Coucou\ntu vas bien";
ft_putstr_non_printable(strn);
    return 0;
}
