// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ecat_msgs:msg/GuiButtonData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ecat_msgs/msg/detail/gui_button_data__struct.h"
#include "ecat_msgs/msg/detail/gui_button_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ecat_msgs__msg__gui_button_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ecat_msgs.msg._gui_button_data.GuiButtonData", full_classname_dest, 44) == 0);
  }
  ecat_msgs__msg__GuiButtonData * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // b_init_ecat
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_init_ecat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_init_ecat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_reinit_ecat
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_reinit_ecat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_reinit_ecat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_enable_drives
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_enable_drives");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_enable_drives = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_disable_drives
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_disable_drives");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_disable_drives = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_enable_cyclic_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_enable_cyclic_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_enable_cyclic_pos = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_enable_cyclic_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_enable_cyclic_vel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_enable_cyclic_vel = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_enable_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_enable_vel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_enable_vel = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_enable_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_enable_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_enable_pos = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_enter_cyclic_pdo
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_enter_cyclic_pdo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_enter_cyclic_pdo = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_emergency_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_emergency_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_emergency_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_send
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_send");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_send = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b_stop_cyclic_pdo
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_stop_cyclic_pdo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b_stop_cyclic_pdo = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spn_target_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "spn_target_values");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->spn_target_values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->spn_target_values.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'spn_target_values'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->spn_target_values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->spn_target_values.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ecat_msgs__msg__gui_button_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GuiButtonData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ecat_msgs.msg._gui_button_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GuiButtonData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ecat_msgs__msg__GuiButtonData * ros_message = (ecat_msgs__msg__GuiButtonData *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_init_ecat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_init_ecat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_init_ecat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_reinit_ecat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_reinit_ecat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_reinit_ecat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_enable_drives
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_enable_drives);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_enable_drives", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_disable_drives
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_disable_drives);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_disable_drives", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_enable_cyclic_pos
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_enable_cyclic_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_enable_cyclic_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_enable_cyclic_vel
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_enable_cyclic_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_enable_cyclic_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_enable_vel
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_enable_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_enable_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_enable_pos
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_enable_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_enable_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_enter_cyclic_pdo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_enter_cyclic_pdo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_enter_cyclic_pdo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_emergency_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_emergency_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_emergency_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_send
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_send);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_send", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_stop_cyclic_pdo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b_stop_cyclic_pdo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_stop_cyclic_pdo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spn_target_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "spn_target_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->spn_target_values.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->spn_target_values.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->spn_target_values.size * sizeof(int32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
