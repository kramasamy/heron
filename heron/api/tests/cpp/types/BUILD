package(default_visibility = ["//visibility:public"])

cc_test(
    name = "types_unittest",
    srcs = ["types_unittest.cpp"],
    deps = [
        "//heron/api/src/cpp/types:types-cxx",
        "//third_party/gtest:gtest-cxx",
        "//third_party/cereal:cereal-cxx",
    ],
    copts = [
        "-Iheron/api/src/cpp",
        "-I$(GENDIR)/heron/api/src/cpp",
    ],
    size = "small",
    linkstatic = 1,
)
