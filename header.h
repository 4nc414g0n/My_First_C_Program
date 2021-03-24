#pragma once
#define _CRT_SECURE_NO_DEPRECATE
#include<Windows.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#define DATA_MAX 100

typedef struct StuInfo {
	int ID;
	char name[40];
	int C_score;
	int EN_score;
	int MATH_score;
	int TOTAL_score;
}Info;

typedef struct syste {
	struct StuInfo data[DATA_MAX];//������ഢ�� DATA_MAX ���ṹ�� StuInfo
	int size;
}syste;//system�����ú�����ͻ����syste

void Welcome();//��ӭ����
void Account();//ѡ��ϵͳ
void sys_Admin();//����Աϵͳ(¼���ѯ�༭ͳ����ʾ�˳�)
void sys_normal();//��ͨϵͳ(��ѯ)
void subject();//��Ŀ
void leval();//�ֶ�

void Input_operation(struct syste*ps);//ѧ���ɼ�¼�����

void Query();//ѧ���ɼ���ѯ
void name_Query(struct syste*ps);//���ֲ�ѯ
void ID_Query(struct syste*ps);//ID��ѯ

void Edit();//ѧ���ɼ���Ϣ�༭
void Edit_Del(struct syste*ps);//ɾ
void Edit_Change(struct syste*ps);//��

void Statistic();//ѧ���ɼ���Ϣͳ��
 //void Statistic_choose();//ѧ���ɼ���Ϣͳ��-ѡ��
void Statistic_C_score(struct syste*ps);//C
void Statistic_EN_score(struct syste*ps);//EN
void Statistic_MATH_score(struct syste*ps);//MATH
void Statistic_TOTAL_score(struct syste*ps);//TOTAL

void Output();//ѧ���ɼ���Ϣ��ʾ
void Output_C_c(struct syste*ps);
void Output_C_b(struct syste*ps);
void Output_C_a(struct syste*ps);
void Output_EN_c(struct syste*ps);
void Output_EN_b(struct syste*ps);
void Output_EN_a(struct syste*ps);
void Output_MATH_c(struct syste*ps);
void Output_MATH_b(struct syste*ps);
void Output_MATH_a(struct syste*ps);
void Output_TOTAL(struct syste*ps);

void readdata(struct syste*ps);//ֻ��
void savedata(struct syste*ps);//д��

