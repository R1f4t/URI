#include <stdio.h>


int main()
{
    int sDay, eDay;
    int sHr,sMin,sSec,eHr,eMin,eSec;

    scanf("%*s %d",&sDay);
    scanf("%d %*s %d %*s %d",&sHr,&sMin,&sSec);
    scanf("%*s %d",&eDay);
    scanf("%d %*s %d %*s %d",&eHr,&eMin,&eSec);

    int start,end,day,hr,mins,sec,tot;

    start=sSec+(sMin*60)+(sHr*3600)+(sDay*3600*24);
    end=eSec+(eMin*60)+(eHr*3600)+(eDay*3600*24);

    tot=end-start;
    day=tot/86400;
    tot%=86400;
    hr=tot/3600;
    tot%=3600;
    mins=tot/60;
    sec=tot%60;


    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hr);
    printf("%d minuto(s)\n",mins);
    printf("%d segundo(s)\n",sec);

    return 0;
}
