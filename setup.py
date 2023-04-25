from setuptools import setup, Extension

module = Extension('simple_pyobject', sources=['simple_pyobject.c'])

setup(
    name='SimplePyObject',
    version='0.1',
    description='Simple PyObject Example',
    ext_modules=[module],
)

