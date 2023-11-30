#include <iostream>
using namespace std;

class MayXucTac {
private:
    
    float congSuatLoc;
    float luongHoaChat;
    float thoiGianHoatDong;

public:
    static const int DON_GIA_THUE = 80000;
    static const int DON_GIA_HOA_CHAT = 10000;
    void nhap() {
        cout << "Nhap cong suat loc (m3/h): ";
        cin >> congSuatLoc;
        cout << "Nhap luong hoa chat (g): ";
        cin >> luongHoaChat;
        cout << "Nhap thoi gian hoat dong (h): ";
        cin >> thoiGianHoatDong;
    }

    float tinhCongSuatLocThucTe() {
        if (thoiGianHoatDong < 10)
            return congSuatLoc * (luongHoaChat / 100);
        else
            return congSuatLoc * (luongHoaChat / 100) / (thoiGianHoatDong / 10);
    }

    float tinhLuongNuoc() {
        return tinhCongSuatLocThucTe() * thoiGianHoatDong;
    }

    double tinhChiPhi() {
        double chiPhiThue = DON_GIA_THUE * thoiGianHoatDong;
        double chiPhiHoaChat = DON_GIA_HOA_CHAT * luongHoaChat;
        return chiPhiThue + chiPhiHoaChat;
    }
};

int main() {
    cout << "Don gia hoa chat: " << MayXucTac::DON_GIA_HOA_CHAT << endl;
    MayXucTac m;
    m.nhap();
    cout << "Chi phi su dung may: " << m.tinhChiPhi() << endl;
    cout << "Luong nuoc loc duoc: " << m.tinhLuongNuoc() << endl;

    return 0;
}