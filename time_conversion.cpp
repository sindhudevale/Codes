#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    string hour = time.substr(0, 2);
    string min = time.substr(3, 2);
    string sec = time.substr(6, 2);
    string value = time.substr(8, 2);
    int h = atoi(hour.c_str());   
    int m = atoi(min.c_str());
    int s = atoi(sec.c_str());    
    int s_count=0;
    int m_count=0;
    int h_count=0;
    string s_res, m_res, h_res;
    
    if(s>60)
        {
        while(s>60)
            {
            s = s - 60;
            s_count++;
        }
    }
    if(s<10)
        s_res = "0" + to_string(s);
    else
        s_res = to_string(s);
    m = m + s_count;
    if(m>60)
        {
        while(m>60)
            {
            m = m - 60;
            m_count++;
        }
    }
    if(m<10)
        m_res = "0" + to_string(m);
    else
        m_res = to_string(m);
    h = h + m_count;
    
    if(value=="PM")
        h = h + 12;
        
    if(h==12)
        h = 0;
    if(h==24)
        h = 12;
   
    if(h<10)
        h_res = "0" + to_string(h);
    else
        h_res = to_string(h);
    string result = h_res + ":" + m_res + ":" + s_res;
    cout<<result;
    return 0;
}


