#include <unistd.h>

void num_combinations(){
    char a = '0';
    char b ;
    char c = '0';
    char d ;


    while (a <=9 , b <=9){
        while (a <= '9'){
        b = '1';
        d = '0';

            while (b <= '9'){
                write(1,&c,1);
                write(1, &d, 1);
                write(1, " ", 1);
                write(1, &a, 1);
                write(1, &b, 1) ;
                write(1, " ", 1);
                b++;
            }
            a++;
        }
        c++;
        d++;
    }
    c ='0';
    while (c <= '9'){
        d = '0';
        
            while (d <= '9'){
                write(1,&c,1);
                write(1, &d, 1);
                write(1, " ", 1);
                d++;
            }
        c++;       
            }
}

int main() {
    num_combinations();

    return 0;
}

