#include <stdio.h>

//结构体空间


//// 1.
//
//struct student
//{
//	int num;
//	char name[32];
//	float score;
//};
////struct是结构体关键字类型
////struct student是用户定义的结构体类型
////num，score都是结构体成员名
////stu通过上面类型定义的一个结构体变量名

////2.要求输出结构体中成员a的数据，printf中该填什么
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	//struct S *合成一个结构体指针，第一个a是结构体变量，把第二个a的地址放在p中
//	a.a = 99;
//	printf("%d\n", (*p).a);
//	//可以填a.a , p->a , (*p).a  这里*p.a不行，因为.的优先级高于*
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
//	//studetns这里指首元素地址，加1就变成了第二个元素的地址
//	//结果 - wang
//	return 0;
//}

//4.结构体访问成员的操作符包括：.操作符  ->操作符（箭头）  *解引用操作符

////5.喝汽水问题 - 一瓶汽水1元，两个空瓶可以换一瓶汽水，给20元，可以有多少汽水
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	//法一:
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	////法二：
//	//if (money == 0)
//	//	total = 0;
//	//else
//	//	total = 2 * money - 1;
//	printf("%d元能喝到的汽水数量为%d\n", money, total);
//	return 0;
//}

//调试技巧作业

//1.c程序常见的错误：编译错误，链接错误，运行时错误
//2.F5是启动调试，F10逐过程调试，不进入函数；F11是逐语句调试，观察测试的每个细节,F9设置断点或取消断点
//3.dubug版本可以调试，但是release版本不能
//4.const int*p与int const*p等价，const都修饰*p
//5.声明一个char类型变量的指针p，p的值不可被修改（const修饰），但p指向的变量值可修改
//  char *const p


//6.调整奇数偶数顺序（调整数组使奇数全部位于偶数前面）
//从左边开始找一个偶数，从右边开始找一个奇数，然后把他们交换

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边找偶数
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) &&  (arr[right] % 2 == 0))
		{
			right--;
		}
		//从右边找奇数
		if (left < right)    //这里left<right是为了防止越界
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