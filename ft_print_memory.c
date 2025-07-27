#include<unistd.h>
void print_byte_hex(unsigned char byte){
    char *hex="0123456789abcdef";
    char result[2];
    result[0]=hex[byte/16]; 
    result[1]=hex[byte%16];
    write(1,result,2);
}
void print_adress(unsigned long adress){
    char *hex ="0123456789ABCDEF";
    char result[16];
    int i;
    i =15;
    while(i>=0){
        result[i] = hex[adress % 16];
        adress /=16;
        i--;
    }
    write(1,result,16);
}
void print_hex_block(unsigned char *data, int size){
    for(int i =0;i<16;i++){
        if(i<size){
        print_byte_hex(data[i]);
        }else{
            write(1," ",1);
        }
        if(i % 2 == 1){
            write(1," ",1);
        }}
    write(1,"  ",2);
}
   
   void print_ascii_block(unsigned char *data, int size) {
       for(int i = 0;i<size;i++){
           if(data[i]>=32 && data[i]<=126){//18-16=2
               write(1,&data[i],1);
            if(i == 15)break;
           }
           else{
               write(1,".",1);
           }
  
}}
void ft_print_memory(void *addr, unsigned int size) {
       unsigned char *dat = (unsigned char *)addr;
       unsigned int i = 0;
       while(i<size){
           print_adress((unsigned long)(dat+i));

           write(1," : ",3);
           print_hex_block(dat+i,size-i);
           print_ascii_block(dat+i,size-i); 
           i+=16;
           
           write(1,"\n",1);
          
       }}

int main() {
    char str[] ="helljklbfnbnekjfbeffegtvsjuhilknfkuirfufnlkwuhfliwkfuhweilfwkfaso";
 ft_print_memory(str, sizeof(str));
    return 0;
}







