#include<iostream>
using namespace std;
class SpacePort
{
private:
    int razmer;
    int* pointer;
public:
    // ������� ���������, � ������� size ���� �����.
    // ���� ���������� �� 0 �� size-1.
    // � ������ �������� ��� ���� ��������.
    SpacePort(unsigned int size)
    {
        razmer = size;
        pointer = new int[size];
        for (int i = 0; i < size; i++)
        {
            pointer[i] = 0;
        }
    }

    // ��������� ������� � ��� � ������� dockNumber.
    // ���� ������ ���� ��� - ������� false (������ �������).
    // ���� ��� ����, �� ����� - ������� false (������ �������).
    // ���� ��� ���� � �������� - ������� true (���������� �������) � ��� ���������� �����.
    bool requestLanding(unsigned int dockNumber)
    {
        if (dockNumber >= razmer)
        {
            return false;
        }
        if (pointer[dockNumber] == 1)
        {
            return false;
        }
        pointer[dockNumber] = 1;
        return true;
    }
    ~SpacePort()
    {
        delete []pointer;
    }
    // ��������� ���� �� ���� � ������� dockNumber.
    // ���� ������ ���� ��� - ������� false (������ �����).
    // ���� ��� ����, �� ��� ����� - ������� false (������ �����).
    // ���� ��� ���� � � �� ���-�� ����� - ������� true (���������� �����) � ��� ���������� ��������.
    bool requestTakeoff(unsigned int dockNumber)
    {
        if (dockNumber >= razmer)
        {
            return false;
        }
        if (pointer[dockNumber] == 0)
        {
            return false;
        }
        pointer[dockNumber] = 0;
        return true;
    }
};
int main()
{
    SpacePort s(5);
    cout << boolalpha << s.requestLanding(0) << endl;
    cout << boolalpha << s.requestLanding(4) << endl;
    cout << boolalpha << s.requestLanding(5) << endl;

    cout << boolalpha << s.requestTakeoff(0) << endl;
    cout << boolalpha << s.requestTakeoff(4) << endl;
    cout << boolalpha << s.requestTakeoff(5) << endl;
}
