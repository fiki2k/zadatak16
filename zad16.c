// Program treba naci duljinu zadanog stringa.

#include <stdio.h>
int main()
{
	
    char str[100],i;
    printf("Unesi string: \n");
    scanf("%s",str);

    // '\0' predstavlja kraj stringa.
    for(i=0; str[i]!='\0'; ++i);
       printf("\nDuljina uneseog stringa je: %d",i);
    
    return 0;
}
