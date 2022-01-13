cmake_minimum_required(VERSION 3.20)
project(cdv_laby_prog)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(helpers)

function(create_targets lab_nr)
    file(GLOB LAB_FILES CONFIGURE_DEPENDS "*.cpp")
    foreach(source ${LAB_FILES})
        cmake_path(GET source FILENAME fileName)
        cmake_path(GET fileName STEM fileStem)
        add_executable("Lab_${lab_nr}_${fileStem}" ${source})
        target_link_libraries("Lab_${lab_nr}_${fileStem}" PRIVATE helpers)

        add_custom_target("run-${lab_nr}${fileStem}"
        COMMAND "Lab_${lab_nr}_${fileStem}"
        VERBATIM
        USES_TERMINAL)
    endforeach()
endfunction(create_targets)


set(LAB_NUMBERS 02 03 04 05 06)

foreach(LAB IN ITEMS ${LAB_NUMBERS})
    add_subdirectory("Lab_${LAB}")
endforeach(LAB IN ITEMS ${LAB_NUMBERS})