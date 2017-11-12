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
    name = "compile",
    srcs = glob(
        [
            "armv8-rpi3-linux-gnueabihf/sysroot/**/*.h",
            # "toolchains/arm-linux-androideabi-4.9/prebuilt/darwin-x86_64/**/*.h",
            # "platforms/android-23/arch-arm/**/*.h",
        ],
    ),
)


filegroup(
  name = 'compiler_pieces',
  srcs = glob([
    'armv7l-tizen-linux-gnueabi/**',
    'libexec/**',
    'lib/gcc/armv7l-tizen-linux-gnueabi/**',
    'include/**',
  ]),
)

filegroup(
    name = "link",
    srcs = glob(
        [
            "armv8-rpi3-linux-gnueabihf/lib/*.a",
            "armv8-rpi3-linux-gnueabihf/sysroot/lib/*.a",
            "armv8-rpi3-linux-gnueabihf/sysroot/usr/lib/**/*.a",
            "lib/gcc/armv8-rpi3-linux-gnueabihf/6.3.0/*.a",

            "armv8-rpi3-linux-gnueabihf/sysroot/usr/lib/*.o",
            "lib/gcc/armv8-rpi3-linux-gnueabihf/6.3.0/*.o",

            "armv8-rpi3-linux-gnueabihf/lib/*.so",
            "armv8-rpi3-linux-gnueabihf/sysroot/lib/*.so",
            "armv8-rpi3-linux-gnueabihf/sysroot/usr/lib/*.so",
            "armv8-rpi3-linux-gnueabihf/sysroot/usr/**/*.so",
            "armv8-rpi3-linux-gnueabihf/sysroot/lib/plugin/*.so",
            "lib/gcc/armv8-rpi3-linux-gnueabihf/6.3.0/**/*.so",
            "lib/*.so",
            "libexec/**/*.so",
        ],
    )
)

filegroup(
    name = "objcopy",
    srcs = [
        "armv8-rpi3-linux-gnueabihf/sysroot/bin/armv8-rpi3-linux-gnueabihf-objcopy"
    ],
)

filegroup(
    name = "strip",
    srcs = [
        "armv8-rpi3-linux-gnueabihf/sysroot/bin/armv8-rpi3-linux-gnueabihf-strip"
    ],
)

filegroup(
    name = "gcc-armv8-toolchain",
    srcs = glob([
        "armv8-rpi3-linux-gnueabihf/**",
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
