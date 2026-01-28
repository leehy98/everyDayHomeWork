#include<iostream>

/*	포인터는 주소를 담는 변수
	주소는 heap에 주소를 담는 변수는 stack에
	heap은 할당과 종료를 개발자 본인이 직접 정한다.
	
	TODO :malloc free 알아보기
*/

struct heap
{
	heap()
	{
		std::cout << "call\n";
	};
	~heap()
	{
		std::cout << "end\n";
	};
};
int main()
{
	heap* h = new heap;
	std::cout << "end main\n";
	delete h;
	return 0;
}