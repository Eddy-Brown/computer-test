/*对于长度为6位的一个01串，每一位都可能是0或1，一共有64种可能。它的前几个是：
000000
000001
000010
000011
000100
请按从小到大的顺序输出这64种01串。*/

#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	for(a = 0;a < 2;a++)
	{
		for(b = 0;b < 2;b++)
		{
			for(c = 0;c < 2;c++)
			{
				for(d = 0;d < 2;d++)
				{
					for(e = 0;e < 2;e++)
					{
						for(f = 0;f < 2;f++)
						{
							cout<<a<<b<<c<<d<<e<<f<<endl;
						}
					}
				}
			}
		}
	}
} 
