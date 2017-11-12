# the toolchain BUILD package defines the filegroups used by CROSSTOOL

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "toolchain_fg",
    srcs = [
        # ":cc-compiler-armeabi-v7a",
        ":empty",
        ":everything",
        # "//android-ndk/platforms/android-23/arch-arm:everything",
    ],
)

cc_library(
    name = "malloc",
    srcs = [],
)

filegroup(
    name = "all-files",
    srcs = [
        ":compiler",
        ":linker",
        ":headers",
        ":x86_64-unknown-linux-gnu-static-runtime-libs",
        ":x86_64-unknown-linux-gnu-dynamic-runtime-libs",
    ],
)

filegroup(
    name = "compiler",
    srcs = glob(
        [
            "bin/x86_64-unknown-linux-gnu-gcc",
            "bin/x86_64-unknown-linux-gnu-as",
            "bin/x86_64-unknown-linux-gnu-ld",
        ],
    ),
)

filegroup(
    name = "linker",
    srcs = ["bin/x86_64-unknown-linux-gnu-gcc",
            "bin/x86_64-unknown-linux-gnu-ar",
            "bin/x86_64-unknown-linux-gnu-ld"],
)

filegroup(
    name = "headers",
    srcs = glob(
        [
            "include/**/*h",
            "lib/gcc/x86_64-unknown-linux-gnu/6.3.0/include/**/*.h",
            "lib/gcc/x86_64-unknown-linux-gnu/6.3.0/include-fixed/**/*.h",
            "x86_64-unknown-linux-gnu/sysroot/include/**/*.h",
            "x86_64-unknown-linux-gnu/sysroot/usr/include/*.h",
            "x86_64-unknown-linux-gnu/sysroot/usr/include/*.h",
            "x86_64-unknown-linux-gnu/include/c++/**",
        ],
    ),
)

# filegroup(
#     name = "compile",
#     srcs = glob(
#         [
#             "x86_64-unknown-linux-gnu/sysroot/**/*.h",
#         ],
#     ),
# )


# filegroup(
#   name = 'compiler_pieces',
#   srcs = glob([
#     'x86_64-unknown-linux-gnu/**',
#     'libexec/**',
#     'lib/gcc/armv7l-tizen-linux-gnueabi/**',
#     'include/**',
#   ]),
# )

filegroup(
    name = "x86_64-unknown-linux-gnu-static-runtime-libs",
    srcs = glob([
        "x86_64-unknown-linux-gnu/lib/gcc/x86_64-unknown-linux-gnu/6.3.0/crt*.o",
        "x86_64-unknown-linux-gnu/x86_64-unknown-linux-gnu/sysroot/usr/lib/crt*.o",
        "x86_64-unknown-linux-gnu/x86_64-unknown-linux-gnu/sysroot/lib/*.a",
        "x86_64-unknown-linux-gnu/x86_64-unknown-linux-gnu/sysroot/usr/lib/*.a"
    ]),
    output_licenses = ["unencumbered"],
)

filegroup(
    name = "x86_64-unknown-linux-gnu-dynamic-runtime-libs",
    srcs = glob([
        # "x86_64-unknown-linux-gnu/x86_64-unknown-linux-gnu/sysroot/usr/lib/crt*.o"
        "x86_64-unknown-linux-gnu/x86_64-unknown-linux-gnu/sysroot/lib/**/*.so",
        "x86_64-unknown-linux-gnu/x86_64-unknown-linux-gnu/sysroot/usr/lib/**/*.so"
    ]),
    output_licenses = ["unencumbered"],
)


# filegroup(
#     name = "link",
#     srcs = glob(
#         [
#             "x86_64-unknown-linux-gnu/lib/*.a",
#             "x86_64-unknown-linux-gnu/sysroot/lib/*.a",
#             "x86_64-unknown-linux-gnu/sysroot/usr/lib/**/*.a",
#             "lib/gcc/x86_64-unknown-linux-gnu/6.3.0/*.a",

#             "x86_64-unknown-linux-gnu/sysroot/usr/lib/*.o",
#             "lib/gcc/x86_64-unknown-linux-gnu/6.3.0/*.o",

#             "x86_64-unknown-linux-gnu/lib/*.so",
#             "x86_64-unknown-linux-gnu/sysroot/lib/*.so",
#             "x86_64-unknown-linux-gnu/sysroot/usr/lib/*.so",
#             "x86_64-unknown-linux-gnu/sysroot/usr/**/*.so",
#             "x86_64-unknown-linux-gnu/sysroot/lib/plugin/*.so",
#             "lib/gcc/x86_64-unknown-linux-gnu/6.3.0/**/*.so",
#             "lib/*.so",
#             "libexec/**/*.so",
#         ],
#     )
# )

filegroup(
    name = "objcopy",
    srcs = [
        "x86_64-unknown-linux-gnu/sysroot/bin/x86_64-unknown-linux-gnu-objcopy"
    ],
)

filegroup(
    name = "strip",
    srcs = [
        "x86_64-unknown-linux-gnu/sysroot/bin/x86_64-unknown-linux-gnu-strip"
    ],
)

filegroup(
    name = "gcc-armv8-toolchain",
    srcs = glob([
        "x86_64-unknown-linux-gnu/**",
    ]),
    output_licenses = ["unencumbered"],
)

filegroup(
    name = "android-armeabi-v7a-files",
    srcs = [
        ":gcc-armv8-toolchain",
        ":everything"
    ],
)

filegroup(
    name = "everything",
    srcs = [
        ":compile",
        ":link"
    ],
)

filegroup(
    name = "empty",
    srcs = [],
)
