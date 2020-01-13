cmake_minimum_required(VERSION 3.0) # minimal version of cmake, a lower version of cmake could still work though...

project(template) # name of the project

# all  directories in which .h files are stored
include_directories(
        ./include
        ./libs/Catch2/single_include
)

# Catch2 is the lib use to create unit test it only require the include of a unique .h file

# fmt is a library that allow the access to a format function
# it must be built along the project and it contains a CMakeLists.txt file

add_subdirectory(libs/fmt) # add a subdirectory containing a CMakeLists.txt

# sources files
# list called 'source_files' that contains all files that must be built with executables
# These files DO NOT contain a main method
set(
        source_files
        ./src/template/methods.cpp
        ./src/template/sub_methods.cpp
        )

# test files
# list called 'test_files' that contains all files that themselves contain test
set(test_files
        test/template/methods_test.cpp
        test/template/sub_methods_test.cpp
        )

# target

# Here we declare all execubales that must be built.
# One executable = one main method

# template to declare an executable:
# add_executable(
#       name_of_the_executable
#       path_to_file_containing_main_method
#       all_cpp_files_containing_code_used_by_main
# )

# Since we declared a list called 'source_files' we can replace the list of cpp files by its content using ${source_files}
# All these files will be built along the one containing the main method
# it is possible to declare multiple list or place them by hand at each executable

add_executable(
        test_executable
        ./test/main.cpp
        ${test_files}
        ${source_files}
)
# target_link_libraries(test_executable fmt::fmt) # useless because test_executable does not use fmt

add_executable(
        main_executable
        src/hello.cpp
        ${source_files}
)
target_link_libraries(main_executable fmt::fmt) # add this because main_executable use fmt library

# no need for test files in the main because it does not use them
