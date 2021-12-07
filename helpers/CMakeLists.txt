add_library(helpers INTERFACE helpers.h)
target_include_directories(helpers INTERFACE .)
target_compile_features(helpers INTERFACE cxx_std_14)