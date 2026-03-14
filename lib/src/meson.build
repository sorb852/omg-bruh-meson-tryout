inc = include_directories('../include/')
sources = ['./board.c', './piece.c']

lib = static_library('FC_lib', sources, include_directories: inc)

FC_lib = declare_dependency(link_with: [lib], include_directories: inc)
