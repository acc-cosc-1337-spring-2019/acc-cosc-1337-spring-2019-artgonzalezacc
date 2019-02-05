add_executable(01_module_tests "01_module_test.cpp")
target_link_libraries(sample_auto_library sample_while_library sample_for_library sample_do_while_library 
                      sample_for_ranged_library sample_value_ref_library sample_vectors_library)
