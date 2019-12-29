#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//"/Users/my/Desktop/проекты языка си/16 Ява argv/16 Ява argv/Text"
int main(int argc, const char * argv[]) 
{
    printf("%i",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("%d. %s\n", i, argv[i]);
    }

    printf("\n\n\n\n");
    if (argc<2)
    {
        printf("Введите первый аргументом адрес файла, а последующими разделители между словами в формате \"разделитель\"\n");
        return 0;
    }
    
    printf("Выводим все введенные разделители\n");

    for(int i=0;i<(argc-2);i++)
    {
        printf("%s",argv[i+2]);
    }

    printf("\n");
    FILE *txt;
    txt=fopen(argv[1], "r");

    if (txt==NULL)
    {
        printf("Ошибка открытия файла, возможно не введен адрес или введен не верно\n");
        return 6;
    }

    char sim;
    int cnt=0;;
    int separ=0;
 
    do
    {
        if(separ==0)
        {
            printf("Слово №%i ",cnt);
            separ=100;
        }
        
        sim=getc(txt);
        for(int i=0;i<(argc-2);i++)
        {
            (sim==argv[i+2][0])?(separ=0):(separ=1);
            if(separ==0)
            {
                break;
            }
        }

        if (separ != 0 && sim != '\n' && sim != ' ' && sim != '\xff')
        {
            printf("%c", sim);
        }
        
        if(separ==0)
        {
             printf("\n");
             cnt++;
        }
    }
    while ((sim)!='\xff');

    printf("\n");
    return 0;
}
