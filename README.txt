我们的作业内容：

1、定义一个基类MyArray,基类中可以存放一组数组。

Class MyArray

{  

   int array[10];

   int length;

 public:

   MyArray( int len);

   ~MyArray();

   void input();

   void display();

};

编写构造函数，析构函数及其它函数，数据输入输出等功能。

2．定义一个类averArray继承自myArray，在类中求数组的平均值，并输出。

3．定义一个类revArray继承自 myArray, 使数组按反序存放，并输出。

4. 定义一个类NewArray继承自averArray和revArray。在继承过程中声明为虚基类，体会虚基类在解决二义性中的问题中的作用。调试中可以试一试不用虚基类出现的问题。

 