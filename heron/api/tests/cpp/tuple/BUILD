package(default_visibility = ["//visibility:public"])

cc_test(
    name = "tuple_unittest",
    srcs = ["tuple_unittest.cpp"],
    deps = [
        "//heron/api/src/cpp/types:types-cxx",
        "//heron/api/src/cpp/tuple:tuple-cxx",
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
