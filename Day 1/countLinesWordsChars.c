#include <stdio.h>
#define IN 0
#define OUT 0

int main() {
    int c, nl, nw, nc, state;
    state = OUT;
    nl =nw=nc = 0;
    while((c = getchar())!=EOF){
        ++nc;
        if(c=='\n') ++nl;
        if(c == ' ' || c=='\n' || c=='\t') state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("lines: %d\nwords: %d\nchars: %d", nl,nw,nc);
}