#include "headline.h"

void ruchbos1(bos1& bos,mojstatek& wirek){
if(bos.exist==1){
if(bos.x>=wirek.x){
bos.usunstatek();
bos.x=bos.x-bos.rchx;
bos.rysuj();
}
if(bos.x<=wirek.x){
bos.usunstatek();
bos.x=bos.x+bos.rchx;
bos.rysuj();
}
}
}

void ruchbos2(bos2& bos,mojstatek& wirek){
if(bos.exist==1){
if(bos.x>=wirek.x){
bos.usunstatek();
bos.x=bos.x-bos.rchx;
bos.rysuj();
}
if(bos.x<=wirek.x){
bos.usunstatek();
bos.x=bos.x+bos.rchx;
bos.rysuj();
}
}
}
