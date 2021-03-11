#include <stdio.h>
#define TEXT "Welcome to C Programming!!"
/* 여기서부터 main() 함수가 시작됨.

   작성자 : 최혜지 */
int main(void) {
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
  return 0;//main()함수의 모든 명령문을 수행한 후에는 0을 반환함.
}