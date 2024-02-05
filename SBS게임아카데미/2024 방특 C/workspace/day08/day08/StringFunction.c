#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	// 문자열의 끝은 NULL로 판단하기 때문에 NULL 앞까지의 길이를 잰다.
	char c1[] = "Hello";
	char c2[10] = "hello";
	char c3[20] = "hello world";
	char* c4 = "hello";
	printf("c1 = %d, c2 = %d, c3 = %d, c4 = %d\n", strlen(c1), strlen(c2), strlen(c3), strlen(c4));
	c3[5] = NULL;
	printf("c3 = %d %c %d\n", strlen(c3), c3[6], c3[11]); //%d로 문자열 마지막에 0(NULL)이 들어있는걸 확인

	char c5[20] = "1234567890";
	char c6[20];
	char c7[10];
	char c8[20];
	char c9[20];

	strcpy(c6, c5); // 앞의 요소(dest)에 뒤의 요소(src)를 복사
	printf("%s %s\n", c5, c6);

	c5[strlen(c5)] = 100; // 보안 취약점
	strcpy(c8, c5);
	printf("%s %s\n", c5, c8);

	strncpy(c7, c5, 9); // 10으로 설정시 보안 취약점
	c7[9] = NULL;
	printf("%s %s\n", c7, c5);

	strcpy(c9, "Hello world"); // strcpy로 문자열을 직접 써서 입력할 수도 있다.
	printf("%s\n", c9); 

	char s1[20] = "First";
	char s2[20] = "Second";

	strcat(s1, s2);
	printf("%s %s\n", s1, s2);

	char s3[10] = "First";
	char s4[10] = "Second";

	// strcat(s3, s4); // 보안 에러 발생(실행은 됨), 보안 취약점
	// printf("%s %s\n", s3, s4); 

	char s5[10] = "First";
	char s6[10] = "Second";
	strncat(s5, s6,4);
	printf("%s %s\n", s5, s6);

	
	char t1[10] = "apple";
	char t2[10] = "apple";
	char t3[10] = "grape";
	char t4[10] = "arcade";
	char t5[10] = "aaaaa";

	char t6[10] = "서울";
	char t7[10] = "서천";

	printf("t1 == t2 : %d\n", strcmp(t1, t2)); // 0   strcmp는 같으면 0나옴
	printf("t1 == t3 : %d\n", strcmp(t1, t3)); // -6  원래는 아스키 코드 수 차이만큼 나와야 하는데
	printf("t1 == t4 : %d\n", strcmp(t1, t4)); // -2  vs에서는 그냥 -1, 1, 0이 나온다
	printf("t1 == t5 : %d\n", strcmp(t1, t5)); // 15

	printf("t6 == t7 : %d\n", strcmp(t6, t7)); // -24 
	// 한글의 경우 유니코드를 쓰는데 "울" -> c6b8, "천" -> cc9c 오버플로우가 난듯

	char u1[10] = "apple";
	char u2[10] = "arcade";

	printf("u1 == u2 : %d\n", strncmp(u1, u2, 1)); // 0 
	printf("u1 == u2 : %d\n", strncmp(u1, u2, 2)); // -1
	printf("t6 == t7 : %d\n", strncmp(t6, t7, 1)); // 0
	printf("t6 == t7 : %d\n", strncmp(t6, t7, 2)); // 0  '서울'과 '서천'의 "ㅅ ㅓ" 두개는 같으니까 
	printf("t6 == t7 : %d\n", strncmp(t6, t7, 3)); // -1

	char b1[10] = "10";
	char b2[10] = "-10";

	char b3[10] = "3.14";
	char b4[10] = "-3.14";

	char b5[20] = "3000000000";
	char b6[20] = "-3000000000";

	char b7[22] = "10000000000000000000"; // 1000경, 0이 19개
	char b8[22] = "-10000000000000000000";

	printf("atoi(b1) = %d\n", atoi(b1));
	printf("atoi(b2) = %d\n", atoi(b2));

	printf("atof(b3) = %f\n", atof(b3));
	printf("atoi(b4) = %f\n", atof(b4));

	printf("atoll(b5) = %lld\n", atoll(b5));
	printf("atoll(b6) = %lld\n", atoll(b6));

	printf("atoi(b5) = %d\n", atoi(b5)); // 정수의 최댓값이 나옴
	printf("atoi(b6) = %d\n", atoi(b6)); // 정수의 최솟값이 나옴

	printf("atoll(b7) = %lld\n", atoll(b7));
	printf("atoll(b8) = %lld\n", atoll(b8));

	return 0;
}