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
	struct StuInfo data[DATA_MAX];//数组最多储存 DATA_MAX 个结构体 StuInfo
	int size;
}syste;//system与内置函数冲突故用syste

void Welcome();//欢迎界面
void Account();//选择系统
void sys_Admin();//管理员系统(录入查询编辑统计显示退出)
void sys_normal();//普通系统(查询)
void subject();//科目
void leval();//分段

void Input_operation(struct syste*ps);//学生成绩录入操作

void Query();//学生成绩查询
void name_Query(struct syste*ps);//名字查询
void ID_Query(struct syste*ps);//ID查询

void Edit();//学生成绩信息编辑
void Edit_Del(struct syste*ps);//删
void Edit_Change(struct syste*ps);//改

void Statistic();//学生成绩信息统计
 //void Statistic_choose();//学生成绩信息统计-选择
void Statistic_C_score(struct syste*ps);//C
void Statistic_EN_score(struct syste*ps);//EN
void Statistic_MATH_score(struct syste*ps);//MATH
void Statistic_TOTAL_score(struct syste*ps);//TOTAL

void Output();//学生成绩信息显示
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

void readdata(struct syste*ps);//只读
void savedata(struct syste*ps);//写入

