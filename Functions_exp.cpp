#include<iostream>
using  namespace std;

//1.
//void res()
//{
//	static int i=1;
//	int a=1;
//	i++;
//	a++;
//	cout<<i<<" "<<a<<endl;
//}
//
//int main()
//{
//	res();
//	res();
//	res();
//	
//	return 0;
//}


//2.
//void shit( int x, int y, int z)
//{
//	cout<<x<<" "<<y<<" "<<z<<endl;
//	
//}
//
//int main()
//{
//	int i=2;
//	shit(++i,++i,++i);
//	return 0;
//}


//3.
void cum(int x)
{
	if(x==0)
	return;
	else
	{
		cout<<"PENIS"<<" ";
		cum(x-1);
	}
	
}

int main()
{
	
	cum(3);
	return 0;
}






