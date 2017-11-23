// 2 ^ n - 1 중에 랜덤숫자를 맞추는 프로그램
// 원리 : 2 ^ n - 1의 모든 숫자는 무조건 (2 ^ n - 1) / 2 + 1을 루트로 하는 
//        이진 탐색 트리에 들어가 있다.
#include <stdio.h>
#include <time.h>									// time 함수를 위한 라이브러리
#include <math.h>									// pow 함수를 위한 라이브러리
#include <stdlib.h>									// rand와 srand의 라이브러리

int main()
{
	int o, b, n, c, i = 1;							// o : n을 잠시 받을 변수, b : player의 변수, n : 2^n에서 n, c : 2^n+1 사이의 랜덤수, i : 계산 회수

	srand((unsigned)time(NULL));					// 시간을 시드로 줘 계속해서 랜덤한 숫자가 나오게 한다.
	printf("insert number : ");						// "insert number : "출력
	scanf("%d", &n);								// 2^n-1에서 n을 입력 받는다.
	b = pow(2, n) - 1;								// b에다 임시로 2^n-1을 저장
	c = rand() % n + 1;								// 나머지연산자를 사용, 1~15의 난수 발생, 저장
	o = n;											// o에다가 n을 임시로 저장

	printf("2^n - 1: %d\n", b);						// 화면에 2^n-1이 얼만지 표시. 

	b = b / 2 + 1;									// b에 b/2+1을 저장 트리의 루트를 정한다.

	while(1)										// 반복문
	{
		printf("%d번째 계산\n", i);					// 몇번째 계산인지 출력

		printf("player는 %d를 입력합니다.\n", b);	// player가 입력한 숫자 출력
		
		if(b == c){									// b와 c가 같으면 정답처리후 break
			printf("정답\n");						// 정답 출력
			break;									// break;
		}
		else if(i == n){							// i가 n가 정답인지 체크하고도 같으면 회수초과 처리
			printf("회수 초과\n");					// 회수 초과 출력		
			break;									// break;
		}
		else if(c > b){								// c가 크면
			printf("컴퓨터가 큽니다\n");			// 컴퓨터가 크다고 출력 후
			b = b + pow(2, o - 2);					// b+2^(o-2)를 계산하여 트리에서 루트보다 작은 쪽을 탐색
		}	
		else if(b > c){								// c가 작으면
			printf("컴퓨터가 작습니다.\n");			// 컴퓨터가 작다고 출력 후
			b = b - pow(2, o - 2);					// b-2^(o-2)를 계산하여 트리에서 루트보다 큰 쪽을 탐색
		}
		i++;										// 회수 한개씩 증가.
		o--;										// 지수는 한개씩 감소
		if(o < 0)									// 지수가 0보다 작아질 경우
		{
			printf("error!!!!!!!\n");				// error출력
			return 0;								// 프로그램 종료
		}
	}
	_getch();
	return 0;										// 프로그램 종료
}


		

		
	
