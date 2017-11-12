#include "org_example_hello_HelloApi.h"

#include <stdlib.h>
#include <string.h>

/* verify processing of platform-specific includes */
#include <asm/types.h>

static const char* str = "Hello JNI";

JNIEXPORT jstring JNICALL
Java_org_example_hello_HelloApi_hello (JNIEnv * env, jclass klass)
{
/* Verify that the correct assert.h is included. If we get a warning
   about implicit declaration of function 'static_assert', it means
   we're using the wrong search path. (Bazel's builtin android
   crosstools are broken in this way.) */
#include <assert.h>
       static_assert( 1 == 0, "static assert failed successfully - comment me out and recompile");

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
