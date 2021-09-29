#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int sx,sy,ex,ey,ox,oy;
        cin>>sx>>sy>>ex>>ey>>ox>>oy;
        if(sx==ex)
        {
            if(ox!=sx)
            {
                cout<<abs(ey-sy)<<endl;
            }
            else
            {
                if(abs(oy)>abs(sy)&&abs(oy)<abs(ey)||abs(oy)<abs(sy)&&abs(oy)>abs(ey))
                {
                    cout<<abs(ey-sy)+2<<endl;
                }
                else
                {
                    cout<<abs(ey-sy)<<endl;
                }
            }
        }
        else if(sy==ey)
        {
            if(oy!=sy)
            {
                cout<<abs(ex-sx)<<endl;
            }
            else
            {
                if(abs(ox)>abs(sx)&&abs(ox)<abs(ex)||abs(ox)<abs(sx)&&abs(ox)>abs(ex))
                {
                    cout<<abs(ex-sx)+2<<endl;
                }
                else
                {
                    cout<<abs(ex-sx)<<endl;
                }
            }
        }
        else
        {
            cout<<abs(sx-ex)+abs(sy-ey)<<endl;
        }       
    }
}