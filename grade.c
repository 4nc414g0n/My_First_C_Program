#include"header.h"
int main()
{
	struct syste sys;
	memset(sys.data, 0, sizeof(sys.data));//结构体内存初始化
	sys.size = 0;//初始化
	readdata(&sys);
	Welcome();
	Account();
	int choice, passWord1, passWord2;
	printf("请选择：");
	scanf("%d", &choice);
	while (choice)
	{
		//管理员部分
		if (choice == 1)
		{
			while (1)
			{
				printf("输入管理员密码：");
				scanf("%d", &passWord1);
				if (passWord1 == 42) 
				{
					sys_Admin();
					int choice1;
					printf("请选择：");
					scanf("%d", &choice1);
					while (choice1)
					{	//录入
						if (choice1 == 1) {
							system("cls");
							Input_operation(&sys);
							sys_Admin();
						}
						//查询
						else if (choice1 == 2) {
							Query();
							printf("请选择：");
							int choice1_2=1;
							scanf("%d", &choice1-2);
							while (choice1_2)
							{
								if (choice1_2 == 1) //ID查询
								{
									ID_Query(&sys);
									Query();
								}
								else if (choice1_2 == 2)//名字查询
								{
									name_Query(&sys);
									Query();
								}
								printf("请输入（1,2或0）\n");
								printf("请选择：");
								scanf("%d", &choice1_2);
							}
							sys_Admin();
						}
						//编辑
						else if (choice1 == 3) {
							Edit();
							int choice1_3;
							printf("请输入（1，2或0）：");
							scanf("%d", &choice1_3);
							while (choice1_3)
							{
								if (choice1_3 == 1)//删
								{
									Edit_Del(&sys);
									Edit();
								}
								else if (choice1_3 == 2)//改
								{
									Edit_Change(&sys);
									Edit();
								}
								printf("请输入（1，2或0）：");
								scanf("%d", &choice1_3);
							}

						}
						//统计
						else if (choice1 == 4) 
						{
							Statistic();
							int choice1_4;
							printf("请输入（1,2,3,4或0）：");
							scanf("%d", &choice1_4);
							while (choice1_4)
							{
								if (choice1_4 == 1)//C语言统计
								{
									Statistic_C_score(&sys);
									Statistic();
								}
								else if (choice1_4 == 2)//英语统计
								{
									Statistic_EN_score(&sys);
									Statistic();
								}
								else if (choice1_4 == 3)//数学统计
								{
									Statistic_MATH_score(&sys);
									Statistic();
								}
								else if (choice1_4 == 4)//总分统计
								{
									Statistic_TOTAL_score(&sys);
									Statistic();
								}
								printf("请输入（1，2，3，4或0）：");
								scanf("%d", &choice1_4);
							}
						}
						//显示
						else if (choice1 == 5)
						{
							Output();
							printf("@@@<提示：选择科目可查看单科成绩分段>@@@\n");

							int choice1_5;
							printf("请输入（1,2,3,4或0）：");
							scanf("%d", &choice1_5);
							while (choice1_5)
							{	
								//若用户选择了“学生成绩信息显示”菜单，则将学生全部信息显示在屏幕上，选做：可进入二级菜单，选择“全部显示”、“显示60分以下”、显示“60~79”……，可自行添加显示菜单。
								if (choice1_5 == 1)//C语言（分段显示）
								{
									leval();
									int choice1_5_1;
									printf("请输入（1,2,3或0）：");
									scanf("%d", &choice1_5_1);
									while (choice1_5_1)
									{
										if (choice1_5_1 == 1)//60分以下
										{
											Output_C_c(&sys);
											leval();
										}
										else if (choice1_5_1 == 2)//60-79
										{
											Output_C_b(&sys);
											leval();
										}
										else if (choice1_5_1 == 3)//80及以上
										{
											Output_C_a(&sys);
											leval();
										}
										printf("请输入（1,2,3或0）：");
										scanf("%d", &choice1_5_1);
									}
									Output();
								}
								else if (choice1_5 == 2)//英语（分段显示）
								{
									leval();
									int choice1_5_2;
									printf("请输入（1,2,3或0）：");
									scanf("%d", &choice1_5_2);
									while (choice1_5_2)
									{
										if (choice1_5_2 == 1)//60分以下
										{
											Output_EN_c(&sys);
											leval();
										}
										else if (choice1_5_2 == 2)//60-79
										{
											Output_EN_b(&sys);
											leval();;
										}
										else if (choice1_5_2 == 3)//80及以上
										{
											Output_EN_a(&sys);
											leval();
										}
										printf("请输入（1,2,3或0）：");
										scanf("%d", &choice1_5_2);
									}
									Output();
								}
								else if (choice1_5 == 3)//数学（分段显示）
								{
									leval();
									int choice1_5_3;
									printf("请输入（1,2,3或0）：");
									scanf("%d", &choice1_5_3);
									while (choice1_5_3)
									{
										if (choice1_5_3 == 1)//60分以下
										{
											Output_MATH_c(&sys);
											leval();
										}
										else if (choice1_5_3 == 2)//60-79
										{
											Output_MATH_b(&sys);
											leval();;
										}
										else if (choice1_5_3 == 3)//80及以上
										{
											Output_MATH_a(&sys);
											leval();
										}
										printf("请输入（1,2,3或0）：");
										scanf("%d", &choice1_5_3);
									}
									Output();
								}
								else if (choice1_5 == 4)//所有成绩（不分段）
								{
									Output_TOTAL(&sys);
									Output();
								}
								printf("请输入（1，2，3，4或0）：");
								scanf("%d", &choice1_5);
							}
						}

						sys_Admin();
						printf("请输入（1,2,3,4,5或0）\n");
						printf("请选择：");
						scanf("%d", &choice1);
					}
					break;
				}
				else {
					printf("Error密码错误\n");
				}
			}
			//break;
		}
		//普通部分
		else if (choice == 2) {
			while (1)
			{
				printf("输入普通密码：");
				scanf("%d", &passWord2);
				if (passWord2 == 43)
				{
					sys_normal();
					int choice2_1;
					printf("请选择：");
					scanf("%d", &choice2_1);
					while (choice2_1)
					{	//录入
						if (choice2_1 == 1)
						{
							Query();
							printf("请选择：");
							int choice1_2_1 = 1;
							scanf("%d", &choice1_2_1);
							while (choice1_2_1)
							{
								if (choice1_2_1 == 1) //ID查询
								{
									ID_Query(&sys);
									Query();
								}
								else if (choice1_2_1 == 2)//名字查询
								{
									name_Query(&sys);
									Query();
								}
								printf("请输入（1,2或0）\n");
								printf("请选择：");
								scanf("%d", &choice1_2_1);
							}
							sys_normal();
						}
					}
					goto flag4;
				}
				else
				{
					printf("Error密码错误\n");
				}
			}
			flag4:printf("\n");
			//break;
		}
		system("cls");
		Account();
		printf("请输入（1，2或0）\n");
		printf("请选择：");
		scanf("%d", &choice);
	}
	savedata(&sys);//选 0 退出自动保存在本目录下
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Welcome()//欢迎界面
{
	//system("title 程序设计课程设计");
	system("color F2");
	printf("*****************************************\n");
	printf("************程序设计课程设计\n");
	printf("************学生成绩管理系统\n");
	printf("*****************************************\n");
	printf("程序设计：新工科产业学院\n");
	printf("专业：物联网工程\n");
	printf("班级：207\n");
	printf("学号：202012902742\n");
	printf("姓名：钟传恩\n");
	printf("2021年3月21日\n");

}
void Account()
{
	printf("--------------------------------------\n");
	printf("*****选择以管理员或普通用户登录\n");
	printf("*****1:管理员(录入查询编辑统计显示)\n");
	printf("*****2:普通用户(查询)\n");
	printf("*****0:退出\n");
	printf("*****请选择(1、2或0)\n");
	printf("*****管理密码42，普通密码43\n");
	printf("---------------------------------------\n");
}
void sys_Admin()//管理员(录入查询编辑统计显示退出)
{
	system("cls");
	system("color F4");
	printf("---------------------------------------\n");
	printf("*****欢迎使用管理员系统，请选择菜单：\n");
	printf("*****1:学生成绩信息录入\n");
	printf("*****2:学生成绩信息查询\n");
	printf("*****3:学生成绩信息编辑\n");
	printf("*****4:学生成绩信息统计\n");
	printf("*****5:学生成绩信息显示\n");
	printf("*****0.返回上一级\n");
	printf("*****请选择(1、2、3、4、5或0)\n");
	printf("---------------------------------------\n");
}
void sys_normal()//普通(查询)
{
	system("cls");
	system("color F3");
	printf("---------------------------------------\n");
	printf("*****欢迎使用普通系统，请选择菜单：\n");
	printf("*****1:学生成绩信息查询\n");
	printf("*****0.退出系统\n");
	printf("*****请选择(2或0)\n");
	printf("---------------------------------------\n");
}
void Query()//学生成绩查询
{
	system("cls");
	printf("---------------------------------------\n");
	printf("*****1:学号查询\n");
	printf("*****2.姓名\n");
	printf("*****0:返回上一级\n");
	printf("*****请选择(2或0)\n");
	printf("---------------------------------------\n");
}
void Edit()//学生成绩编辑
{
	system("cls");
	printf("---------------------------------------\n");
	printf("*****1:删除\n");
	printf("*****2.修改\n");
	printf("*****0:返回上一级\n");
	printf("*****请选择(1，2或0)\n");
	printf("---------------------------------------\n");
}
void subject()
{
	printf("---------------------------------------\n");
	printf("*****1:C语言\n");
	printf("*****2.英语\n");
	printf("*****3.数学\n");
	printf("*****0:返回上一级\n");
	printf("*****请选择(1，2，3或0)\n");
	printf("---------------------------------------\n");
}
void Statistic()//学生成绩信息统计
{
	printf("---------------------------------------\n");
	printf("*****1:C语言\n");
	printf("*****2:英语\n");
	printf("*****3:数学\n");
	printf("*****4:总分\n");
	printf("*****0.返回上一级\n");
	printf("*****请选择(1、2、3、4或0)\n");
	printf("---------------------------------------\n");
}
void Output()//学生成绩信息显示
{
	printf("---------------------------------------\n");
	printf("*****1:C语言\n");
	printf("*****2:英语\n");
	printf("*****3:数学\n");
	printf("*****4:显示所有成绩(不分成绩段全部显示)\n");
	printf("*****0.返回上一级\n");
	printf("*****请选择(1、2、3、4或0)\n");
	printf("---------------------------------------\n");
}
void leval()
{
	printf("---------------------------------------\n");
	printf("*****1:60分以下\n");
	printf("*****2:60到79分\n");
	printf("*****3:80分及以上\n");
	printf("*****0.返回上一级\n");
	printf("*****请选择(1、2、3或0)\n");
	printf("---------------------------------------\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Input_operation(struct syste*ps) //学生成绩录入操作
{
	int input;
	do {

		printf("请输入学生学号：>");
		scanf("%d", &(ps->data[ps->size].ID));
		printf("请输入学生名字：>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入学生C语言成绩：>");
		scanf("%d", &(ps->data[ps->size].C_score));
		printf("请输入学生英语成绩：>");
		scanf("%d", &(ps->data[ps->size].EN_score));
		printf("请输入学生数学成绩：>");
		scanf("%d", &(ps->data[ps->size].MATH_score));
		ps->data[ps->size].TOTAL_score = ps->data[ps->size].MATH_score + ps->data[ps->size].EN_score + ps->data[ps->size].C_score;
		ps->size++;
		printf("请问是否还要继续录入<1:是/0：否>:");
		scanf("%d", &input);
	} while (input == 1);


}
void ID_Query(struct syste*ps)
{
	if (ps->size == 0) {
		printf("无数据可查询!\n");
	}
	else {
		int input2 = 1;
		while (input2 == 1)
		{
			printf("请输入ID: ");
			int inputID;
			int i;
			scanf("%d", &inputID);
			for (i = 0; i < ps->size; i++)
			{
				if (ps->data[i].ID == inputID) {
					printf("————————————————————————————————————————————————————————\n");
					printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n","ID","名字","C语言","英语","数学","总分");
					printf("————————————————————————————————————————————————————————\n");
					printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
					printf("————————————————————————————————————————————————————————\n");
					goto flag;
				}
			}
			printf("无此ID\n");
			flag: printf("\n");
			printf("请问是否还要继续ID查询<1:是/0：否>:");
			scanf("%d", &input2);
		}

	}
}
void name_Query(struct syste*ps)
{
	if (ps->size == 0) {
		printf("无数据可查询!\n");
	}
	else {
		int input3 = 1;
		while (input3 == 1) {
			printf("请输入名字: ");
			char input_name;
			int i;
			scanf("%s", &input_name);
			for (i = 0; i < ps->size; i++)
			{
				if (strcmp(ps->data[i].name, &input_name) == 0) {
					printf("————————————————————————————————————————————————————————\n");
					printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "名字", "C语言", "英语", "数学", "总分");
					printf("————————————————————————————————————————————————————————\n");
					printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
					printf("————————————————————————————————————————————————————————\n");
					goto flag2;
				}
			}
			printf("无此名字\n");
			flag2: printf("\n");
			printf("请问是否还要继续名字查询<1:是/0：否>:");
			scanf("%d", &input3);
		}

	}
}
void Edit_Del(struct syste*ps)
{
	if (ps->size == 0) {
		printf("无数据可删除!\n");
	}
	else {
		int inputID;
		int input2=1;
		while (input2)
		{
			int i = 0;
			printf("请输入你想删除学生的学号：");
			scanf("%d", &inputID);
			for (i = 0; i < ps->size; i++)
			{
				if ((ps->data[i].ID == inputID) && (i < ps->size-1)) //被删的ID不在尾部
				{
					for (i; i < ps->size; i++)
					{
						ps->data[i] = ps->data[i + 1];
					}
					ps->size--;
					goto flag;
					break;
				}
				else if ((ps->data[i].ID == inputID) && (i = ps->size-1))//被删的ID在尾部
				{
					ps->size--;
					goto flag;
				}
			}
			printf("无此ID\n");
			flag: printf("\n");
			printf("!!!!!删除成功!!!!!");
			printf("请问是否还要继续删除<1:是/0:否>:");
			scanf("%d", &input2);
		}
	}
}
void Edit_Change(struct syste*ps)
{
	if (ps->size == 0) {
		printf("无数据可更改!\n");
	}
	else {
		int input2 = 1;
		while (input2 == 1)
		{
			printf("请输入ID: ");
			int inputID;
			int i;
			scanf("%d", &inputID);
			for (i = 0; i < ps->size; i++)
			{
				if (ps->data[i].ID == inputID) {
					printf("————————————————————————————————————————————————————————\n");
					printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "名字", "C语言", "英语", "数学", "总分");
					printf("————————————————————————————————————————————————————————\n");
					printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
					printf("————————————————————————————————————————————————————————\n");
					subject();//选择科目
					int choice;
					printf("选择ID为%d的学生要修改成绩的科目：>",inputID);
					scanf("%d", &choice);
					while (choice)
					{
						if (choice == 1)
						{
							ps->data[i].TOTAL_score -= ps->data[i].C_score;
							printf("请输入新的C语言分数：");
							scanf("%d", &(ps->data[i].C_score));
							ps->data[i].TOTAL_score += ps->data[i].C_score;
							printf("！！！修改成功！！！\n");
							printf("————————————————————————————————————————————————————————\n");
							printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "名字", "C语言", "英语", "数学", "总分");
							printf("————————————————————————————————————————————————————————\n");
							printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
							printf("————————————————————————————————————————————————————————\n");
						}
						else if (choice == 2)
						{
							ps->data[i].TOTAL_score -= ps->data[i].EN_score;
							printf("请输入新的英语分数：");
							scanf("%d", &(ps->data[i].EN_score));
							ps->data[i].TOTAL_score += ps->data[i].EN_score;
							printf("！！！修改成功！！！\n");
							printf("————————————————————————————————————————————————————————\n");
							printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "名字", "C语言", "英语", "数学", "总分");
							printf("————————————————————————————————————————————————————————\n");
							printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
							printf("————————————————————————————————————————————————————————\n");
						}
						else if (choice == 3)
						{
							ps->data[i].TOTAL_score -= ps->data[i].MATH_score;
							printf("请输入新的数学分数：");
							scanf("%d", &(ps->data[i].MATH_score));
							ps->data[i].TOTAL_score += ps->data[i].MATH_score;
							printf("！！！修改成功！！！\n");
							printf("————————————————————————————————————————————————————————\n");
							printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "名字", "C语言", "英语", "数学", "总分");
							printf("————————————————————————————————————————————————————————\n");
							printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
							printf("————————————————————————————————————————————————————————\n");
						}
						printf("继续修改此学生的成绩？<1：C语言/2：英语/3：数学/0：返回上一级>：");
						scanf("%d", &choice);	
					}
					goto flag;
				}
			}
			printf("无此ID\n");
			flag: printf("\n");
			printf("请问是否还要继续修改其他学生成绩？<1:是/0：否>:");
			scanf("%d", &input2);
		}

	}
}
void Statistic_C_score(struct syste*ps)
{
	if (ps->size == 0)
	{
		printf("无数据可统计！！！\n");
	}
	else
	{
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17s  %-17s  %-17s\n", "最高分", "最低分", "平均分");

		int i;
		int i1;
		int first_one = ps->data[0].C_score;//最高分
		for (i = 0; i < ps->size; i++)
		{
			if (ps->data[i].C_score > first_one)
			{
				first_one = ps->data[i].C_score;
				i1 = i;
			}
			else {
				i1 = 0;
			}
		}

		int k;
		int k1;
		int last_one = ps->data[0].C_score;//最低分
		for (k = 0; k < ps->size; k++)
		{
			if (ps->data[k].C_score < last_one)
			{
				last_one = ps->data[k].C_score;
				k1 = k;
			}
			else
			{
				k1 = 0;
			}
		}

		int j;
		int average = 0;//平均分
		for (j = 0; j < ps->size; j++)
		{
			average += ps->data[j].C_score;
		}
		average /= ps->size;
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17s  %-17s\n", ps->data[i1].name, ps->data[k1].name);
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17d  %-17d  %-17d\n", first_one, last_one, average);
	}
	
}
void Statistic_EN_score(struct syste*ps)
{
	if (ps->size == 0)
	{
		printf("无数据可统计！！！\n");
	}
	else 
	{
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17s  %-17s  %-17s\n", "最高分", "最低分", "平均分");

		int i;
		int i1;
		int first_one = ps->data[0].EN_score;//最高分
		for (i = 0; i < ps->size; i++)
		{
			if (ps->data[i].EN_score > first_one)
			{
				first_one = ps->data[i].EN_score;
				i1 = i;
			}
			else {
				i1 = 0;
			}
		}

		int k;
		int k1;
		int last_one = ps->data[0].EN_score;//最低分
		for (k = 0; k < ps->size; k++)
		{
			if (ps->data[k].EN_score < last_one)
			{
				last_one = ps->data[k].EN_score;
				k1 = k;
			}
			else
			{
				k1 = 0;
			}
		}
		int j;
		int average = 0;//平均分
		for (j = 0; j < ps->size; j++)
		{
			average += ps->data[j].EN_score;
		}
		average /= ps->size;
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17s  %-17s\n", ps->data[i1].name, ps->data[k1].name);
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17d  %-17d  %-17d\n", first_one, last_one, average);
	}
	
}
void Statistic_MATH_score(struct syste*ps)
{
	if (ps->size == 0)
	{
		printf("无数据可统计！！！\n");
	}
	else
	{
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17s  %-17s  %-17s\n", "最高分", "最低分", "平均分");

		int i;
		int i1;
		int first_one = ps->data[0].MATH_score;//最高分
		for (i = 0; i < ps->size; i++)
		{
			if (ps->data[i].MATH_score > first_one)
			{
				first_one = ps->data[i].MATH_score;
				i1 = i;
			}
			else {
				i1 = 0;
			}
		}

		int k;
		int k1;
		int last_one = ps->data[0].MATH_score;//最低分
		for (k = 0; k < ps->size; k++)
		{
			if (ps->data[k].MATH_score < last_one)
			{
				last_one = ps->data[k].MATH_score;
				k1 = k;
			}
			else
			{
				k1 = 0;
			}
		}

		int j;
		int average = 0;//平均分
		for (j = 0; j < ps->size; j++)
		{
			average += ps->data[j].MATH_score;
		}
		average /= ps->size;
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17s  %-17s\n", ps->data[i1].name, ps->data[k1].name);
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17d  %-17d  %-17d\n", first_one, last_one, average);
	}
	
}
void Statistic_TOTAL_score(struct syste*ps)
{
	if (ps->size == 0)
	{
		printf("无数据可统计！！！\n");
	}
	else
	{
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17s  %-17s  %-17s\n", "最高分", "最低分", "平均分");

		int i;
		int i1;
		int first_one = ps->data[0].TOTAL_score;//最高分
		for (i = 0; i < ps->size; i++)
		{
			if (ps->data[i].TOTAL_score > first_one)
			{
				first_one = ps->data[i].TOTAL_score;
				i1 = i;
			}
			else {
				i1 = 0;
			}
		}

		int k;
		int k1;
		int last_one = ps->data[0].TOTAL_score;//最低分
		for (k = 0; k < ps->size; k++)
		{
			if (ps->data[k].TOTAL_score < last_one)
			{
				last_one = ps->data[k].TOTAL_score;
				k1 = k;
			}
			else
			{
				k1 = 0;
			}
		}

		int j;
		int average = 0;//平均分
		for (j = 0; j < ps->size; j++)
		{
			average += ps->data[j].TOTAL_score;
		}
		average /= ps->size;
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17s  %-17s\n", ps->data[i1].name, ps->data[k1].name);
		printf("————————————————————————————————————————————————————————\n");
		printf("      %-17d  %-17d  %-17d\n", first_one, last_one, average);
	}
}

void Output_C_c(struct syste*ps)
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->data[i].C_score < 60)
		{
			printf("————————————————————————————————————————————————————————\n");
			printf("\t%s: ", ps->data[i].name);
			printf("\t%d\n", ps->data[i].C_score);
			printf("————————————————————————————————————————————————————————\n");
		}
	}
}
void Output_C_b(struct syste*ps)
{
	int i;
	for (i = 0; i < ps->size;i++)
	{
		if (ps->data[i].C_score >= 60 && ps->data[i].C_score < 80)
		{
			printf("————————————————————————————————————————————————————————\n");
			printf("\t%s: ", ps->data[i].name);
			printf("\t%d\n", ps->data[i].C_score);
			printf("————————————————————————————————————————————————————————\n");
		}
	}
}
void Output_C_a(struct syste*ps)
{
	{
		int i;
		for (i = 0; i < ps->size; i++)
		{
			if (ps->data[i].C_score >= 80)
			{
				printf("————————————————————————————————————————————————————————\n");
				printf("\t%s: ", ps->data[i].name);
				printf("\t%d\n", ps->data[i].C_score);
				printf("————————————————————————————————————————————————————————\n");
			}
		}
	}
}
void Output_EN_c(struct syste*ps)
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->data[i].EN_score < 60)
		{
			printf("————————————————————————————————————————————————————————\n");
			printf("\t%s: ", ps->data[i].name);
			printf("\t%d\n", ps->data[i].EN_score);
			printf("————————————————————————————————————————————————————————\n");
		}
	}
}
void Output_EN_b(struct syste*ps)
{
	{
		int i;
		for (i = 0; i < ps->size; i++)
		{
			if (ps->data[i].EN_score >= 60 && ps->data[i].EN_score < 80)
			{
				printf("————————————————————————————————————————————————————————\n");
				printf("\t%s: ", ps->data[i].name);
				printf("\t%d\n", ps->data[i].EN_score);
				printf("————————————————————————————————————————————————————————\n");
			}
		}
	}
}
void Output_EN_a(struct syste*ps)
{
	{
		int i;
		for (i = 0; i < ps->size; i++)
		{
			if (ps->data[i].EN_score >= 80)
			{
				printf("————————————————————————————————————————————————————————\n");
				printf("\t%s", ps->data[i].name);
				printf("\t%d\n", ps->data[i].EN_score);
				printf("————————————————————————————————————————————————————————\n");
			}
		}
	}
}
void Output_MATH_c(struct syste*ps)
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->data[i].MATH_score < 60)
		{
			printf("————————————————————————————————————————————————————————\n");
			printf("\t%s: ", ps->data[i].name);
			printf("\t%d\n", ps->data[i].MATH_score);
			printf("————————————————————————————————————————————————————————\n");
		}
	}
}
void Output_MATH_b(struct syste*ps)
{
	{
		int i;
		for (i = 0; i < ps->size;i++)
		{
			if (ps->data[i].MATH_score >= 60 && ps->data[i].MATH_score < 80)
			{
				printf("————————————————————————————————————————————————————————\n");
				printf("\t%s: ", ps->data[i].name);
				printf("\t%d\n", ps->data[i].MATH_score);
				printf("————————————————————————————————————————————————————————\n");
			}
		}
	}
}
void Output_MATH_a(struct syste*ps)
{
	{
		int i;
		for (i = 0; i < ps->size; i++)
		{
			if (ps->data[i].MATH_score >= 80)
			{
				printf("————————————————————————————————————————————————————————\n");
				printf("\t%s: ", ps->data[i].name);
				printf("\t%d\n", ps->data[i].MATH_score);
				printf("————————————————————————————————————————————————————————\n");
			}
		}
	}
}
void Output_TOTAL(struct syste*ps)
{
	printf("————————————————————————————————————————————————————————\n");
	printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "名字", "C语言", "英语", "数学", "总分");
	printf("————————————————————————————————————————————————————————\n");
	int i;
	for (i = 0; i < ps->size; i++)
	{
		printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
		printf("————————————————————————————————————————————————————————\n");
	}
}
void readdata(struct syste*ps)
{
	FILE* read = fopen("data.txt", "rb");
	int j = 0;
	while (fread(&(ps->data[j]), sizeof(struct StuInfo), 1, read))//fread在读取完后返回值为0
	{
		j++;
		ps->size++;
	}
	fclose(read);
}
void savedata(struct syste*ps) 
{
	int i;
	FILE* save = fopen("data.txt", "wb");
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct StuInfo), 1, save);
	}
	fclose(save);
}