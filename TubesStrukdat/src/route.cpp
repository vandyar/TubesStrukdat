#include <iostream>
#include "route.h"

using namespace std;

	adrRute newRute(int id) {
		adrRute R = new Rute;
        R->id = id;
        R->next = nullptr;
        return R;
}

adrRute findRute(adrRute head, int id) {
    adrRute p = head;
    while (p) {
        if (p->id == id) return p;
        p = p->next;
    }
    return nullptr;
}

void insertRute(adrRute &head, int id) {
    adrRute R = newRute(id);
    R->next = head;
    head = R;
}

void deleteRute(adrRute &head, int id) {
    adrRute cur = head, prev = nullptr;
    while (cur && cur->id != id) {
        prev = cur;
        cur = cur->next;
    }
    if (!cur) return;
    if (!prev) head = cur->next;
    else prev->next = cur->next;
    delete cur;
}

void showAllRute(adrRute headRute) {
    adrRute r = headRute;
    cout << "Daftar Rute: ";
    while (r) {
        cout << r->id << " ";
        r = r->next;
    }
    cout << endl;
}