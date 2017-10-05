

#include <iostream>
#include <sys/time.h>
constexpr size_t size=128*1024*1024;







int sum(char* p, int count)
{
  int s = 0;
  int ofs = 0;
  while(count-- > 0)
    {
      ofs += rand();
      ofs = ofs % size;
      s += *(p+ofs);
      if (*(p+ofs)>0)
	ofs += 128;
    }
  return s;
}

int sum2(char* p, char* p1, int count)
{
  int s = 0;
  int s1 = 0;
  int ofs = 0;
  int ofs1 = 0;
  while(count-- > 0)
    {
      int r = rand();
      int r1= rand();
      ofs += r;
      ofs = ofs % size;
      s += *(p+ofs);
      if (*(p+ofs)>0)
	ofs += 128;

      ofs1 += r1;
      ofs1 = ofs1 % size;
      s1 += *(p1+ofs1);
      if (*(p1+ofs1)>0)
	ofs1 += 128;
      
      
    }
  return s+s1;
}

int sum3(char* p, char* p1, char* p2, int count)
{
  int s = 0;
  int s1 = 0;
  int s2 = 0;
  int ofs = 0;
  int ofs1 = 0;
  int ofs2 = 0;
  while(count-- > 0)
    {
      int r = rand();
      int r1 = rand();
      int r2 = rand();
      
      ofs += r;
      ofs = ofs % size;
      s += *(p+ofs);
      if (*(p+ofs)>0)
	ofs += 128;

      ofs1 += r1;
      ofs1 = ofs1 % size;
      s1 += *(p1+ofs1);
      if (*(p1+ofs1)>0)
	ofs1 += 128;
      
      ofs2 += r2;
      ofs2 = ofs2 % size;
      s2 += *(p2+ofs2);
      if (*(p2+ofs2)>0)
	ofs2 += 128;
      
    }
  return s+s1+s2;
}
