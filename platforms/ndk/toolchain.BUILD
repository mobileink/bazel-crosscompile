#
# Copyright 2015 Google Inc. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
package(default_visibility = ["//visibility:public"])

filegroup(
    name = "toolchain",
    srcs = [
        # ":cc-compiler-armeabi-v7a",
        ":empty",
        ":everything",
        # "//android-ndk/platforms/android-23/arch-arm:everything",
    ],
)

filegroup(
    name = "empty",
    srcs = [],
)

cc_library(
    name = "malloc",
    srcs = [],
)


filegroup(
    name = "compile",
    srcs = glob(
        [
            # "sysroot/**/*.h",
            # "sysroot/arm-linux-androideabi",
            # "toolchains/arm-linux-androideabi-4.9/prebuilt/darwin-x86_64/**/*.h",
            "platforms/android-23/arch-arm/usr/include/*.h",
        ],
    ),
)

filegroup(
    name = "link",
    srcs = glob(
        [
            "platforms/android-23/arch-arm/usr/lib/**/*.a",
            "platforms/android-23/arch-arm/usr/lib/**/*.o",
            "platforms/android-23/arch-arm/usr/lib/**/*.so",
        ],
    )
)

filegroup(
    name = "everything",
    srcs = [
        ":compile",
        ":link",
        "gcc-arm-android-4.9-toolchain",
    ],
)

filegroup(
    name = "objcopy",
    srcs = [
        "toolchains/arm-linux-androideabi-4.9/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-objcopy"
    ],
)

filegroup(
    name = "strip",
    srcs = [
        "toolchains/arm-linux-androideabi-4.9/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-strip"
    ],
)


filegroup(
    name = "gcc-arm-android-4.9-toolchain",
    srcs = glob([
        "toolchains/arm-linux-androideabi-4.9/**",
    ]),
    output_licenses = ["unencumbered"],
)

filegroup(
    name = "android-armeabi-v7a-files",
    srcs = [
        ":gcc-arm-android-4.9-toolchain",
        ":everything"
    ],
)

################################################################
## x86 clang3.8
filegroup(
    name = "hdrs-clang",
    srcs = glob(
        [
            "sysroot/**/*.h",
            "sysroot/usr/include/**/*.h",
            "sysroot/usr/include/i686-linux-android/**/*.h",
            "sysroot/usr/include/i686-linux-android/asm/*.h",
            "platforms/android-23/arch-x86/usr/include/**/*.h",
            # "toolchains/llvm/prebuilt/darwin-x86_64/lib64/clang/3.8.275480/include/**/*.h"
        ],
    ),
)

filegroup(
    name = "libs-clang",
    srcs = glob(
        [
            "platforms/android-23/arch-x86/usr/lib/**/*.a",
            "platforms/android-23/arch-x86/usr/lib/**/*.o",
            "platforms/android-23/arch-x86/usr/lib/**/*.so",
        ],
    )
)

filegroup(
    name = "arch-x86-static-runtime-libs",
    srcs = glob([
        "platforms/android-23/arch-x86/usr/lib/crt*.o",
        "platforms/android-23/arch-x86/usr/lib/*.a",
    ]),
    output_licenses = ["unencumbered"],
)

filegroup(
    name = "arch-x86-dynamic-runtime-libs",
    srcs = glob([
        "platforms/android-23/arch-x86/usr/lib/**/*.so",
    ]),
    output_licenses = ["unencumbered"],
)

filegroup(
    name = "clang-x86-4.9-toolchain",
    srcs = glob([
        "toolchains/x86-4.9/**"
    ]),
    output_licenses = ["unencumbered"],
)

filegroup(
    name = "everything-clang",
    srcs = [
        ":hdrs-clang",
        ":libs-clang",
        "clang-x86-4.9-toolchain",
    ],
)

filegroup(
    name = "objcopy-clang",
    srcs = [
        "toolchains/x86-4.9/prebuilt/darwin-x86_64/bin/i686-linux-android-objcopy"
    ],
)

filegroup(
    name = "strip-clang",
    srcs = [
        "toolchains/x86-4.9/prebuilt/darwin-x86_64/bin/i686-linux-android-strip"
    ],
)

################################################################
## toolchain: aarch64-linux-android-gcc
filegroup(
    name = "aarch64-linux-android-gcc-toolchain_files",
    srcs = glob(["toolchain_ndk/toolchains/aarch64-linux-android-4.9/prebuilt/darwin-x86_64/**/*"]),
    output_licenses = ["unencumbered"],
)

filegroup(
    name = "aarch64-linux-android-gcc-all_files",
    srcs = [
        ":aarch64-linux-android-gcc-toolchain_files",
    ] + glob([
        "toolchain_ndk/sysroot/usr/include/**/*.h",
        "toolchain_ndk/platforms/android-23/arch-arm64/**/*",
        "toolchain_ndk/sources/cxx-stl/llvm-libc++/libcxx/include/**/*",
        "toolchain_ndk/sources/cxx-stl/llvm-libc++abi/libcxxabi/include/**/*",
        "toolchain_ndk/sources/android/support/include/**/*",
    ]),
)

filegroup(
    name = "libcpp-arm64-v8a-dynamic-runtime-libraries",
    srcs = glob(["ndk/sources/cxx-stl/llvm-libc++/libs/arm64-v8a/*.so"]),
)

filegroup(
    name = "libcpp-arm64-v8a-static-runtime-libraries",
    srcs = glob(["ndk/sources/cxx-stl/llvm-libc++/libs/arm64-v8a/*.a"]),
)

