#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ��������
//	369 ������ ���� ���� �����ϴ� �����Դϴ�. ������ ��Ģ�� �Ʒ��� �����ϴ�.
//	1���� �����մϴ�.
//		- �� ����� ���ʴ�� ���ڸ� 1�� ���ذ��� ���մϴ�.
//		- ���ؾ� �ϴ� ���ڿ� 3,6,9 �� �ϳ��� ���ԵǾ��ִٸ� ���ڸ� ���ϴ� ��� 
//		  ���ڿ� ���Ե� 3,6,9�� ������ŭ �ջ��� Ĩ�ϴ�.
//	� �� number�� �Ű������� �־��� ��, 1���� number���� 369������ �ùٸ��� �������� 
//	��� �ڼ��� �� �� �� �ƴ����� return �ϵ��� solution �Լ��� �ۼ��Ϸ� �մϴ�.

int solution(int number) {
	int count = 0; // �ڼ� ģ Ƚ��
	for (int i = 1; i <= number; i++) { // 1~number���� �ݺ�
		int current = i; // 1�� �ڸ��� 3�� ������� ���ϱ� ���� �ʿ��� ����, for���� �� ������ ������ ���� �ٲ�
		while (current != 0) { // current�� 0�� ��� �ݺ��� Ż��!
			if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) // current % 10�� 3�̰ų� 6�̰ų� 9�� ��� count�� ���� 1 ������.
				count++;
			current /= 10;	//  if���� �����ϰ� current�� 10���� �������� �� (10�� �ڸ��� 1�� �ڸ��� ��) 0�� �ƴϸ� while�� ������.
		}
	}
	return count;
}

int main() {
	int number = 40;
	int ret = solution(number);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�\n", ret);
}