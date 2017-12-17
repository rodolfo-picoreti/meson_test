project('helloworld', 'cpp', default_options: ['cpp_std=c++11'])
pkg = import('pkgconfig')

dependencies = [
  dependency('libSimpleAmqpClient'),
  dependency('protobuf'),
  dependency('opencv'),
  dependency('boost', modules: ['system', 'filesystem'], static: true)
]

headers = ['helloworld.hpp']

lib = library('helloworld', 'helloworld.cpp', dependencies: dependencies, install: true)

install_headers(headers, subdir: 'helloworld')

pkg.generate(libraries: lib,
             subdirs: headers, 
             version: '1.0',
             name: 'libhelloworld',
             filebase: 'helloworld',
             description: 'A hello lib example.') 
