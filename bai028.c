// Viết chương trình C nhập vào ngày tháng năm
// 1. Cho biết tháng đó có bao nhiêu ngày
// 2. Tính xem ngày đó là ngày thứ bao nhiêu trong năm
// 3. TÌm ngày trước đó ngày vừa nhập
// 4. Tính ngày kế đó ngày vừa  nhập
#include <stdio.h>
#include <math.h>
int Ngay_cua_thang(int thang, int nam)
{
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        return 31;
        break;
    }
    case 4:
    case 6:
    case 9:
    case 11:
    {
        return 30;
        break;
    }
    case 2:
    {
        return ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) ? 29 : 28;
        break;
    }
    default:
        return -1;
    }
}
int Ngay_Trong_nam(int ngay, int thang, int nam)
{
    int ntn = 0;
    for (int i = 1; i < thang; i++)
    {
        ntn += Ngay_cua_thang(i, nam);
    }
    ntn += ngay;
    return ntn;
}
int ngay_Truoc_do(int ngay, int thang, int nam)
{
    if (ngay == 1)
    {
        if (thang == 1)
        {
            ngay = Ngay_cua_thang(thang, nam);
            thang = 12;
            nam--;
        }
        else
        {
            thang--;
            ngay = Ngay_cua_thang(thang, nam);
        }
    }
    else
    {
        ngay--;
    }
    printf("\nngay truoc do la : %d/%d/%d", ngay, thang, nam);
}
int ngay_Ke_do(int ngay, int thang, int nam)
{
    int nct = Ngay_cua_thang(thang, nam);
    if (ngay == nct)
    {
        if (thang == 12)
        {
            ngay = 1;
            thang = 1;
            nam++;
        }
        else
        {
            ngay = 1;
            thang++;
        }
    }
    else
    {
        ngay++;
    }
    printf("\nngay ke do la : %d/%d/%d", ngay, thang, nam);
}
int main()
{
    int ngay, thang, nam;
    do
    {
        printf("nhap vao ngay thang nam :");
        scanf("%d%d%d", &ngay, &thang, &nam);
    } while ((ngay < 1 || ngay > Ngay_cua_thang(thang, nam)) || (thang < 1 || thang > 12) || nam < 1);
    // 1. tim ngay cua thang
    printf("thang %d co %d ngay ", thang, Ngay_cua_thang(thang, nam));
    // 2. tim ngay trong nam
    printf("\nngay trong nam la : %d", Ngay_Trong_nam(ngay, thang, nam));
    // 3. tim ngay truoc do
    ngay_Truoc_do(ngay, thang, nam);
    // 4. tim ngay ke do
    ngay_Ke_do(ngay, thang, nam);
    return 0;
}