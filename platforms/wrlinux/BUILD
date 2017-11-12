# example in bazel sources:
# /src/test/shell/bazel/testdata/bazel_toolchain_test_data/tools/arm_compiler/BUILD.linaro

cc_toolchain_suite(
    name = "toolchain",
    toolchains = {
        # --cpu | --compiler : <cc_toolchain name>
        "x86_64|gcc": "cc-compiler-linux-gnu",
    },
)


cc_toolchain(
    name = "cc-compiler-linux-gnu",
    cpu = "x86_64",

    # all system binaries, libraries and includes needed
    all_files = "@toolchain_wrlinux//:all-files",

    # gcc, as, and ld?
    compiler_files = "@toolchain_wrlinux//:compiler",

    # ar, gcc, ld?
    linker_files = "@toolchain_wrlinux//:linker",

    # debug stuff - see https://gcc.gnu.org/wiki/DebugFission
    dwp_files = "@toolchain_wrlinux//:empty",

    # runtime files - see libc/gcc crt mini-faq at https://dev.gentoo.org/~vapier/crt.txt
    # also https://gcc.gnu.org/onlinedocs/gccint/Initialization.html

    # a label that references the library files needed to dynamically link
    # the C/C++ runtime (i.e. libgcc_s.so, libstdc++.so) for the target architecture.
    dynamic_runtime_libs = ["@toolchain_wrlinux//:x86_64-unknown-linux-gnu-dynamic-runtime-libs"],

    # a label that references the library files needed to statically link
    # the C/C++ runtime (i.e. crt*.o, libgcc.a, libgcc_eh.a, libstdc++.a, etc.)
    # for the target architecture.
    static_runtime_libs = ["@toolchain_wrlinux//:x86_64-unknown-linux-gnu-static-runtime-libs"],

    objcopy_files = "@toolchain_wrlinux//:objcopy",
    strip_files = "@toolchain_wrlinux//:strip",
    supports_param_files = 1,
    visibility = ["//visibility:public"],
)
