
/******************************************************************************
BMT-103 Dersi Donem Sonu Prejesi 
Bu kod parçası Farklı katagorilerde belirli soruları her çalıştırdıgımızda rastgele
bir sırada önümüze getirir. Her dogruda 10 puan ekleyerek kulanıcnıdan alınan isim,
soyisimi ve puanı txt dosyasına hangi kategorideki testi çözdüğünüzü de kaydeder.

Grup : A-A-E

Ahmet SÖĞÜT 22181616004

Alperen BARAN 22181616012

Yunus Emre ÇAKMAK 22181616028

*******************************************************************************/







#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>


#include "spor.h"                 //Ayrı olarak oluşturduğumuz fonksiyonları kütüphane şeklinde buraya ekledik.
#include "genelkulturzor.h"
#include "gastronomi.h"

int puan=0;

int genelkulturkolay(){                          //Burada testin ilk katagorisini fonksiyon olarak tanımladık

int a,i=0;
int dizi[10]={0,0,0,0,0,0,0,0,0,0};
char cevap=0;
//int puan=0;

printf("*******Kolay Genelkultur Testi*******\n");


srand(time(NULL));
basadon:
while(i<10){             //10 soru olduğu için 10 kerelik bir döngüye soktuk

a=1+ rand() % 10;      //burada ilk başta herhangi bir soru ataması için  a değişkenine 1 den 10 kadar olan sayılardan rastgele bir sayı atadık                
for(int k=0;k<10;k++){   //bu döngüde atadığımız a sayısını her seferinde   farklı olduğunu kontrol eder aynı ise başa döndürür ve tekrar rastgele sayı atar              
if(dizi[k]==a){   
goto basadon;
}
}

switch (a)               //burada rastgele atanan a sayısına göre soruyu seçer
{
case 1:
    printf("%d. Soru-)",i+1);
    printf("Hangisi 12 Olimposlu Yunan Tanrisi arasinda yer almaz?\n A-)Athena\n B-)Ares\n C-)Gorr\n D-)Hephaistos\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case 'a':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'B':
    case 'b':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'C':
    case 'c':
         printf("Tebrikler! 10 puan kazandiniz\n");
         puan+=10;
        break;
    case 'D':
    case 'd':printf("Maalesef yanlis cevap\n");
        break;

    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    
    
    
    
    
    
    dizi[i]=a;
    i=i+1;
    break;

case 2:

printf("%d. Soru-)",i+1);
    printf("Amerika Birlesik Devletleri tarihi boyunca en buyuk zaiyati hangi savasta vermistir?\n A-)Irak Savasi\n B-)2.Dunya Savasi\n C-)Amerika ic savasi\n D-)Vietnam Savasi\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'B':
     case    'b':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'C':
     case    'c':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'D':
    case 'd':printf("Tebrikler! 10 puan kazandiniz\n");
                puan+=10;
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }


    
    dizi[i]=a;
    i=i+1;
    break;
   
case 3:

printf("%d. Soru-)",i+1);
    printf("Fenerbahce SK armasinda bulunan yaprak hangi bitkiye aittir?\n A-)Mese\n B-)Salkim sogut\n C-)Maydanoz\n D-)Kayin\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Tebrikler! 10 puan kazandiniz\n");
         puan+=10;
        break;
    case 'B':
    case 'b':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'C':
    case 'c':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'D':
    case 'd':printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
   
case 4:
printf("%d. Soru-)",i+1);
    printf("Hangisi Turkiye Cumhuriyeti'nin komsu devletlerinden birisi degildir?\n A-)Bulgaristan\n B-)Yunanistan\n C-)Turkmenistan\n D-)Gurcistan\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case 'a':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'B':
    case 'b':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'C':
    case 'c':
         printf("Tebrikler! 10 puan kazandiniz\n");
         puan+=10;
        break;
    case 'D':
    case 'd':printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
   
case 5:
printf("%d. Soru-)",i+1);
    printf("Yavuz Sultan Selim Halifelik makamini hangi devleti ortadan kaldirdiktan sonra Osmanli Devleti'ne getirmistir?\n A-)Memluk Devleti\n B-)Abbasi Halifeligi\n C-)Emevi Halifeligi\n D-)Safevi Devleti\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case 'a':
         printf("Tebrikler! 10 puan kazandiniz\n");
         puan+=10;
        break;
    case 'B':
    case 'b':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'C':
    case 'c':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'D':
    case 'd':printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
    
case 6:
printf("%d. Soru-)",i+1);
    printf("Sefiller kitabinin yazari kimdir?\n A-)Balzac\n B-)Victor Hugo\n C-)Dostoyevski\n D-)Franz Kafka\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'B':
     case    'b':
         printf("Tebrikler! 10 puan kazandiniz\n");
         puan+=10;
        break;
    case 'C':
    case 'c':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'D':
    case 'd':printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
   
case 7:
printf("%d. Soru-)",i+1);
    printf("Turgut Ozal'dan onceki cumhurbaskani hangisidir?\n A-)Celal Bayar\n B-)Bulent Ecevit\n C-)Suleyman Demirel\n D-)Kenan Evren\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'B':
    case 'b':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'C':
    case 'c':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'D':
    case 'd':printf("Tebrikler! 10 puan kazandiniz\n");
     puan+=10;
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
case 8:
printf("%d. Soru-)",i+1);
    printf("Halife sifatina sahip Osmanli Hanedanliginin son uyesi kimdir?\n A-)Abdulmecid Efendi\n B-)Sultan Vahidettin\n C-)Sultan II. Abdulhamid Han\n D-)Sultan Abdumecid\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case 'a':
         printf("Tebrikler! 10 puan kazandiniz\n");
         puan+=10;
        break;
    case 'B':
    case 'b':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'C':
    case 'c':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'D':
    case 'd':printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
case 9:
printf("%d. Soru-)",i+1);
    printf("Unlu uyusturucu karteli ve milyoner Pablo Escobar hangi ulkenin vatandasiydi?\n A-)Kuba\n B-)Kolombiya\n C-)Bolivya\n D-)Meksika\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case 'a':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'B':
    case 'b':
         printf("Tebrikler! 10 puan kazandiniz\n");
         puan+=10;
        break;
    case 'C':
    case 'c':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'D':
    case 'd':printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
case 10:
printf("%d. Soru-)",i+1);
    printf("Islami gelenekte Ebu Cehil olarak bilinen Islam inkarcisi Mekkeli musrigin gercek adi nedir?\n A-)Osman bin Affan\n B-)Yezid bin Muaviye\n C-)Amr bin Hisam\n D-)Abduluzza bin Abdulmuttalib\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case 'a':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'B':
    case 'b':
         printf("Maalesef yanlis cevap\n");
        break;
    case 'C':
    case 'c':
         printf("Tebrikler! 10 puan kazandiniz\n");
         puan+=10;
        break;
    case 'D':
    case 'd':printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;        

default:
    break;}
    
}
printf("Puaniniz = %d\n",puan);                        //yarışmacının aldığı puanı yazdırır 
    if(puan>=80){
        printf("Ilber ORTAYLI olma yolundasin");
    }
    else if(puan >=70){
        printf("Celal SENGOR olacan ha gayret");
    }
    else if(puan >=50){
        printf("Alperenu BARAN");
    
    }
    else if(puan<50){
        printf("Tarihini bilmeyen bizden degildir");
    }
    return puan;
   
}

struct kullanicibilgisi             
{ 
    
char adi[20];
char soyadi[20];
int puan;

};




int main(){
   int kategori,zorluk;

struct kullanicibilgisi bilgisi;                   //burada kullanıcı bilgilerini tuttugumuz bir struct yapısı oluşturduk
   

    FILE *data;                     //Data adlı bir dosya oluşturuyoruz
    
    data = fopen ("data.txt","a+");     //oluşturduğumuz dosyayı açıyoruz
    
    printf("Adinizi giriniz\n");           //Kullanıcı bilgileri kullanacıdan alınır
    gets(bilgisi.adi);
    printf("Soyadinizi giriniz\n");
    gets(bilgisi.soyadi);

    fprintf(data,"%s %s ",bilgisi.adi,bilgisi.soyadi);       //alınan kullanıcı bilgileri data adlı dosyaya işlenir
    

    printf("Katagori seciniz\n 1-) Genel kultur \n 2-) Spor\n 3-) Gastronomi\n  ");      //kategori şeçilir

   scanf("%d",&kategori);

   switch (kategori)            //şeçilen kategoriye gidilir
   {
   case 1:
      printf("Zorluk seciniz (1 kolay , 2 zor)\n");
      scanf("%d",&zorluk);
      switch (zorluk)
      {
      case 1:
      fprintf(data,"Genelkultur kolay testi = ");
       fprintf(data,"%d\n",genelkulturkolay());
        
        break;
      
      case 2:   
      fprintf(data,"Genelkultur zor testi = ");  
                 fprintf(data,"%d\n",genelkulturzor());
       break;  
      }
      break;
   case 2:
      fprintf(data,"Spor testi = ");
      fprintf(data,"%d\n",spor());
      
      break;

   case 3:
    fprintf(data,"Gastronomi testi = ");
     fprintf(data,"%d\n",gastronomi());
     
     break;

   }
  

   
    fclose(data); 
    
    
    if ( (data = fopen("data.txt","a+"))==NULL) {               //data adlı dosyanın olup olmadığını kontrol eder 
        printf("Dosya aacilamadi");
        exit(1);}

    
    
 

    
 
}
