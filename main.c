#include "reg52.h"    
 
typedef unsigned int u16;	  
typedef unsigned char u8;	  
 
u8 code led[8]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
 
void delay(u16 t)
{
    u16 x,y;
	  for(x=0;x<t;x++)
	  for(y=0;y<330;y++);
}
void main()
{
	while(1)
	{
	      u16 i;
	      for(i=0;i<8;i++)
	      {
		        P2=led[i];
			      delay(300);//约1s延时
			      P2=0XFF;
		    }
				if(i == 8)
					  i=0;
	}
}

