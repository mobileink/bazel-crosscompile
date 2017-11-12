#include "org_example_hello_GoodbyeApi.h"

#include <stdlib.h>
#include <string.h>

static const char* str = "GOODBYE, JNI";

JNIEXPORT jstring JNICALL
Java_org_example_hello_GoodbyeApi_goodbye (JNIEnv * env, jclass klass)
{
    int len = strlen(str);
    jchar *str1;
    str1 = (jchar *)(malloc(len * sizeof(jchar)));

    for (int i = 0; i < len; i++) {
	str1[i] = (unsigned char)str[i];
    }
    jstring result = (*env)->NewString(env, str1, len);
    free(str1);
    return result;
}
