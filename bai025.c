//Viết chương trình nhập vào tọa độ 3 đỉnh của tam giác ABC. Hãy thực hiện các yêu cầu sau đây:
//a, Kiểm tra 3 điểm A, B, C có tạo thành tam giác hay không?
//Nếu A, B, C tạo thành tam giác thì tiếp tục các yêu cầu dưới đây:
//b, Kiểm tra tam giác ABC có phải là tam giác cân hay không?
//c, Tính và xuất ra màn hình chu vi của tam giác ABC
//d, Tính và xuất ra man hình diện tích của tam giác ABC
#include <stdio.h>
#include <math.h>
int main()
{
    // khai báo biến
    float xa, ya, xb, yb, xc, yc;
    float AB, BC, CA;
    float dientich, chuvi, p;
    // nhập dữ liệu
    printf("nhap toa do A:");
    scanf("%f%f", &xa, &xb);
    printf("nhap toa do B :");
    scanf("%f%f", &xb, &yb);
    printf("nhap toa so C :");
    scanf("%f%f", &xc, &yc);
    // xử lí và in kết quả
    AB = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
    BC = sqrt(pow((xb - xc), 2) + pow((yb - yc), 2));
    CA = sqrt(pow((xc - xa), 2) + pow((yc - ya), 2));
    printf("AB = %.2f, BC = %.2f, CA=%.2f", AB, BC, CA);
    if (AB + BC > CA && BC + CA > AB && AB + CA > BC)
    {
        printf("\nABC la tam giac !");
        if (AB == BC || BC == CA || AB == CA)
        {
            printf("\nABC la tam giac can !");
        }
        else
        {
            printf("\nABC khong la tam giac can !");
        }
        // tính chu vi
        chuvi = AB + BC + CA;
        printf("\nchu vi = %.2f", chuvi);
        // tính diện tích công thức herong
        p = chuvi / 2;
        dientich = sqrt(p * (p - AB) * (p - BC) * (p - CA));
        printf("\ndien tich = %.2f", dientich);
    }
    else
    {
        printf("\nABC khong la tam giac !");
    }

    return 0;
}
