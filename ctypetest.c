/*
해당 문제 솔루션
1. 함수 정의 : char 타입의 매개변수를 받는 함수를 정의해야 합니다. 이 함수가 입력된 문자의 종류를 판별하는 역할을 합니다.
2. 문자 종류 판별 : C언어에서는 <stype.h> 헤더 파일에 있는 표준 라이브러리 함수들을 사용하면 문자 종류를 더 쉽게 판별 할 수 있습니다.
 예를 들어 islower(), isupper(), isdigit() 와 같은 함수들이 있어요. 이 함수들을 사용하여 if, else if 문으로 조건을 체크합니다.
3. 결과 출력 : 각 조건에 맞는 경우, 해당 문자 종류를 화면에 출력하도록 printf() 함수를 사용합니다.
4 입력 및 함수 호출 : main 함수에서 사용자로부터 문자를 입력받고, 그 문자를 위에서 정의한 함수에 전달하여 실행합니다. 
*/

#include<stdio.h>
#include<ctype.h>	// islower, isupper, isdigit 함수를 사용하기 위해 포함

//입력된 키를 분류하는 함수
void classify_key(char key){
	if(islower(key)){
		printf(">%c : 소문자\n", key);
	}else if(isupper(key)){
		printf(">%c : 대문자\n", key);
	}else if(isdigit(key)){
		printf(">%c : 숫자\n", key);
	}else{
		printf(">%c : 특수문자\n", key);
	} 
} 

int main(){
	char user_input;
	int i;
	for(i=0; i<4; i++){
		printf("키(문자 한 개)를 입력하세요\n"); // 줄바꿈을 추가하여 출력을 보기 좋게 함
		scanf(" %c",&user_input); // <-- 여기에 공백을 추가했습니다!
		
		//함수 호출
		classify_key(user_input);
	}
	return 0;
} 

/*
	islower(key) : <stype.h> 헤더에 있는 함수로, key 가 소문자이면 참(0이 아닌 값)을 반환하고, 아니면 거짓(0)을 반환
	isupper(key) : key가 대문자이면 참을 반환합니다.
	isdigit(key) : key가 숫자(0~9) 이면 참을 반환합니다. 
*/
