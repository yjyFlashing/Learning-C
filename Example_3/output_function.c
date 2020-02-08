#include <stdio.h>
#include <stdlib.h>
int main()
{
   char ch = 'a';
   short a = 121;
   int b = 377;
   double d = 1.0;
   int e = 1;
   int f = -1;
   double g = 123456789873;
   /**
    * d格式符
    * */
   printf("%5d\n%5d\n",12,-345);
   /**
    * c格式符
    * */
   printf("%c\n",ch);
   printf("%5c\n",ch);
   printf("%c\n",a);
   printf("%c\n",b);      //b = 377,使用%c输出时只考虑最后一个字节的信息，即01111001，即十进制的121，故也应当输出y
   /**
    * s格式符
    * */
   printf("%s\n","CHINA");
   /**
    * f格式符
    * */
   /****基本型****/
   printf("%d\n",d/3);
   printf("%f\n",d/3);

      /**
       * 参见P54中的不同类型数据间的混合运算
       * */
      printf("%d\n",e/3);
      printf("%f\n",e/3);
      printf("%f\n",e/3.0);
   /****指定数据宽度和小数位数****/
   printf("%20.15f\n",d/3);   //一个双精度数只能保证15位有效数字的精确度，不能保证50位
   printf("%20.50f\n",d/3);
   /**
    * e格式符
    * */
   printf("%e\n",123.456);
   /**
    * o格式与x格式的区别
    * */
   printf("%d\t%o\t%x\n",f,f,f);
   /**
    * %f,%e和%g的区别
    * */
   printf("%f\t%e\t%g\n",g,g,g);
   system("pause");
   return 0;
}