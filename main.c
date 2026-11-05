#include <stdio.h>

int main() {
  float dtb,drl;
  char hocluc,renluyen;
  char Xuat_sac,Gioi,Kha,Khong_dat,Tot;
  scanf("%f",&dtb);
  scanf("%f",&drl);

  


  
  if(dtb>=9.0){
    hocluc=Xuat_sac;
  }
  else if(8.0<=dtb<9.0){
    hocluc=Gioi;
  }
  else if(7.0<=dtb<8.0){
    hocluc=Kha;
  }
  else{
    hocluc=Khong_dat;
  }

  
  if(drl>=90){
    renluyen=Xuat_sac;
  }
  else if(80<=drl<90){
    renluyen=Tot;
  }
  else if(70<=drl<80){
    renluyen=Kha;
  }
  else{
    renluyen=Khong_dat;
  }


  if(hocluc==Xuat_sac&&renluyen==Xuat_sac){
    printf("HOC_BONG_XUAT_SAC");
  }
  if(hocluc=Gioi){
    if(renluyen==Xuat_sac||renluyen==Tot){
      printf("HOC_BONG_GIOI");
    }
    if(renluyen==Kha){
      printf("HOC_BONG_KHA");
    }
  }

  
  if(hocluc==Xuat_sac){
    if(renluyen==Tot){
      printf("HOC_BONG_GIOI");
    }
    if(renluyen==Kha){
      printf("HOC_BONG_KHA");
    }
  }

  
  if(hocluc==Kha){
    printf("HOC_BONG_KHA");
  }
  


  return 0;
}