#include <Python.h>

static PyObject* simple_greet(PyObject *self, PyObject *args) {
    return Py_BuildValue("s", "Hello from C!");
}

static PyMethodDef SimpleMethods[] = {
    {"greet", simple_greet, METH_NOARGS, "Greet from C function"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef simplemodule = {
    PyModuleDef_HEAD_INIT,
    "simple_pyobject",
    NULL,
    -1,
    SimpleMethods
};

PyMODINIT_FUNC PyInit_simple_pyobject(void) {
    return PyModule_Create(&simplemodule);
}

