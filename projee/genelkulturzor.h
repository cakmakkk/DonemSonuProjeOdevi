int genelkulturzor(){

int a,i=0;
int dizi[10]={0,0,0,0,0,0,0,0,0,0};
char cevap=0;
int puan=0;

printf("*******Zor Genel kultur Testi*******\n");


srand(time(NULL));
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
    printf("%d. Soru-)",i+1);
    printf("Dunya'nin 2.buyuk kanyonu olan Ulubey Kanyonu hangi sehrimizde bulunmaktadir?\n A-)Mugla\n B-)Artvin\n C-)Adana\n D-)Usak\n ");
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
        printf("Maalesef yanlis cevap\n");
        break;
    case 'D':
    case 'd': 
        printf("Tebrikler! 10 puan kazandiniz\n");
        puan+=10;
        break;

    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    

    dizi[i]=a;
    i=i+1;
    break;

case 2:

printf("%d. Soru-)",i+1);
    printf("Fatih Sultan Mehmet'in babasi kimdir?\n  A)Yavuz Sultan Selim\n B)2. Murat\n  CKanuni Sultan Suleyman\n D)Yildirim Beyazit\n");
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
   
case 3:

printf("%d. Soru-)",i+1);
    printf("Ilk modern olimpiyat hangi ulkede yapilmistir?\n A-)Fransa\n B-)Turkiye\n C-)Ispanya\n D-)Yunanistan\n ");
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
        printf("Maalesef yanlis cevap\n");
        break;
    case 'D':
    case 'd': 
        printf("Tebrikler! 10 puan kazandiniz\n");
        puan+=10;
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
   
case 4:
printf("%d. Soru-)",i+1);
    printf("Yuzolcumu en kucuk olan ulke hangisidir?\n A-)Vatikan\n B-)Faroe Adalari\n C-)Malta\n D-)Marshall Adalari\n ");
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
    case 'd':
        printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
   
case 5:
printf("%d. Soru-)",i+1);
    printf("Inci Kupeli Kiz eseri kime aittir?\n A-)Michelangelo\n B-)Pablo Picasso\n C)Johannes Vermeer\n D-)Sandro Botticelli\n ");
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
    case 'd':
        printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
    
case 6:
printf("%d. Soru-)",i+1);
    printf("En eski Turk destani hangisidir?\n A-)Yaratilis\n B-)su\n C-)Tureyis\n D-)Bozkurt\n ");
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
    case 'd':
        printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
   
case 7:
printf("%d. Soru-)",i+1);
    printf("Turkiye'nin, uretiminde dunya birincisi oldugu dort tarim urunu hangileridir?\n A-)Findik, kiraz, cay, kivi\n B-) Findik, incir, kayisi, kiraz\n C-)Findik, cay, elma, portakal\n D-)Findik, zeytin, kiraz, portakal\n ");
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
    case 'd':
        printf("Maalesef yanlis cevap\n");
        break;



    default:printf("Olmayan bir secenek sectiginiz icin puan kazanamadiniz.\n");
        break;
    }
    
    dizi[i]=a;
    i=i+1;
    break;
case 8:
printf("%d. Soru-)",i+1);
    printf("23 Nisan Ulusal Egemenlik ve cocuk Bayrami, ilk kez hangi yilda kutlanmistir?\n A-)1923\n B-)1929\n C-)1920\n D-)1926\n ");
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
case 9:
printf("%d. Soru-)",i+1);
    printf("Turkiye'nin uc ulkeye siniri olan tek ili hangisidir?\n A-)Van\n B-)Igdir\n C-)Agri\n D-)Hatay\n ");
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
    printf("Dunya'nin en yuksek rakimli yerlesim birimi hangisidir?\n A-)La Rinconada - Peru\n B-)El Alto - Bolivya\n C-)Shigatse - cin\n D-)Potosi - Bolivya\n ");
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

default:
    break;}
    
}
printf("Puaniniz = %d\n",puan);
    if(puan>=80){
        printf("Ilber ORTAYLI olmussun kaaarsim");
    }
    else if(puan >=70){
        printf("Celal SENGOR musun mubarek");
    }
    else if(puan >=50){
        printf("Alperenu BARAN");
    
    }
    else if(puan<50){
        printf("Tarihi tekrardan yaziyorsun ama boyle olmaz");
    }
    return puan;
}