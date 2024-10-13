#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const string currentMonth() {
    time_t nowMn = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&nowMn);
    strftime(buf, sizeof(buf), "%B", &tstruct);
    return buf;
}

const string currentDay() {
    time_t nowDy = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&nowDy);
    strftime(buf, sizeof(buf), "%A", &tstruct);
    return buf;
}

const string currentDate() {
    time_t nowDt = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&nowDt);
    strftime(buf, sizeof(buf), "%A, %d %B %G", &tstruct);
    return buf;
}

const string currentTime() {
    time_t nowTm = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&nowTm);
    strftime(buf, sizeof(buf), "%H:%M:%S", &tstruct);
    return buf;
}

const string dayInAYear() {
    time_t daYr = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&daYr);
    strftime(buf, sizeof(buf), "%j", &tstruct);
    return buf;
}


int main() {
    int leap, thn, bln, tgl, har;
    int harmun, harke;
    int jam, mnt, dtk;
    string bul, hari, waktu, tanggal;
    float dateCal, persen, permun;

    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);

    thn = 1900 + local_time->tm_year;
    bln = 1 + local_time->tm_mon;
    bul = currentMonth();
    tgl = local_time->tm_mday;
    har = local_time->tm_wday;
    hari = currentDay();
    harke = stoi(dayInAYear());
    tanggal = currentDate();
    waktu = currentTime();
    jam = local_time->tm_hour;
    mnt = local_time->tm_min;
    dtk = local_time->tm_sec;

    if (thn % 400 == 0){
        leap = 366;
    }
    else if (thn % 100 == 0){
        leap = 365;
    }
    else if (thn % 4 == 0){
        leap = 366;
    }
    else {
        leap = 365;
    }

    dateCal = (harke-1)+((float)jam/24)+((float)mnt/1440)+((float)dtk/86400);
    persen = (float)(100*dateCal/leap);
    harmun = 1+leap-harke;
    permun = 100-persen;


    if (hari == "Sunday"){
        har = 7;
    }


    cout<<"Tahun                    : "<<thn<<endl;
    cout<<"Bulan                    : "<<bln<<" ("<<bul<<")"<<endl;
    cout<<"Tanggal                  : "<<tgl<<endl;
    cout<<"Hari                     : "<<har<<" ("<<hari<<")"<<endl;
    cout<<"Hari ke (dalam Setahun)  : "<<harke<<endl;
    cout<<"Sisa Hari (Tahun depan)  : "<<harmun<<endl;
    cout<<"Persentase dalam Setahun : "<<fixed<<setprecision(6)<<persen<<"%"<<endl;
    cout<<"Persentase Hitung Mundur : "<<fixed<<setprecision(6)<<permun<<"%"<<endl;
    cout<<"Jam                      : "<<jam<<endl;
    cout<<"Menit                    : "<<mnt<<endl;
    cout<<"Detik                    : "<<dtk<<endl;

    cout<<endl;
    //cout<<tanggal<<endl;
    cout<<hari<<", "<<tgl<<" "<<bul<<" "<<thn<<endl;
    cout<<"Day-"<<harke<<" ("<<fixed<<setprecision(4)<<persen<<"%)"<<endl;
    cout<<waktu<<endl;

    return 0;
}