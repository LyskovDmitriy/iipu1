#include <stdlib.h>
int main(){
system("lspci -vmm | grep -w \'Vendor\\|Device\'");
return 0;
}