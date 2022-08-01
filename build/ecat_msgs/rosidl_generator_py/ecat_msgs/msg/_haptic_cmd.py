# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ecat_msgs:msg/HapticCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'array'
# Member 'btn'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HapticCmd(type):
    """Metaclass of message 'HapticCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ecat_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ecat_msgs.msg.HapticCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__haptic_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__haptic_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__haptic_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__haptic_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__haptic_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HapticCmd(metaclass=Metaclass_HapticCmd):
    """Message class 'HapticCmd'."""

    __slots__ = [
        '_array',
        '_btn',
    ]

    _fields_and_field_types = {
        'array': 'double[7]',
        'btn': 'int32[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'array' not in kwargs:
            self.array = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.array = numpy.array(kwargs.get('array'), dtype=numpy.float64)
            assert self.array.shape == (7, )
        if 'btn' not in kwargs:
            self.btn = numpy.zeros(2, dtype=numpy.int32)
        else:
            self.btn = numpy.array(kwargs.get('btn'), dtype=numpy.int32)
            assert self.btn.shape == (2, )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.array != other.array):
            return False
        if all(self.btn != other.btn):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def array(self):
        """Message field 'array'."""
        return self._array

    @array.setter
    def array(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'array' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'array' numpy.ndarray() must have a size of 7"
            self._array = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'array' field must be a set or sequence with length 7 and each value of type 'float'"
        self._array = numpy.array(value, dtype=numpy.float64)

    @property
    def btn(self):
        """Message field 'btn'."""
        return self._btn

    @btn.setter
    def btn(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'btn' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 2, \
                "The 'btn' numpy.ndarray() must have a size of 2"
            self._btn = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'btn' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._btn = numpy.array(value, dtype=numpy.int32)
