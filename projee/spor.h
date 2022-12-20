int spor(){

int a,i=0;
int dizi[10]={0,0,0,0,0,0,0,0,0,0};
char cevap=0;
int puan=0;

printf("*******Spor Testi*******\n");


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
    printf("Bir maraton ne kadar surer?\n A-)20.000\n B-)35.200\n C-)42.195\n D-)44.560\n ");
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
    printf("2018 Dunya Kupasi'ni hangi ulke kazandi?\n A-)Almanya\n B-)Ingiltere\n C-)Arjantin\n D-)Fransa\n ");
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
    printf("Hangi sporda touchdown yapilir?\n A-)Amerikan Futbolu\n B-)Boks\n C-)Gures\n D-)Muay Thai\n ");
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
    printf("Muhammed Ali'nin gercek adi nedir?\n A-)Austin Brendon\n B-)Arthur Foreman\n C-)Cassius Kili\n D-)Andrew Connell\n ");
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
    printf("Michael Jordan kariyerinin coğunu hangi takimda forma giyerek gecirdi?\n A-)Chicago Bulls\n B-)Lakers\n C-)Milawaukee Bucks\n D-)Atlanta Hawks\n ");
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
    printf("Micheal Phelps'in kac altin madalyasi vardir?\n A-)21\n B-)23\n C-)25\n D-)27\n ");
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
    printf("2012 yaz olimpiyatlari nerede yapildi?\n A-)Istanbul\n B-)Barselona\n C-)Rio\n D-)Londra\n ");
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
    printf("Basketbol takiminda oyuncularin forma numarasi hangi sayiyla baslar?\n A-)1\n B-)2\n C-)3\n D-)4\n ");
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
case 9:
printf("%d. Soru-)",i+1);
    printf("2022-2023 Turkiye futbol sezonunun sampiyonu kimdir?\n A-)Besiktas\n B-)Galatasaray\n C-)Fenerbahce\n D-)MKE Ankaragucu\n ");
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
    printf("Dunya kupasinda en fazla sampiyonluk yasayan futbolcu kimdir?\n A-)Maradona\n B-)Ronaldinho\n C-)Pele\n D-)Mbappe\n ");
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
printf("Puaniniz = %d\n",puan);
    if(puan>=80){
        printf("Fatih TERIM ile yarisirsin");
    }
    else if(puan >=70){
        printf("Erbatur ERGENEKON musun birader");
    }
    else if(puan >=50){
        printf("Ahmet CAKAR gibisin helal");
    
    }
    else if(puan<50){
        printf("Maalesef basarisiz oldunuz");
    }
    return puan;
}