#include <stdio.h>

//�ṹ��ռ�


//// 1.
//
//struct student
//{
//	int num;
//	char name[32];
//	float score;
//};
////struct�ǽṹ��ؼ�������
////struct student���û�����Ľṹ������
////num��score���ǽṹ���Ա��
////stuͨ���������Ͷ����һ���ṹ�������

////2.Ҫ������ṹ���г�Աa�����ݣ�printf�и���ʲô
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	//struct S *�ϳ�һ���ṹ��ָ�룬��һ��a�ǽṹ��������ѵڶ���a�ĵ�ַ����p��
//	a.a = 99;
//	printf("%d\n", (*p).a);
//	//������a.a , p->a , (*p).a  ����*p.a���У���Ϊ.�����ȼ�����*
//	return 0;
//}

////3.
//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n",(*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18}};
//	fun(students + 1);
//	//studetns����ָ��Ԫ�ص�ַ����1�ͱ���˵ڶ���Ԫ�صĵ�ַ
//	//��� - wang
//	return 0;
//}

//4.�ṹ����ʳ�Ա�Ĳ�����������.������  ->����������ͷ��  *�����ò�����

////5.����ˮ���� - һƿ��ˮ1Ԫ��������ƿ���Ի�һƿ��ˮ����20Ԫ�������ж�����ˮ
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	//��һ:
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	////������
//	//if (money == 0)
//	//	total = 0;
//	//else
//	//	total = 2 * money - 1;
//	printf("%dԪ�ܺȵ�����ˮ����Ϊ%d\n", money, total);
//	return 0;
//}

//���Լ�����ҵ

//1.c���򳣼��Ĵ��󣺱���������Ӵ�������ʱ����
//2.F5���������ԣ�F10����̵��ԣ������뺯����F11���������ԣ��۲���Ե�ÿ��ϸ��,F9���öϵ��ȡ���ϵ�
//3.dubug�汾���Ե��ԣ�����release�汾����
//4.const int*p��int const*p�ȼۣ�const������*p
//5.����һ��char���ͱ�����ָ��p��p��ֵ���ɱ��޸ģ�const���Σ�����pָ��ı���ֵ���޸�
//  char *const p


//6.��������ż��˳�򣨵�������ʹ����ȫ��λ��ż��ǰ�棩
//����߿�ʼ��һ��ż�������ұ߿�ʼ��һ��������Ȼ������ǽ���

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//�������ż��
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) &&  (arr[right] % 2 == 0))
		{
			right--;
		}
		//���ұ�������
		if (left < right)    //����left<right��Ϊ�˷�ֹԽ��
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}