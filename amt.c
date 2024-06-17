#include<stdio.h>
int main()
{
    int rate,qty,amt,dis,bill_amt,gst,net_amt;
	printf("enter rate=");
	scanf("%d",&rate);
	printf("enter qty=");
	scanf("%d",&qty);
	amt=rate*qty;
	dis=amt*6/100;
	bill_amt=amt-dis;
	gst=bill_amt*12/100;
	net_amt=bill_amt+gst;
	printf("rate\tqty\tamt\tdis\tbill_amt\tgst\tnet_amt\n");
	printf("%d\t%d\t%d\t%d\t%d\t\t%d\t%d",rate,qty,amt,dis,bill_amt,gst,net_amt);
	
	
}