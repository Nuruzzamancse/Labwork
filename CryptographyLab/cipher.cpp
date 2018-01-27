#include<bits/stdc++.h>

using namespace std;

int main(){

    char inpt[100];

    gets(inpt);

    

    for(int i=0;inpt[i];i++){
        if(inpt[i]>='A' && inpt[i]<='Z')
        {

            if(((inpt[i]+3)%90)<65)
                printf("%c",(((inpt[i]+3)%90)+65));
            else
                printf("%c",((inpt[i]+3)%90));
        }
        else if(inpt[i]>='a' && inpt[i]<='z'){
            if(((inpt[i]+3)%122)<97)
            printf("%c",(((inpt[i]+3)%122)+97));
        else
            printf("%c",((inpt[i]+3)%122));
        }
        else
        {
            printf("%c",inpt[i]);
        }
    }

}