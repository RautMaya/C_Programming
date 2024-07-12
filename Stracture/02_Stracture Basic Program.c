#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

 struct Product
 {
     int PID;
     char PName[40];
     float PPrice;
     float SPrice;

 };
 int main()
 {
     struct Product Obj1,Obj2={15,"Book",150,160};

     Obj1.PID =15;
     strcpy(Obj1.PName,"Notebook");
     Obj1.PPrice =120;
     Obj1.SPrice=150;

     printf("\n Product Id are =%d",Obj1.PID);
     printf("\n Product  Name are =%s",Obj1.PName);
     printf("\n Product Purchase Price are =%0.2f",Obj1.PPrice);
     printf("\n Product Sales Price are =%0.2f",Obj1.SPrice);

     getch();
     fflush(stdin);


     printf("\n\n 2nd Product Details :");


     printf("\n\n Product Id are =%d",Obj2.PID);
     printf("\n Product  Name are =%s",Obj2.PName);
     printf("\n Product Purchase Price are =%0.2f",Obj2.PPrice);
     printf("\n Product Sales Price are =%0.2f",Obj2.SPrice);


     getch();
     return 0;
 }
