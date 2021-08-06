/*ex06_59.h*/

template <class T>
T min(T value1, T value2)
{
   if(value1 > value2)
      return value1;
   else if(value2 > value1)
      return value2;
   else
   {
      cout << "value1 = value2 = " << value1;
      return value1;
   }
}
