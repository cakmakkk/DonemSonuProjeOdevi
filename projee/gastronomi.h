
int gastronomi(){

int a,i=0,puan=0;
int dizi[10]={0,0,0,0,0,0,0,0,0,0};
char cevap=0;
srand(time(NULL));

 printf("*******Spor Testi*******\n");
basadon:
while(i<10){

a=1+ rand() % 10;
for(int k=0;k<10;k++){
if(dizi[k]==a){   
goto basadon;
}
}

switch (a)
{
case 1:
    printf("%d. Soru\n",i+1);
    printf("\nKayisi kivaminda yumurta pisirmek için yumurtayi ocaga koyduktan itibaren kac dakika beklemek gerekiyor?\n A-)8-9 dakika\n B-)4-5 dakika\n C-)14-15 dakika\n D-)6-7 dakika\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case 'a':
         printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;
    case 'B':
    case 'b':
         printf("Maalesef Yanlis Cevap \n");
        break;
    case 'C':
    case 'c':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'D':
    case 'd':printf("Maalesef Yanlis Cevap\n");
        break;

    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    
    
    
    
    
    
    dizi[i]=a;
    i=i+1;
    break;

case 2:

printf("%d. Soru\n",i+1);
    printf("Pisireceginiz etin lokum kivaminda olmasi icin hangi islem yapilmalidir?\n A-)10 dakika boyunca et dovecegi ile inceltilmelidir\n B-)Bir gece onceden zeytinyagi, sut ve sarimsak ile marine edilmelidir\n C-)Et once haslanmali ardindan muhurlenmelidir\n D-)Celik bir tavada pisirilmelidir\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'B':
     case    'b':
         printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;
    case 'C':
     case    'c':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'D':
     case    'd':printf("Maalesef Yanlis Cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }


    
    dizi[i]=a;
    i=i+1;
    break;
   
case 3:

printf("%d. Soru\n",i+1);
    printf("Pirinci pisirmeden once suda bekletmek neden önemlidir?\n A-)Pirincin nisastasini cikartarak daha az kalorili olmasini sagladigi icin\n B-)Pirincin aromasini yok etmek ve tereyagi aromasinin baskin olmasi icin\n C-)Pilavin lapa olmasini engelledigi icin\n D-)Pilavi daha az pisirmeyi sagladigi icin\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;
    case 'B':
     case    'b':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'C':
     case    'c':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'D':
     case    'd':printf("Maalesef Yanlis Cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
   
case 4:
printf("%d. Soru\n",i+1);
    printf("Kek yaparken ilk olarak hangi islem yapilir?\n A-)Un ve seker karisimina azar azar sut eklenir\n B-)TUm malzemeler ayni anda konulur\n C-)Once yag ve sut karistirilir\n D-)Seker ve yumurta cirpilir\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'B':
     case    'b':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'C':
     case    'c':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'D':
     case 'd':printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;

    

    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
   
case 5:
printf("%d. Soru\n",i+1);
    printf("Cig yenecek sebzeleri ve salata malzemelerini iyi temizlemek cok onemli. Peki bunun icin hangi yöntemin daha etkili oldugunu biliyor musun?\n A-)Sebzeleri sirkeli suda 10 dakika kadar bekletmek\n B-)Sebzeleri yarim saat guneste bekletmek\n C-)Sebzeleri karbonatli suda 10 dakika kadar bekletmek\n D-)Sebzeleri bol suda yikamak\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case 'a':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'B':
    case 'b':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'C':
    case 'c':
         printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;
    case 'D':
    case 'd':printf("Maalesef Yanlis Cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
    
case 6:
printf("%d. Soru\n",i+1);
    printf("Arabasi corbasinin icinde hangi malzemeler vardir?\n A-)Kiyma-Kemik suyu-Un-Yag-Salca\n B-)Tavuk Suyu-Tavuk Eti-Un-Yag-Salca\n C-)Kusbasi-Kemik Suyu-Un-Yag-Salca\n D-)Kusbasi-Tavuk Suyu-Un-Yag-Sirke\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'B':
     case    'b':
        printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;
    case 'C':
     case    'c':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'D':
     case    'd':printf("Maalesef Yanlis Cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
   
case 7:
printf("%d. Soru\n",i+1);
    printf("Restoran kelimesinin anlami hangi yemekten gelmektedir?\n A-)Pilav\n B-)Nohut\n C-)Izgara\n D-)Corba\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'B':
     case    'b':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'C':
     case    'c':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'D':
     case    'd':printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
case 8:
printf("%d. Soru\n",i+1);
    printf("Komposto ve hosaflar daha çok hangi tur yemeklerin arkasindan ikram edilir?\n A-)Corba\n B-)Pilav\n C-)Et Yemegi\n D-)Sebze Yemegi\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'B':
     case    'b':
       printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;
    case 'C':
     case    'c':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'D':
     case    'd':printf("Maalesef Yanlis Cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
case 9:
printf("%d. Soru\n",i+1);
    printf("Gunumuzde komposto ve hosaflar ne zaman daha çok tuketilmektedir?\n A-)Ramazan Ayi\n B-)Muharrem Ayi\n C-)Kurban Bayrami\n D-)Dugunlerde\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case   'a':
         printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;
    case 'B':
     case    'b':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'C':
     case    'c':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'D':
     case    'd':printf("Maalesef Yanlis Cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
case 10:
printf("%d. Soru\n",i+1);
    printf("Hangisi kebabiyla unlu sehirlerimizdendir?\n A-)Karaman\n B-)Kars\n C-)Antalya\n D-)Yozgat\n ");
    cevap=getch();
    switch (cevap)
    {
    case 'A':
    case 'a':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'B':
    case 'b':
         printf("Maalesef Yanlis Cevap\n");
        break;
    case 'C':
    case 'c':
        printf("Tebrikler! 10 Puan Kazandiniz\n");puan+=10;
        break;
    case 'D':
    case 'd':printf("Maalesef Yanlis Cevap\n");
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
printf("Puaniniz = %d\n",puan);
    if(puan>=80){
        
        printf("Vedat Milor musun be kardesim!!!");
    }
    else if(puan >=70){
        printf("Senin muhtesem bir damak tadin var!");
    }
    else if(puan >=60){
        printf("Agzinin tadini biliyorsunnn!");

    }
    else if(puan<50){
        printf("Sen yemeklerini disardan siparis vermeye devam et diger turlusu olmaz zaten :)");
    }
    return puan;
}
