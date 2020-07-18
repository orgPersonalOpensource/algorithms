/*
	2016-11-15 
		冒泡排序
	2016-11-16
		快速排序

		冒泡的时间复杂度为： 0(n) - 0(n^2)

		快排的时间复杂度为:

		平均复杂度： N(logN)

		最坏复杂度：  0(n^2)
*/
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//
//using namespace std;
//
//int maopao(int *p);
//int initdat(int *p);
//void Printdat(int *p);
//
//int main()
//{
//	int *p = (int*)malloc(sizeof(int) * 10);//开辟内存空间
//
//	initdat(p);//初始化内存空间
//	maopao(p);//排序
//	Printdat(p);//打印
//	
//	return 0;
//}
//
//int initdat(int *p)
//{
//	cout << "\t";
//	cout << "*********************冒泡排序*********************" << endl << endl;
//	int i;
//	cout << "\t";
//	cout << "排序前数字序列：" << endl;
//	cout << "\t\t";
//	srand((unsigned int)time(0));//设置随机数种子
//	for (i = 0;i < 10;i++)
//	{
//		cout << (*p++= 1 + rand() % (100 - 1 + 1)) << "  ";//产生 n~m的数 n+rand()%(m-n+1);
//	}
//
//	cout << endl << endl;
//
//	return 0;
//}
//
//void Printdat(int *p)
//{
//	int i;
//	cout << "\t";
//	cout << "排序后数字序列：" << endl;
//	cout << "\t\t";
//	for (i = 0;i < 10;i++)
//		cout << *p++ << "  ";
//	cout << endl << endl;
//
//}
//
//int maopao(int *p)
//{//从小到大排序
//	int i, j;
//	for (i = 0;i < 10;i++)
//	{
//		int temp = 0;
//		int *q=(int*)malloc(sizeof(int)*10);
//		for (j = i + 1;j < 10;j++)
//		{
//			if (*(p + i) > *(p + j))
//				continue;
//			else
//			{
//				*q = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = *q;
//			}
//		}
//	}
//	
//	return 0;
//}

////快速排序--指针传递参数版本实现
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//
//using namespace std;
//
//void Initdat(int *p,int len);
//void Printdat(int *p, int len, int *key);
//void Kuaipaidat(int *p,int left,int righ);
//
//int main()
//{
//	int key = 0;
//	int len;
//	int left, righ;
//	cout << "请输入排序的数组长度：";
//	cin >> len;
//	int *p = (int*)malloc(sizeof(int) * len);
//	Initdat(p,len);
//	Printdat(p, len,&key);
//	left = 0;
//	righ = len - 1;
//	Kuaipaidat(p,left,righ);
//	Printdat(p, len, &(++key));
//
//	return 0;
//}
//
//void Initdat(int *p,int len)
//{
//	srand((unsigned int)time(0));
//	for (int i = 0;i < len;i++)
//	{
//		*p++ = 1 + rand() % (100 - 1 + 1);
//	}
//
//}
//
//void Printdat(int *p, int len, int *key)
//{
//	if (*key == 0)
//	{
//		cout << endl << "\t";
//		cout << "*********************快速排序*********************" << endl << endl;
//		cout << "\t";
//		cout << "排序前数字序列：" << endl;
//		cout << "\t\t";
//		for (int i = 0;i < len;i++)
//		{
//			cout << *p++ << "  ";
//		}
//		cout << endl << endl;
//	}
//	else
//	{
//		cout << "\t";
//		cout << "排序后数字序列：" << endl;
//		cout << "\t\t";
//		for (int i = 0;i < len;i++)
//		{
//			cout << *p++ << "  ";
//		}
//		cout << endl << endl;
//	}
//
//}
//
void Kuaipaidat(int *p,int left,int righ)
{
	
	if (left < righ)
	{
		int i = left;
		int j = righ;
		int base = *(p + left);
		while (i < j)
		{

			//处理右->左
			while (i < j && (*(p + j)) >= base)// 从右向左找第一个小于x的数
			{
				j--;
			}
			if (i < j)
				*(p + (i++)) = *(p + j);//将righ的值赋值给当前left left++


			//处理左->右
			while (i < j && (*(p + i)) <= base)//从左向右找第一个大于等于x的数
			{
				i++;
			}
			if (i < j)
				*(p + (j--)) = *(p + i);//将left的值赋值给当前righ righ--

		}

		*(p + i) = base;
		Kuaipaidat(p, left, i - 1);
		Kuaipaidat(p, i + 1, righ);
	}
	

}

//快速排序
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//
//#define N 10
//using namespace std;
//
//void Kuaipai(int dat[],int left,int righ);
//
//
//int main()
//{
//	int left, righ;
//	cout << "\t";
//	cout << "**********************快速排序**********************" << endl << endl;
//	cout << "\t";
//	cout << "排序前序列：" << endl;
//	cout << "\t\t";
//	int dat[N];
//	srand((unsigned int)time(0));
//	for (int i = 0;i < N;i++)
//	{
//		cout << (dat[i] = 1 + rand() % (100 - 1 + 1)) << "  ";
//	}
//	cout << endl << endl;
//
//	left = 0;
//	righ = N - 1;
//	Kuaipai(dat, left, righ);
//	cout << "\t";
//	cout << "排序后序列：" << endl;
//	cout << "\t\t";
//	for (int i = 0;i < N;i++)
//		cout << dat[i] << "  ";
//
//	cout << endl << endl;
//
//	return 0;
//}
//
//void Kuaipai(int dat[], int left, int righ)
//{
//	if (left < righ)
//	{	//left<righ 进入循环 开始执行
//
//		int i = left;
//		int j = righ;
//		int base = dat[left];//base 保留基数
//
//		while (i < j)
//		{
//			while (i < j&&dat[j] >= base)//从右往左查找 找到第一个小于base的数 退出循环 否则继续向前查找
//			{
//				j--;
//			}
//			if (i < j)
//				dat[i++] = dat[j];//将查找的第一个小于base的数字 存入dat[left]位置
//
//			while (i < j&&dat[i] <= base)//从左往右查找 找到第一个大于base的数 退出循环 否则继续向前查找
//			{
//				i++;
//			}
//			if (i < j)
//				dat[j--] = dat[i];
//		}
//		dat[i] = base;
//
//		Kuaipai(dat, left, i - 1);//左半部分的处理
//		Kuaipai(dat, i + 1, left);//右半部分的处理
//
//	}
//
//
//}

//#include<iostream>
//#include <time.h>
//#include <stdlib.h>
//
//using namespace std;
//
//void maopao(int dat[]);
//void kuaipai(int dat[], int left, int righ);
//
//int main()
//{
//	int dat[10] = { 0 };
//	//cout << endl << "\t" << "*******************冒泡排序*******************" << endl;
//	cout << endl << "\t" << "*******************快速排序*******************" << endl;
//	cout << "\t排序前数列：" << endl;
//	cout << "\t\t";
//	srand((unsigned int)time(0));
//	for (int i = 0;i < 10;i++)
//	{
//		cout << (dat[i] = 1 + rand() % (100 - 1 + 1)) << "  ";
//	}
//	cout << endl << endl;
//
//	//maopao(dat);
//	kuaipai(dat, 0, 9);
//
//	cout << "\t排序后数列：" << endl;
//	cout << "\t\t";
//	for (int i = 0;i < 10;i++)
//	{
//		cout << dat[i] << "  ";
//	}
//	cout << endl << endl;
//
//	return 0;
//}
//
//void maopao(int dat[])
//{
//	int i, j;
//	for (i = 0;i < 10;i++)
//	{
//		for (j = i + 1;j < 10;j++)
//		{
//			if (dat[j-1] > dat[j])
//			{
//				int temp = dat[j - 1];
//				dat[j - 1] = dat[j];
//				dat[j] = temp;
//			}
//		}
//	}
//}
//
//
//void kuaipai(int dat[], int left, int righ)
//{
//	if (left < righ)//判断left righ成立 开始执行
//	{
//		int i = left;
//		int j = righ;
//		int base = dat[left];//base作为基数
//
//		while (i < j) //i<j
//		{
//			while (i < j&&dat[j] >= base) //r-l 查找第一个小于base的数 找到就退出--循环
//				j--;
//			if (i < j)//判断指针位置
//				dat[i++] = dat[j];//第一个小于base的数字赋给dat[left] 同时i++指向后一个数
//
//			while (i < j&&dat[i] <= base)//l-r 查找第一个大于base的数 找到就退出循环
//				i++;
//			if (i < j)//判断指针位置
//				dat[j--] = dat[i];//第一个大于base的数字赋值给dat[righ] 同时j-- 指向前一个数
//		}
//
//		dat[i] = base;
//		kuaipai(dat, left, i - 1);//左边数字的处理
//		kuaipai(dat, i + 1, righ);//右边数字的处理
//	}
//}

/*
	2016-11-17
		直接选择排序
*/
//#include<iostream>
//#include <time.h>
//#include <stdlib.h>
//
//using namespace std;
//
//void xuanze(int dat[]);
//
//int main()
//{
//	int dat[10] = { 0 };
//	cout << endl << "\t" << "*******************选择排序*******************" << endl;
//	cout << "\t排序前数列：" << endl;
//	cout << "\t\t";
//	srand((unsigned int)time(0));
//	for (int i = 0;i < 10;i++)
//	{
//		cout << (dat[i] = 1 + rand() % (100 - 1 + 1)) << "  ";
//	}
//	cout << endl << endl;
//
//	xuanze(dat);//选择排序
//
//	cout << "\t排序后数列：" << endl;
//	cout << "\t\t";
//	for (int i = 0;i < 10;i++)
//	{
//		cout << dat[i] << "  ";
//	}
//	cout << endl << endl;
//
//	return 0;
//}
//
//void xuanze(int dat[])
//{
//	for (int i = 0;i < 10;i++)
//	{
//		for (int j = i + 1;j < 10;j++)
//		{
//			if (dat[i] > dat[j])
//			{
//				dat[i] = dat[i] + dat[j];// 30=10+20
//				dat[j] = dat[i] - dat[j];// 10=30-20
//				dat[i] = dat[i] - dat[j];// 20=30-10
//			}
//		}
//	}
//
//}

/*
	堆排序
*/

