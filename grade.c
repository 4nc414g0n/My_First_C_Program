#include"header.h"
int main()
{
	struct syste sys;
	memset(sys.data, 0, sizeof(sys.data));//�ṹ���ڴ��ʼ��
	sys.size = 0;//��ʼ��
	readdata(&sys);
	Welcome();
	Account();
	int choice, passWord1, passWord2;
	printf("��ѡ��");
	scanf("%d", &choice);
	while (choice)
	{
		//����Ա����
		if (choice == 1)
		{
			while (1)
			{
				printf("�������Ա���룺");
				scanf("%d", &passWord1);
				if (passWord1 == 42) 
				{
					sys_Admin();
					int choice1;
					printf("��ѡ��");
					scanf("%d", &choice1);
					while (choice1)
					{	//¼��
						if (choice1 == 1) {
							system("cls");
							Input_operation(&sys);
							sys_Admin();
						}
						//��ѯ
						else if (choice1 == 2) {
							Query();
							printf("��ѡ��");
							int choice1_2=1;
							scanf("%d", &choice1-2);
							while (choice1_2)
							{
								if (choice1_2 == 1) //ID��ѯ
								{
									ID_Query(&sys);
									Query();
								}
								else if (choice1_2 == 2)//���ֲ�ѯ
								{
									name_Query(&sys);
									Query();
								}
								printf("�����루1,2��0��\n");
								printf("��ѡ��");
								scanf("%d", &choice1_2);
							}
							sys_Admin();
						}
						//�༭
						else if (choice1 == 3) {
							Edit();
							int choice1_3;
							printf("�����루1��2��0����");
							scanf("%d", &choice1_3);
							while (choice1_3)
							{
								if (choice1_3 == 1)//ɾ
								{
									Edit_Del(&sys);
									Edit();
								}
								else if (choice1_3 == 2)//��
								{
									Edit_Change(&sys);
									Edit();
								}
								printf("�����루1��2��0����");
								scanf("%d", &choice1_3);
							}

						}
						//ͳ��
						else if (choice1 == 4) 
						{
							Statistic();
							int choice1_4;
							printf("�����루1,2,3,4��0����");
							scanf("%d", &choice1_4);
							while (choice1_4)
							{
								if (choice1_4 == 1)//C����ͳ��
								{
									Statistic_C_score(&sys);
									Statistic();
								}
								else if (choice1_4 == 2)//Ӣ��ͳ��
								{
									Statistic_EN_score(&sys);
									Statistic();
								}
								else if (choice1_4 == 3)//��ѧͳ��
								{
									Statistic_MATH_score(&sys);
									Statistic();
								}
								else if (choice1_4 == 4)//�ܷ�ͳ��
								{
									Statistic_TOTAL_score(&sys);
									Statistic();
								}
								printf("�����루1��2��3��4��0����");
								scanf("%d", &choice1_4);
							}
						}
						//��ʾ
						else if (choice1 == 5)
						{
							Output();
							printf("@@@<��ʾ��ѡ���Ŀ�ɲ鿴���Ƴɼ��ֶ�>@@@\n");

							int choice1_5;
							printf("�����루1,2,3,4��0����");
							scanf("%d", &choice1_5);
							while (choice1_5)
							{	
								//���û�ѡ���ˡ�ѧ���ɼ���Ϣ��ʾ���˵�����ѧ��ȫ����Ϣ��ʾ����Ļ�ϣ�ѡ�����ɽ�������˵���ѡ��ȫ����ʾ��������ʾ60�����¡�����ʾ��60~79�������������������ʾ�˵���
								if (choice1_5 == 1)//C���ԣ��ֶ���ʾ��
								{
									leval();
									int choice1_5_1;
									printf("�����루1,2,3��0����");
									scanf("%d", &choice1_5_1);
									while (choice1_5_1)
									{
										if (choice1_5_1 == 1)//60������
										{
											Output_C_c(&sys);
											leval();
										}
										else if (choice1_5_1 == 2)//60-79
										{
											Output_C_b(&sys);
											leval();
										}
										else if (choice1_5_1 == 3)//80������
										{
											Output_C_a(&sys);
											leval();
										}
										printf("�����루1,2,3��0����");
										scanf("%d", &choice1_5_1);
									}
									Output();
								}
								else if (choice1_5 == 2)//Ӣ��ֶ���ʾ��
								{
									leval();
									int choice1_5_2;
									printf("�����루1,2,3��0����");
									scanf("%d", &choice1_5_2);
									while (choice1_5_2)
									{
										if (choice1_5_2 == 1)//60������
										{
											Output_EN_c(&sys);
											leval();
										}
										else if (choice1_5_2 == 2)//60-79
										{
											Output_EN_b(&sys);
											leval();;
										}
										else if (choice1_5_2 == 3)//80������
										{
											Output_EN_a(&sys);
											leval();
										}
										printf("�����루1,2,3��0����");
										scanf("%d", &choice1_5_2);
									}
									Output();
								}
								else if (choice1_5 == 3)//��ѧ���ֶ���ʾ��
								{
									leval();
									int choice1_5_3;
									printf("�����루1,2,3��0����");
									scanf("%d", &choice1_5_3);
									while (choice1_5_3)
									{
										if (choice1_5_3 == 1)//60������
										{
											Output_MATH_c(&sys);
											leval();
										}
										else if (choice1_5_3 == 2)//60-79
										{
											Output_MATH_b(&sys);
											leval();;
										}
										else if (choice1_5_3 == 3)//80������
										{
											Output_MATH_a(&sys);
											leval();
										}
										printf("�����루1,2,3��0����");
										scanf("%d", &choice1_5_3);
									}
									Output();
								}
								else if (choice1_5 == 4)//���гɼ������ֶΣ�
								{
									Output_TOTAL(&sys);
									Output();
								}
								printf("�����루1��2��3��4��0����");
								scanf("%d", &choice1_5);
							}
						}

						sys_Admin();
						printf("�����루1,2,3,4,5��0��\n");
						printf("��ѡ��");
						scanf("%d", &choice1);
					}
					break;
				}
				else {
					printf("Error�������\n");
				}
			}
			//break;
		}
		//��ͨ����
		else if (choice == 2) {
			while (1)
			{
				printf("������ͨ���룺");
				scanf("%d", &passWord2);
				if (passWord2 == 43)
				{
					sys_normal();
					int choice2_1;
					printf("��ѡ��");
					scanf("%d", &choice2_1);
					while (choice2_1)
					{	//¼��
						if (choice2_1 == 1)
						{
							Query();
							printf("��ѡ��");
							int choice1_2_1 = 1;
							scanf("%d", &choice1_2_1);
							while (choice1_2_1)
							{
								if (choice1_2_1 == 1) //ID��ѯ
								{
									ID_Query(&sys);
									Query();
								}
								else if (choice1_2_1 == 2)//���ֲ�ѯ
								{
									name_Query(&sys);
									Query();
								}
								printf("�����루1,2��0��\n");
								printf("��ѡ��");
								scanf("%d", &choice1_2_1);
							}
							sys_normal();
						}
					}
					goto flag4;
				}
				else
				{
					printf("Error�������\n");
				}
			}
			flag4:printf("\n");
			//break;
		}
		system("cls");
		Account();
		printf("�����루1��2��0��\n");
		printf("��ѡ��");
		scanf("%d", &choice);
	}
	savedata(&sys);//ѡ 0 �˳��Զ������ڱ�Ŀ¼��
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Welcome()//��ӭ����
{
	//system("title ������ƿγ����");
	system("color F2");
	printf("*****************************************\n");
	printf("************������ƿγ����\n");
	printf("************ѧ���ɼ�����ϵͳ\n");
	printf("*****************************************\n");
	printf("������ƣ��¹��Ʋ�ҵѧԺ\n");
	printf("רҵ������������\n");
	printf("�༶��207\n");
	printf("ѧ�ţ�202012902742\n");
	printf("�������Ӵ���\n");
	printf("2021��3��21��\n");

}
void Account()
{
	printf("--------------------------------------\n");
	printf("*****ѡ���Թ���Ա����ͨ�û���¼\n");
	printf("*****1:����Ա(¼���ѯ�༭ͳ����ʾ)\n");
	printf("*****2:��ͨ�û�(��ѯ)\n");
	printf("*****0:�˳�\n");
	printf("*****��ѡ��(1��2��0)\n");
	printf("*****��������42����ͨ����43\n");
	printf("---------------------------------------\n");
}
void sys_Admin()//����Ա(¼���ѯ�༭ͳ����ʾ�˳�)
{
	system("cls");
	system("color F4");
	printf("---------------------------------------\n");
	printf("*****��ӭʹ�ù���Աϵͳ����ѡ��˵���\n");
	printf("*****1:ѧ���ɼ���Ϣ¼��\n");
	printf("*****2:ѧ���ɼ���Ϣ��ѯ\n");
	printf("*****3:ѧ���ɼ���Ϣ�༭\n");
	printf("*****4:ѧ���ɼ���Ϣͳ��\n");
	printf("*****5:ѧ���ɼ���Ϣ��ʾ\n");
	printf("*****0.������һ��\n");
	printf("*****��ѡ��(1��2��3��4��5��0)\n");
	printf("---------------------------------------\n");
}
void sys_normal()//��ͨ(��ѯ)
{
	system("cls");
	system("color F3");
	printf("---------------------------------------\n");
	printf("*****��ӭʹ����ͨϵͳ����ѡ��˵���\n");
	printf("*****1:ѧ���ɼ���Ϣ��ѯ\n");
	printf("*****0.�˳�ϵͳ\n");
	printf("*****��ѡ��(2��0)\n");
	printf("---------------------------------------\n");
}
void Query()//ѧ���ɼ���ѯ
{
	system("cls");
	printf("---------------------------------------\n");
	printf("*****1:ѧ�Ų�ѯ\n");
	printf("*****2.����\n");
	printf("*****0:������һ��\n");
	printf("*****��ѡ��(2��0)\n");
	printf("---------------------------------------\n");
}
void Edit()//ѧ���ɼ��༭
{
	system("cls");
	printf("---------------------------------------\n");
	printf("*****1:ɾ��\n");
	printf("*****2.�޸�\n");
	printf("*****0:������һ��\n");
	printf("*****��ѡ��(1��2��0)\n");
	printf("---------------------------------------\n");
}
void subject()
{
	printf("---------------------------------------\n");
	printf("*****1:C����\n");
	printf("*****2.Ӣ��\n");
	printf("*****3.��ѧ\n");
	printf("*****0:������һ��\n");
	printf("*****��ѡ��(1��2��3��0)\n");
	printf("---------------------------------------\n");
}
void Statistic()//ѧ���ɼ���Ϣͳ��
{
	printf("---------------------------------------\n");
	printf("*****1:C����\n");
	printf("*****2:Ӣ��\n");
	printf("*****3:��ѧ\n");
	printf("*****4:�ܷ�\n");
	printf("*****0.������һ��\n");
	printf("*****��ѡ��(1��2��3��4��0)\n");
	printf("---------------------------------------\n");
}
void Output()//ѧ���ɼ���Ϣ��ʾ
{
	printf("---------------------------------------\n");
	printf("*****1:C����\n");
	printf("*****2:Ӣ��\n");
	printf("*****3:��ѧ\n");
	printf("*****4:��ʾ���гɼ�(���ֳɼ���ȫ����ʾ)\n");
	printf("*****0.������һ��\n");
	printf("*****��ѡ��(1��2��3��4��0)\n");
	printf("---------------------------------------\n");
}
void leval()
{
	printf("---------------------------------------\n");
	printf("*****1:60������\n");
	printf("*****2:60��79��\n");
	printf("*****3:80�ּ�����\n");
	printf("*****0.������һ��\n");
	printf("*****��ѡ��(1��2��3��0)\n");
	printf("---------------------------------------\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Input_operation(struct syste*ps) //ѧ���ɼ�¼�����
{
	int input;
	do {

		printf("������ѧ��ѧ�ţ�>");
		scanf("%d", &(ps->data[ps->size].ID));
		printf("������ѧ�����֣�>");
		scanf("%s", ps->data[ps->size].name);
		printf("������ѧ��C���Գɼ���>");
		scanf("%d", &(ps->data[ps->size].C_score));
		printf("������ѧ��Ӣ��ɼ���>");
		scanf("%d", &(ps->data[ps->size].EN_score));
		printf("������ѧ����ѧ�ɼ���>");
		scanf("%d", &(ps->data[ps->size].MATH_score));
		ps->data[ps->size].TOTAL_score = ps->data[ps->size].MATH_score + ps->data[ps->size].EN_score + ps->data[ps->size].C_score;
		ps->size++;
		printf("�����Ƿ�Ҫ����¼��<1:��/0����>:");
		scanf("%d", &input);
	} while (input == 1);


}
void ID_Query(struct syste*ps)
{
	if (ps->size == 0) {
		printf("�����ݿɲ�ѯ!\n");
	}
	else {
		int input2 = 1;
		while (input2 == 1)
		{
			printf("������ID: ");
			int inputID;
			int i;
			scanf("%d", &inputID);
			for (i = 0; i < ps->size; i++)
			{
				if (ps->data[i].ID == inputID) {
					printf("����������������������������������������������������������������������������������������������������������������\n");
					printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n","ID","����","C����","Ӣ��","��ѧ","�ܷ�");
					printf("����������������������������������������������������������������������������������������������������������������\n");
					printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
					printf("����������������������������������������������������������������������������������������������������������������\n");
					goto flag;
				}
			}
			printf("�޴�ID\n");
			flag: printf("\n");
			printf("�����Ƿ�Ҫ����ID��ѯ<1:��/0����>:");
			scanf("%d", &input2);
		}

	}
}
void name_Query(struct syste*ps)
{
	if (ps->size == 0) {
		printf("�����ݿɲ�ѯ!\n");
	}
	else {
		int input3 = 1;
		while (input3 == 1) {
			printf("����������: ");
			char input_name;
			int i;
			scanf("%s", &input_name);
			for (i = 0; i < ps->size; i++)
			{
				if (strcmp(ps->data[i].name, &input_name) == 0) {
					printf("����������������������������������������������������������������������������������������������������������������\n");
					printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "����", "C����", "Ӣ��", "��ѧ", "�ܷ�");
					printf("����������������������������������������������������������������������������������������������������������������\n");
					printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
					printf("����������������������������������������������������������������������������������������������������������������\n");
					goto flag2;
				}
			}
			printf("�޴�����\n");
			flag2: printf("\n");
			printf("�����Ƿ�Ҫ�������ֲ�ѯ<1:��/0����>:");
			scanf("%d", &input3);
		}

	}
}
void Edit_Del(struct syste*ps)
{
	if (ps->size == 0) {
		printf("�����ݿ�ɾ��!\n");
	}
	else {
		int inputID;
		int input2=1;
		while (input2)
		{
			int i = 0;
			printf("����������ɾ��ѧ����ѧ�ţ�");
			scanf("%d", &inputID);
			for (i = 0; i < ps->size; i++)
			{
				if ((ps->data[i].ID == inputID) && (i < ps->size-1)) //��ɾ��ID����β��
				{
					for (i; i < ps->size; i++)
					{
						ps->data[i] = ps->data[i + 1];
					}
					ps->size--;
					goto flag;
					break;
				}
				else if ((ps->data[i].ID == inputID) && (i = ps->size-1))//��ɾ��ID��β��
				{
					ps->size--;
					goto flag;
				}
			}
			printf("�޴�ID\n");
			flag: printf("\n");
			printf("!!!!!ɾ���ɹ�!!!!!");
			printf("�����Ƿ�Ҫ����ɾ��<1:��/0:��>:");
			scanf("%d", &input2);
		}
	}
}
void Edit_Change(struct syste*ps)
{
	if (ps->size == 0) {
		printf("�����ݿɸ���!\n");
	}
	else {
		int input2 = 1;
		while (input2 == 1)
		{
			printf("������ID: ");
			int inputID;
			int i;
			scanf("%d", &inputID);
			for (i = 0; i < ps->size; i++)
			{
				if (ps->data[i].ID == inputID) {
					printf("����������������������������������������������������������������������������������������������������������������\n");
					printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "����", "C����", "Ӣ��", "��ѧ", "�ܷ�");
					printf("����������������������������������������������������������������������������������������������������������������\n");
					printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
					printf("����������������������������������������������������������������������������������������������������������������\n");
					subject();//ѡ���Ŀ
					int choice;
					printf("ѡ��IDΪ%d��ѧ��Ҫ�޸ĳɼ��Ŀ�Ŀ��>",inputID);
					scanf("%d", &choice);
					while (choice)
					{
						if (choice == 1)
						{
							ps->data[i].TOTAL_score -= ps->data[i].C_score;
							printf("�������µ�C���Է�����");
							scanf("%d", &(ps->data[i].C_score));
							ps->data[i].TOTAL_score += ps->data[i].C_score;
							printf("�������޸ĳɹ�������\n");
							printf("����������������������������������������������������������������������������������������������������������������\n");
							printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "����", "C����", "Ӣ��", "��ѧ", "�ܷ�");
							printf("����������������������������������������������������������������������������������������������������������������\n");
							printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
							printf("����������������������������������������������������������������������������������������������������������������\n");
						}
						else if (choice == 2)
						{
							ps->data[i].TOTAL_score -= ps->data[i].EN_score;
							printf("�������µ�Ӣ�������");
							scanf("%d", &(ps->data[i].EN_score));
							ps->data[i].TOTAL_score += ps->data[i].EN_score;
							printf("�������޸ĳɹ�������\n");
							printf("����������������������������������������������������������������������������������������������������������������\n");
							printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "����", "C����", "Ӣ��", "��ѧ", "�ܷ�");
							printf("����������������������������������������������������������������������������������������������������������������\n");
							printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
							printf("����������������������������������������������������������������������������������������������������������������\n");
						}
						else if (choice == 3)
						{
							ps->data[i].TOTAL_score -= ps->data[i].MATH_score;
							printf("�������µ���ѧ������");
							scanf("%d", &(ps->data[i].MATH_score));
							ps->data[i].TOTAL_score += ps->data[i].MATH_score;
							printf("�������޸ĳɹ�������\n");
							printf("����������������������������������������������������������������������������������������������������������������\n");
							printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "����", "C����", "Ӣ��", "��ѧ", "�ܷ�");
							printf("����������������������������������������������������������������������������������������������������������������\n");
							printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
							printf("����������������������������������������������������������������������������������������������������������������\n");
						}
						printf("�����޸Ĵ�ѧ���ĳɼ���<1��C����/2��Ӣ��/3����ѧ/0��������һ��>��");
						scanf("%d", &choice);	
					}
					goto flag;
				}
			}
			printf("�޴�ID\n");
			flag: printf("\n");
			printf("�����Ƿ�Ҫ�����޸�����ѧ���ɼ���<1:��/0����>:");
			scanf("%d", &input2);
		}

	}
}
void Statistic_C_score(struct syste*ps)
{
	if (ps->size == 0)
	{
		printf("�����ݿ�ͳ�ƣ�����\n");
	}
	else
	{
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17s  %-17s  %-17s\n", "��߷�", "��ͷ�", "ƽ����");

		int i;
		int i1;
		int first_one = ps->data[0].C_score;//��߷�
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
		int last_one = ps->data[0].C_score;//��ͷ�
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
		int average = 0;//ƽ����
		for (j = 0; j < ps->size; j++)
		{
			average += ps->data[j].C_score;
		}
		average /= ps->size;
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17s  %-17s\n", ps->data[i1].name, ps->data[k1].name);
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17d  %-17d  %-17d\n", first_one, last_one, average);
	}
	
}
void Statistic_EN_score(struct syste*ps)
{
	if (ps->size == 0)
	{
		printf("�����ݿ�ͳ�ƣ�����\n");
	}
	else 
	{
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17s  %-17s  %-17s\n", "��߷�", "��ͷ�", "ƽ����");

		int i;
		int i1;
		int first_one = ps->data[0].EN_score;//��߷�
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
		int last_one = ps->data[0].EN_score;//��ͷ�
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
		int average = 0;//ƽ����
		for (j = 0; j < ps->size; j++)
		{
			average += ps->data[j].EN_score;
		}
		average /= ps->size;
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17s  %-17s\n", ps->data[i1].name, ps->data[k1].name);
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17d  %-17d  %-17d\n", first_one, last_one, average);
	}
	
}
void Statistic_MATH_score(struct syste*ps)
{
	if (ps->size == 0)
	{
		printf("�����ݿ�ͳ�ƣ�����\n");
	}
	else
	{
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17s  %-17s  %-17s\n", "��߷�", "��ͷ�", "ƽ����");

		int i;
		int i1;
		int first_one = ps->data[0].MATH_score;//��߷�
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
		int last_one = ps->data[0].MATH_score;//��ͷ�
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
		int average = 0;//ƽ����
		for (j = 0; j < ps->size; j++)
		{
			average += ps->data[j].MATH_score;
		}
		average /= ps->size;
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17s  %-17s\n", ps->data[i1].name, ps->data[k1].name);
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17d  %-17d  %-17d\n", first_one, last_one, average);
	}
	
}
void Statistic_TOTAL_score(struct syste*ps)
{
	if (ps->size == 0)
	{
		printf("�����ݿ�ͳ�ƣ�����\n");
	}
	else
	{
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17s  %-17s  %-17s\n", "��߷�", "��ͷ�", "ƽ����");

		int i;
		int i1;
		int first_one = ps->data[0].TOTAL_score;//��߷�
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
		int last_one = ps->data[0].TOTAL_score;//��ͷ�
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
		int average = 0;//ƽ����
		for (j = 0; j < ps->size; j++)
		{
			average += ps->data[j].TOTAL_score;
		}
		average /= ps->size;
		printf("����������������������������������������������������������������������������������������������������������������\n");
		printf("      %-17s  %-17s\n", ps->data[i1].name, ps->data[k1].name);
		printf("����������������������������������������������������������������������������������������������������������������\n");
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
			printf("����������������������������������������������������������������������������������������������������������������\n");
			printf("\t%s: ", ps->data[i].name);
			printf("\t%d\n", ps->data[i].C_score);
			printf("����������������������������������������������������������������������������������������������������������������\n");
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
			printf("����������������������������������������������������������������������������������������������������������������\n");
			printf("\t%s: ", ps->data[i].name);
			printf("\t%d\n", ps->data[i].C_score);
			printf("����������������������������������������������������������������������������������������������������������������\n");
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
				printf("����������������������������������������������������������������������������������������������������������������\n");
				printf("\t%s: ", ps->data[i].name);
				printf("\t%d\n", ps->data[i].C_score);
				printf("����������������������������������������������������������������������������������������������������������������\n");
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
			printf("����������������������������������������������������������������������������������������������������������������\n");
			printf("\t%s: ", ps->data[i].name);
			printf("\t%d\n", ps->data[i].EN_score);
			printf("����������������������������������������������������������������������������������������������������������������\n");
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
				printf("����������������������������������������������������������������������������������������������������������������\n");
				printf("\t%s: ", ps->data[i].name);
				printf("\t%d\n", ps->data[i].EN_score);
				printf("����������������������������������������������������������������������������������������������������������������\n");
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
				printf("����������������������������������������������������������������������������������������������������������������\n");
				printf("\t%s", ps->data[i].name);
				printf("\t%d\n", ps->data[i].EN_score);
				printf("����������������������������������������������������������������������������������������������������������������\n");
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
			printf("����������������������������������������������������������������������������������������������������������������\n");
			printf("\t%s: ", ps->data[i].name);
			printf("\t%d\n", ps->data[i].MATH_score);
			printf("����������������������������������������������������������������������������������������������������������������\n");
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
				printf("����������������������������������������������������������������������������������������������������������������\n");
				printf("\t%s: ", ps->data[i].name);
				printf("\t%d\n", ps->data[i].MATH_score);
				printf("����������������������������������������������������������������������������������������������������������������\n");
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
				printf("����������������������������������������������������������������������������������������������������������������\n");
				printf("\t%s: ", ps->data[i].name);
				printf("\t%d\n", ps->data[i].MATH_score);
				printf("����������������������������������������������������������������������������������������������������������������\n");
			}
		}
	}
}
void Output_TOTAL(struct syste*ps)
{
	printf("����������������������������������������������������������������������������������������������������������������\n");
	printf("      %-15s  %-15s  %-15s  %-15s  %-15s  %-15s\n", "ID", "����", "C����", "Ӣ��", "��ѧ", "�ܷ�");
	printf("����������������������������������������������������������������������������������������������������������������\n");
	int i;
	for (i = 0; i < ps->size; i++)
	{
		printf("      %-15d  %-15s  %-15d  %-15d  %-15d  %-15d\n", ps->data[i].ID, ps->data[i].name, ps->data[i].C_score, ps->data[i].EN_score, ps->data[i].MATH_score, ps->data[i].TOTAL_score);
		printf("����������������������������������������������������������������������������������������������������������������\n");
	}
}
void readdata(struct syste*ps)
{
	FILE* read = fopen("data.txt", "rb");
	int j = 0;
	while (fread(&(ps->data[j]), sizeof(struct StuInfo), 1, read))//fread�ڶ�ȡ��󷵻�ֵΪ0
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