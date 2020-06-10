# include <android/hardware/naruto/1.0/INaruto.h>

# include <hidl/Status.h>

# include <hidl/LegacySupport.h>

# include <utils/misc.h>

# include <hidl/HidlSupport.h>

# include <stdio.h>

using android::hardware::naruto::V1_0::INaruto;
using android::sp;
using android::hardware::hidl_string;

#define UNUSED(x) (void)(x)

int main()
{
    int ret;

    UNUSED(ret);

    android::sp<INaruto> service = INaruto::getService();
    if(service == nullptr) {
        printf("Failed to get service\n");
        return -1;
    }

    service->helloWorld("JayZhang", [&](hidl_string result) {
                printf("%s\n", result.c_str());
        });

    return 0;
}