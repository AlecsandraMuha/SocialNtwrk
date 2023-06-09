#include <iostream>
#include "RepoforFriends.h"
#include "RepoForUser.h"
#include "RepoForMessage.h"
#include "Network.h"
#include "Tests.h"
#include "Console.h"

int main() {
    testUser();
    testRepo();
    testNetwork();
    RepoForUser repo;
    User u1(1, "ana");
    User u2(2, "cristina");
    User u3(3, "oana");
    User u4(4, "carina");
    User u5(5, "irina");
    User u6(6, "leonardo");
    User u7(7, "cristi");
    User u8(8, "sergiu");
    User u9(9, "alex");
    User u10(10, "ionut");
    User u11(11, "liliana");
    User u12(12, "cloe");
    User u13(13, "ileana");
    User u14(14, "ioana");
    User u15(15, "denisa");
    repo.addUser(u1);
    repo.addUser(u2);
    repo.addUser(u3);
    repo.addUser(u4);
    repo.addUser(u5);
    repo.addUser(u6);
    repo.addUser(u7);
    repo.addUser(u8);
    repo.addUser(u9);
    repo.addUser(u10);
    repo.addUser(u11);
    repo.addUser(u12);
    repo.addUser(u13);
    repo.addUser(u14);
    repo.addUser(u15);
    RepoForMessage repo2;
    Message m1(1, "hei", u1, u2);
    Message m2(2, "ce", u1, u3);
    Message m3(3, "hei", u2, u3);
    Message m4(4, "hei", u2, u5);
    Message m5(5, "salut", u3, u2);
    Message m6(6, "cum", u3, u2);
    Message m7(7, "hei", u4, u6);
    Message m8(8, "hei", u6, u4);
    Message m9(9, "hei", u5, u7);
    Message m10(10, "hei", u7, u5);
    Message m11(11, "cum e?", u8, u9);
    Message m12(12, "hei", u8, u10);
    Message m13(13, "hei", u10, u9);
    Message m14(14, "ce", u10, u8);
    Message m15(15, "hei", u9, u11);
    Message m16(16, "hei", u11, u9);
    Message m17(17, "hei", u9, u2);
    Message m18(18, "hei", u4, u9);
    Message m19(19, "hei", u7, u12);
    Message m20(20, "hei", u12, u7);
    Message m21(21, "hei", u12, u13);
    Message m22(22, "hei", u13, u12);
    Message m23(23, "hei", u13, u14);
    Message m24(24, "hei", u14, u13);
    Message m25(25, "hei", u14, u15);
    Message m26(26, "hei", u15, u7);
    Message m27(27, "hei", u7, u1);
    Message m28(28, "hei", u1, u2);
    repo2.addMessage(m1);
    repo2.addMessage(m2);
    repo2.addMessage(m3);
    repo2.addMessage(m4);
    repo2.addMessage(m5);
    repo2.addMessage(m6);
    repo2.addMessage(m7);
    repo2.addMessage(m8);
    repo2.addMessage(m9);
    repo2.addMessage(m10);
    repo2.addMessage(m11);
    repo2.addMessage(m12);
    repo2.addMessage(m13);
    repo2.addMessage(m14);
    repo2.addMessage(m15);
    repo2.addMessage(m16);
    repo2.addMessage(m17);
    repo2.addMessage(m18);
    repo2.addMessage(m19);
    repo2.addMessage(m20);
    repo2.addMessage(m21);
    repo2.addMessage(m22);
    repo2.addMessage(m23);
    repo2.addMessage(m24);
    repo2.addMessage(m25);
    repo2.addMessage(m26);
    repo2.addMessage(m27);
    repo2.addMessage(m28);
    //repo2.addMessage(m29);
    RepoFriendship<Friendship> repo3;
    Friendship f1(u1, u2);
    Friendship f2(u2, u1);
    Friendship f3(u3, u1);
    Friendship f4(u1, u3);
    Friendship f5(u3, u2);
    Friendship f6(u2, u3);
    Friendship f7(u4, u6);
    Friendship f8(u6, u4);
    Friendship f9(u5, u7);
    Friendship f10(u7, u5);
    Friendship f11(u7, u12);
    Friendship f12(u4, u9);
    Friendship f13(u9, u4);
    Friendship f14(u12, u7);
    Friendship f15(u12, u13);
    Friendship f16(u11, u9);
    Friendship f17(u9, u11);
    Friendship f18(u13, u12);
    Friendship f19(u11, u15);
    Friendship f20(u15, u11);
    Friendship f21(u8, u10);
    Friendship f22(u10, u8);
    Friendship f23(u8, u9);
    Friendship f24(u9, u8);
    Friendship f25(u13, u14);
    Friendship f26(u14, u13);
    Friendship f27(u11, u10);
    Friendship f28(u10, u11);
    Friendship f29(u14, u15);
    Friendship f30(u15, u14);
    repo3.add(f1);
    repo3.add(f2);
    repo3.add(f3);
    repo3.add(f4);
    repo3.add(f5);
    repo3.add(f6);
    repo3.add(f7);
    repo3.add(f8);
    repo3.add(f9);
    repo3.add(f10);
    repo3.add(f11);
    repo3.add(f12);
    repo3.add(f13);
    repo3.add(f14);
    repo3.add(f15);
    repo3.add(f16);
    repo3.add(f17);
    repo3.add(f18);
    repo3.add(f19);
    repo3.add(f20);
    repo3.add(f21);
    repo3.add(f22);
    repo3.add(f23);
    repo3.add(f24);
    repo3.add(f25);
    repo3.add(f26);
    repo3.add(f27);
    repo3.add(f28);
    repo3.add(f29);
    repo3.add(f30);
    Network net(repo,repo2,repo3 );
    Console console(net);
    console.showMenu();
    return 0;
}
