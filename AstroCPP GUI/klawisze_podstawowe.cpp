#include "headline.h"
#include "str.h"

extern poziomgry poziom;

void odczytzkl(void){
if(GetAsyncKeyState(0x70))//F1
{
help();
}
if(GetAsyncKeyState(0x1B))//ESC
{
exit(-1);
}
if(GetAsyncKeyState(VK_F2))//F2
{
pokazstat();
}
}
