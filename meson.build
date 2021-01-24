
project('pregenerated_arrays', 'c', meson_version: '>=0.53.0')


inc_dir = include_directories('.')
lib_list = {'pg': ['pregenerated_arrays.c' ]}

foreach lib, src : lib_list
    set_variable(lib + '_lib', 
        static_library(lib + '_lib', sources: src, include_directories: inc_dir))
endforeach

pregenerated_arrays_dep = declare_dependency(link_with: pg_lib, include_directories: inc_dir)


