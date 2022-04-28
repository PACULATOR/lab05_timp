//
// Created by paculator on 24.04.2022.
//
#include <gtest/gtest.h>
#include "../banking/Account.h"
#include "../banking/Transaction.h"
TEST(Account, int){
    Account usr1(1,123);
    EXPECT_EQ(1,usr1.id());
    EXPECT_EQ(1,usr1.GetBalance());
}
