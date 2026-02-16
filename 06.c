#include <unistd.h>

void num_combinations(){
    int a = 0;
    int b;
    char c;

    while (a <= 98){
        b = a + 1;
        while (b <= 99){
            c = (a / 10) + '0';
            write(1, &c, 1);
            c = (a % 10) + '0';
            write(1, &c, 1);
            write(1, " ", 1);

            c = (b / 10) + '0';
            write(1, &c, 1);
            c = (b % 10) + '0';
            write(1, &c, 1);
            write(1, " ", 1);
            
            b++;
        }
        a++;
    }
}
int main(){
    num_combinations();
    return (0);
}
