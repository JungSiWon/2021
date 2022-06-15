#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main(void)
{
	Student a[25] = {};
	int res;
	FILE* fp;
	int i = 0;
	int cate;

	fp = fopen("D:\\sample\\profile.txt", "r");
	if (fp == NULL)
	{
		printf("파일 불러오기 실패");
	}
	while (1)
	{
		res = fscanf(fp, "%s %s %d %s %s", &a[i].name, &a[i].gender, &a[i].birth, &a[i].phone, &a[i].company);//name, gender, &birth, phone, company);


		if (i == 25) {
			break;
		}
		//printf("%s%s%d%s%s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
		i++;
	}

	while (1) {
		printf("검색할 카테고리를 고르시오\n 1:이름\t2:성별\t3:생년월일\t4:전화번호\t5:희망기업\t6:종료\n");
		scanf("%d", &cate);

		switch (cate) {
		case 1:
			char name[20];
			printf("찾으시는 이름을 입력하세요 : ");
			scanf("%s", &name);
			for (i = 0; i < 25;i++) {
				if (strcmp(a[i].name, name) == 0) {
					printf("%s %s %d %s %s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
				}
			}
			break;
		case 2:
			char gender[20];
			printf("찾으시는 성별을 입력하세요 : ");
			scanf("%s", &gender);
			for (i = 0; i < 25;i++) {
				if (strcmp(a[i].gender, gender) == 0) {
					printf("%s %s %d %s %s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
				}
			}
			break;
		case 3:
			int birth;
			printf("찾으시는 생년월일을 입력하세요 : ");
			scanf("%d", &birth);
			for (i = 0; i < 25;i++) {
				if (a[i].birth == birth) {
					printf("%s %s %d %s %s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
				}
			}
			break;
		case 4:
			char phone[20];
			printf("찾으시는 전화번호를 입력하세요 : ");
			scanf("%s", &phone);
			for (i = 0; i < 25;i++) {
				if (strcmp(a[i].phone, phone) == 0) {
					printf("%s %s %d %s %s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
				}
			}
			break;
		case 5:
			char company[20];
			printf("찾으시는 희망기업을 입력하세요 : ");
			scanf("%s", &company);
			for (i = 0; i < 25;i++) {
				if (strcmp(a[i].company, company) == 0) {
					printf("%s %s %d %s %s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
				}
			}
			break;
		case 6:
			break;
		}
	}
}
