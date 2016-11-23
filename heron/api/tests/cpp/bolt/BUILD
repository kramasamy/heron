package(default_visibility = ["//visibility:public"])

cc_test(
    name = "IBolt_unittest",
    srcs = ["IBolt_unittest.cpp"],
    deps = [
        "//heron/api/src/cpp/types:types-cxx",
        "//heron/api/src/cpp/tuple:tuple-cxx",
        "//heron/api/src/cpp/bolt:bolt-cxx",
        "//third_party/gtest:gtest-cxx",
    ],
    copts = [
        "-Iheron/api/src/cpp",
        "-I$(GENDIR)/heron/api/src/cpp",
    ],
    size = "small",
    linkstatic = 1,
)
