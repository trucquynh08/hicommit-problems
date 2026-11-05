#include <stdio.h>

int main() {
  float dtb,drl;
  int hocluc=0,renluyen=0;
  scanf("%f",&dtb);
  scanf("%f",&drl);

  


  
  if(dtb>=9.0){
    hocluc=1;
  }
  else if(8.0<=dtb<9.0){
    hocluc=2;
  }
  else if(7.0<=dtb<8.0){
    hocluc=3;
  }
  else{
    hocluc=0;
  }

  
  if(drl>=90){
    renluyen=1;
  }
  else if(80<=drl<90){
    renluyen=2;
  }
  else if(70<=drl<80){
    renluyen=3;
  }
  else{
    renluyen=0;
  }


  if(hocluc==1&&renluyen==1){
    printf("HOC_BONG_XUAT_SAC");
  }
  else if(hocluc==2){
    if(renluyen==1||renluyen==2){
      printf("HOC_BONG_GIOI");
    }
    else if(renluyen==3){
      printf("HOC_BONG_KHA");
    }
  }

  
  else if(hocluc==1){
    if(renluyen==2){
      printf("HOC_BONG_GIOI");
    }
    else if(renluyen==3){
        printf("HOC_BONG_KHA");
    }
  }
  
  else if(hocluc==3){
    if(renluyen==1||renluyen==2||renluyen==3){
      printf("HOC_BONG_KHA");
    }
  }
  

  else{
    printf("KHONG_DAT");
  }

  return 0;
}