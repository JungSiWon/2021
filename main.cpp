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
		printf("���� �ҷ����� ����");
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
		printf("�˻��� ī�װ��� ���ÿ�\n 1:�̸�\t2:����\t3:�������\t4:��ȭ��ȣ\t5:������\t6:����\n");
		scanf("%d", &cate);

		switch (cate) {
		case 1:
			char name[20];
			printf("ã���ô� �̸��� �Է��ϼ��� : ");
			scanf("%s", &name);
			for (i = 0; i < 25;i++) {
				if (strcmp(a[i].name, name) == 0) {
					printf("%s %s %d %s %s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
				}
			}
			break;
		case 2:
			char gender[20];
			printf("ã���ô� ������ �Է��ϼ��� : ");
			scanf("%s", &gender);
			for (i = 0; i < 25;i++) {
				if (strcmp(a[i].gender, gender) == 0) {
					printf("%s %s %d %s %s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
				}
			}
			break;
		case 3:
			int birth;
			printf("ã���ô� ��������� �Է��ϼ��� : ");
			scanf("%d", &birth);
			for (i = 0; i < 25;i++) {
				if (a[i].birth == birth) {
					printf("%s %s %d %s %s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
				}
			}
			break;
		case 4:
			char phone[20];
			printf("ã���ô� ��ȭ��ȣ�� �Է��ϼ��� : ");
			scanf("%s", &phone);
			for (i = 0; i < 25;i++) {
				if (strcmp(a[i].phone, phone) == 0) {
					printf("%s %s %d %s %s\n", a[i].name, a[i].gender, a[i].birth, a[i].phone, a[i].company);
				}
			}
			break;
		case 5:
			char company[20];
			printf("ã���ô� �������� �Է��ϼ��� : ");
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