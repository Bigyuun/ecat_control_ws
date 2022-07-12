# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ecat_msgs:msg/DataSent.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'target_pos'
# Member 'target_vel'
# Member 'target_tor'
# Member 'control_word'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DataSent(type):
    """Metaclass of message 'DataSent'."""

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
                'ecat_msgs.msg.DataSent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__data_sent
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__data_sent
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__data_sent
            cls._TYPE_SUPPORT = module.type_support_msg__msg__data_sent
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__data_sent

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DataSent(metaclass=Metaclass_DataSent):
    """Message class 'DataSent'."""

    __slots__ = [
        '_header',
        '_target_pos',
        '_target_vel',
        '_target_tor',
        '_control_word',
        '_op_mode',
        '_vel_offset',
        '_tor_offset',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'target_pos': 'sequence<int32>',
        'target_vel': 'sequence<int32>',
        'target_tor': 'sequence<int16>',
        'control_word': 'sequence<uint16>',
        'op_mode': 'uint8',
        'vel_offset': 'int32',
        'tor_offset': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.target_pos = array.array('i', kwargs.get('target_pos', []))
        self.target_vel = array.array('i', kwargs.get('target_vel', []))
        self.target_tor = array.array('h', kwargs.get('target_tor', []))
        self.control_word = array.array('H', kwargs.get('control_word', []))
        self.op_mode = kwargs.get('op_mode', int())
        self.vel_offset = kwargs.get('vel_offset', int())
        self.tor_offset = kwargs.get('tor_offset', int())

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
        if self.header != other.header:
            return False
        if self.target_pos != other.target_pos:
            return False
        if self.target_vel != other.target_vel:
            return False
        if self.target_tor != other.target_tor:
            return False
        if self.control_word != other.control_word:
            return False
        if self.op_mode != other.op_mode:
            return False
        if self.vel_offset != other.vel_offset:
            return False
        if self.tor_offset != other.tor_offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def target_pos(self):
        """Message field 'target_pos'."""
        return self._target_pos

    @target_pos.setter
    def target_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'target_pos' array.array() must have the type code of 'i'"
            self._target_pos = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'target_pos' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._target_pos = array.array('i', value)

    @property
    def target_vel(self):
        """Message field 'target_vel'."""
        return self._target_vel

    @target_vel.setter
    def target_vel(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'target_vel' array.array() must have the type code of 'i'"
            self._target_vel = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'target_vel' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._target_vel = array.array('i', value)

    @property
    def target_tor(self):
        """Message field 'target_tor'."""
        return self._target_tor

    @target_tor.setter
    def target_tor(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'target_tor' array.array() must have the type code of 'h'"
            self._target_tor = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'target_tor' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._target_tor = array.array('h', value)

    @property
    def control_word(self):
        """Message field 'control_word'."""
        return self._control_word

    @control_word.setter
    def control_word(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'control_word' array.array() must have the type code of 'H'"
            self._control_word = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'control_word' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._control_word = array.array('H', value)

    @property
    def op_mode(self):
        """Message field 'op_mode'."""
        return self._op_mode

    @op_mode.setter
    def op_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'op_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'op_mode' field must be an unsigned integer in [0, 255]"
        self._op_mode = value

    @property
    def vel_offset(self):
        """Message field 'vel_offset'."""
        return self._vel_offset

    @vel_offset.setter
    def vel_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel_offset' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vel_offset' field must be an integer in [-2147483648, 2147483647]"
        self._vel_offset = value

    @property
    def tor_offset(self):
        """Message field 'tor_offset'."""
        return self._tor_offset

    @tor_offset.setter
    def tor_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tor_offset' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'tor_offset' field must be an integer in [-32768, 32767]"
        self._tor_offset = value
