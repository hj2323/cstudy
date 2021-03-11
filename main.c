#include <stdio.h>
#define TEXT "Welcome to C Programming!!"
/* 여기서부터 main() 함수가 시작됨.

   작성자 : 최혜지 */
int main1(void) {
  //C언어 표준 입출력 함수
  //printf()
  printf(TEXT);//f:formatted의 약자, 서식화된 출력을 지원한다는 의미
  printf("printf()함수는 서식 지정자를 통해 출력할 데이터의 서식을 지정할 수 있다!\n");
  printf("변수에 저장된 숫자는 %d입니다.", 10);
  

//기본타입
//정수형
 int num = 2147483647;
  printf("변수 num에 저장된 값은 %d입니다.\n", num);

//실수형
  float num01 = 3.1415926535897932;
  //float 타입의 유효 자릿수는 소수점 6자리
  printf("변수 pi에 저장된 값은 %.20f입니다.\n", num01);
  double num02 = 3.1415926535897932;
  //double타입의 유효 자릿수는 소수점 16자리
  printf("변수 pi에 저장된 값은 %.20f입니다.\n", num02);
//문자형
char ch='a';
printf("변수 ch에 저장된 값은 %c입니다.\n", ch);
printf("변수 ch에 저장된 값은 %d입니다.\n", ch); //문자가 c내부적으로는 아스키 코드에 해당하는 숫자로 저장되어있음


//type conversion
//implicit type conversion
//대입 연산
ch = 200;
num01 = 3.14;
num02 = 5;

printf("ch에 저장된 값은 %d입니다.\n", ch);
printf("num01에 저장된 값은 %d입니다.\n", num01);
printf("num02에 저장된 값은 %f입니다.\n", num02);
//산술 연산
double result01 = 5+3.14;
double result02 = 5.0f + 3.14;

printf("result01에 저장된 값은 %f입니다.\n", result01);
printf("result02에 저장된 값은 %f입니다.\n", result02);

//explicit type conversion
//using type cast

int num03 = 1;
int num04 = 4;

result01 = num03 / num04;
result02 = (double)num03/num04;

printf("result01에 저장된 값은 %f입니다.\n", result01);
printf("result02에 저장된 값은 %f입니다.\n", result02);


////////////////////////////////
//control flow statements///////
////////////////////////////////
//conditional statements
//if/else

//switch 문
//각 case절 및 default 절은 반드시 break키워드를 포함하고 있어야 합니다. 
//break키워드가 없으면, 조건 값에 해당하는 case절 뿐만 아니라 그 이후에 등장하는 모든 case절과 default절이 전부 실행 됨
int n = 2;
switch(n){
  case 1:
    printf("입력하신 수는 1입니다.\n");
    break;
  case 2:
    printf("입력하신 수는 2입니다.\n");
    break;
  case 3:
    printf("입력하신 수는 3입니다.\n");
    break;
  case 4:
    printf("입력하신 수는 4입니다.\n");
    break;
  case 5:
    printf("입력하신 수는 5입니다.\n");
    break;
  default:
    printf("1부터 5까지의 수만 입력해 주세요!");
    break;
}


//switch문의 조건으로 여러개의 case절을 사용하여 여러 개의 조건을 한번에 검사할 수 있다. 
ch = 'a';
switch(ch){
  case 'a':
  case 'A':
    printf("이 학생의 학점은 A입니다.\n");
    break;
  case 'b':
  case 'B':
    printf("이 학생의 학점은 B입니다.\n");
    break;
  case 'c':
  case 'C':
    printf("이 학생의 학점은 C입니다.\n");
    break;
  case 'd':
  case 'D':
    printf("이 학생의 학점은 D입니다.\n");
    break;
  case 'f':
  case 'F':
    printf("이 학생의 학점은 F입니다.\n");
    break;
  default:
    printf("학점을 정확히 입력해 주세요!(A, B, C, D, F");
    break;
}

//iteration statements
//for
int i;
num=7;

for(i=0;i<num;i++){
  printf("for문이 %d번째 반복 수행중입니다.\n", i+1);
}
printf("for문이 종료된 후 변수 i의 값은 %d입니다.\n", i);

//구구단
printf("구구단 5단까지 각 단의 수만큼만 출력\n");
int j;
for(i=2; i<=5; i++){
  for (j=1; j<=9;j++){
    printf("%d*%d=%d\n", i, j, i*j);
    if(i==j){
      printf("\n");
      break;
    }
  }
}






  return 0;//main()함수의 모든 명령문을 수행한 후에는 0을 반환함.
}