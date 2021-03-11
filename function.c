#include <stdio.h>
////////////////
//function//////
////////////////
int bigNum(int, int);// 함수의 원형 선언
void local(void);
//global variable
//프로그램의 어디에서나 접근가능
//메모리상의 데이터(data)영역에 저장
//직접 초기화하지 않아도 0으로 자동 초기화
void gLocal(void);
int gVar;

//static variable
//local variable+global variable
//함수 내에서 선언도니 정적 변수는 전역 변수처럼 단 한번만 초기화되며, 프로그램이 종료되어야 메모리상에서 사라진다.
//선언된 정적변수는 지역 변수처럼 해당 함수 내에서만 접근 가능
void sLocal(void);
void staticVar(void);


//단일 패스(one pass) 컴파일방식
//차례대로 한 번에 컴파일 하는 방식

//다중 패스(multi-pass)방식
//하드웨어의 발달로 컴파일러에 따라 여러번에 걸쳐 컴파일


int main(void){
  int result;
  
  result = bigNum(3,5);//함수의 호출
  printf("두 수 중 더 큰수는 %d입니다.\n", result);
  result = bigNum(3,1);//함수의 호출
  printf("두 수 중 더 큰수는 %d입니다.\n", result);
  result = bigNum(7,5);//함수의 호출
  printf("두 수 중 더 큰수는 %d입니다.\n", result);


//////////////////////
//variable scope//////
//////////////////////


//local variable
//지역변수는 메모리상의 스택(stack)영역에 저장, 초기화하지 않으면 의미없는 값으로 초기화
  int i = 5;
  int var = 10;
  printf("main()함수 내의 지역 변수 var의 값은 %d입니다.\n", var);

  if(i<10){
    local();
  
    int var = 30;
     printf("if문 내의 지역 변수 var의 값은 %d입니다.\n", var);
  }

  printf("현재 지역 변수 var의 값은 %d입니다.\n", var);

//global variable
  printf("전역변수 gVar의 초깃값은 %d입니다.\n", gVar);
  int gVar = 10;//지역 변수 선언
  //블록 내에서 선언된 지역 변수는 같은 이름의 전역 변수를 덮어쓴다. 
  if (i < 10){
  gLocal();
  printf("현재 변수 gVar 값은 %d입니다.\n", gVar); // 지역 변수에 접근

    } 
  printf("더 이상 main() 함수에서는 전역 변수 gVar에 접근할 수가 없습니다.\n");
  
  //여러 개의 파일로 구성된 프로그램에서 외부 파일의 전역 변수를 사용하기 위해서는 extern 키워드를 사용해 다시 선언해줘야한다. 
  //extern 키워드--> 분할 컴파일



//static variable
for(i=0; i<3; i++){
  sLocal();
  staticVar();
}

//register variable
//지역변수를 선언할 때 register키워드를 붙여 선언한 변수
//CPU의 레지스터메모리에 저장되어 빠르게 접근 가능


  return 0;
}
int bigNum(int num01, int num02){//함수의 정의
  if(num01>=num02){
    return num01;
  }else{
    return num02;
  }
}

void local(void){
  int var = 20;
  printf("local()함수 내의 지역 변수 var의 값은 %d입니다.\n", var);
}

void gLocal(void){
  int gVar = 20;//전역 변수의 값 변경
  printf("gLocal()함수 내에서 접근한 전역 변수 gVar의 값은 %d입니다.\n", gVar);
}

void sLocal(void){
  int count=1;//지역 변수
  printf("sLocal()함수가 %d번째 호출되었습니다.\n", count);
  count++;
}

void staticVar(void){
  static int static_count=1;//정적 변수
  printf("staticVar()함수가 %d번째 호출되었습니다.\n", static_count);
  static_count++;
}