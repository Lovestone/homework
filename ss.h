//define my class--MyArray
//writen by 192101-01李汉

class MyArray
{
public:
	MyArray (int leng);
	~MyArray();
	void Input();
	void Display();
protected:
	int* alist;
	int length;
};

MyArray::MyArray(int leng)
{
	alist=new int [length=leng];
	for(int i=0; i<length;i++)
	{*(alist+i)=0;}
}

MyArray::~MyArray()
{delete alist;}


void MyArray::Input()
{
	std::cout<<"请依次输入每个数字\n";
	for(int y=0;y<length;y++)
		std::cin>>*(alist+y);
}


void MyArray::Display()
{ 
	std::cout<<"Now, the numbers are:\n";
	for(int t=0;t<length;t++)
		std::cout<<*(alist+t)<<std::endl;
	std::cout<<"Press \"Enter\" to continue"<<std::endl;
	getchar();
	getchar();
	system("cls");
}




class SortArray: public MyArray  //从小到大排序
{
public:
	void Sort()
	{
		for(int i=0;i<length-1;i++)
		{
			for(int j=i+1;j<length;j++)
		
			{
				if(*(alist+i)>*(alist+j))
		
				{
					int temp=*(alist+i); *(alist+i)=*(alist+j);*(alist+j)=temp;
				}
			}
		}
	}
    SortArray(int leng):MyArray (leng){}
};



class ReArray:public MyArray  //逆转
{
public:
    ReArray(int leng):MyArray (leng){}
	void Re()
	{
		for(int i=0;i<(length/2);i++)
		{
			int temp=*(alist+i);
			*(alist+i)=*(alist+length-i-1);
			*(alist+length-i-1)=temp;
		}
	}
};


class AverArray:public MyArray
{
private:
	double aver;
public:
	AverArray(int leng):MyArray (leng){}
	void Aver()
	{
		int Sum=0;
		for(int i=0;i<length;i++)
			Sum+=*(alist+i);
		aver=(double)Sum/length;
	}
	void show()
	{
		cout<<"the average is:"<<aver()<<endl;
	
};
			
	

