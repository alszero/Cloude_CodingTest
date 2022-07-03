#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 문제설명
//	369 게임은 여러 명이 같이하는 게임입니다. 게임의 규칙은 아래와 같습니다.
//	1부터 시작합니다.
//		- 한 사람씩 차례대로 숫자를 1씩 더해가며 말합니다.
//		- 말해야 하는 숫자에 3,6,9 중 하나라도 포함되어있다면 숫자를 말하는 대신 
//		  숫자에 포함된 3,6,9의 개수만큼 손뼉을 칩니다.
//	어떤 수 number가 매개변수로 주어질 때, 1부터 number까지 369게임을 올바르게 진행했을 
//	경우 박수를 총 몇 번 쳤는지를 return 하도록 solution 함수를 작성하려 합니다.

int solution(int number) {
	int count = 0; // 박수 친 횟수
	for (int i = 1; i <= number; i++) { // 1~number까지 반복
		int current = i; // 1의 자리가 3의 배수인지 구하기 위해 필요한 변수, for문을 돌 때마다 변수의 값이 바뀜
		while (current != 0) { // current가 0일 경우 반복문 탈출!
			if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) // current % 10이 3이거나 6이거나 9일 경우 count의 값을 1 증가함.
				count++;
			current /= 10;	//  if문을 수행하고 current를 10으로 나누었을 때 (10의 자리가 1의 자리가 됨) 0이 아니면 while문 수행함.
		}
	}
	return count;
}

int main() {
	int number = 40;
	int ret = solution(number);

	printf("solution 함수의 반환 값은 %d 입니다\n", ret);
}