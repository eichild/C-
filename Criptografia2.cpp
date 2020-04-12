#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
char login[20];
char nome[30];
char senha[20];
char invertido[20];
int i;

FILE *arquivo;
arquivo = fopen("Teste.txt", "r");
if (arquivo != NULL)
{
fclose(arquivo);
}
arquivo = fopen("Teste.txt", "w");
if (arquivo == NULL)
    { 
    
      printf ("Impossível Abrir o arquivo.");
    }
printf ("Digite seu nome: ");
gets(nome);
printf ("Digite seu Login: ");
gets(login);
printf ("Digite sua Senha: ");
gets(senha);
 for (i=0;i<=strlen(senha);i++)
    {
        if((senha[i]=='a')||(senha[i]=='A'))
        {
          senha[i]='%#3';
        }
       else if((senha[i]=='e')||(senha[i]=='E'))
        {
          senha[i]='@';
        }
        else if((senha[i]=='i')||(senha[i]=='I'))
        {
          senha[i]='!';
        }
        else if((senha[i]=='o')||(senha[i]=='O'))
        {
          senha[i]='$';
        }
       else  if((senha[i]=='u')||(senha[i]=='U'))
        {
          senha[i]='%';
        }
        
    }

for (i=(strlen(senha)-1); i>=0; i--)
{

printf("%c",senha[i] );

}
    
    
fprintf(arquivo, "Nome:%s Login:%s Senha: %s \n",login, nome,senha);

fclose(arquivo);


return 0;
}
