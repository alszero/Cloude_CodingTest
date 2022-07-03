#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 빈칸채우기의 
// main에서 사용되는 solution 함수의 빈칸에 무엇이 들어갈지 곰곰히 생각해서 넣습니다.
// 어떠한 값을 매개변수로 전달 받아서 어떤식으로 사용 되는지
// 문제에서 말하고자 하는 부분이 빈칸에서 어떤 부분인지를 파악하셔야 합니다.
// 1부터 전달 받는 숫자까지 각 자리수에 하여 개수를 구하는 함수네요~
// 조금더 자세하게 예기하자면 20번째 줄에서 /= 10을 이용하여 자기자신의 1의자리를 삭제합니다.
// 그말은 1의 자리가 더이상의 의미가 없다는 뜻으로
// 위에서 1의자리가 3인지 6인지 9인지를 물어보게 되겠네요
int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) {
			if (current%10==3||current%10==6||current%10==9)
				count++;
			current /= 10;
		}
	}
	return count;
}
int main() {
    int number = 40;
    int ret = solution(number);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}