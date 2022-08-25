#include "test1.h"

int call2(int a,int b)
{
	return add(a,b);
}

int main(int argc,char** argv)
{
	call2(1,1);
	return 0;
}
