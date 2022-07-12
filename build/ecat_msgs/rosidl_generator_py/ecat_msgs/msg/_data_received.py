# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ecat_msgs:msg/DataReceived.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'slave_com_status'
# Member 'actual_pos'
# Member 'actual_vel'
# Member 'actual_tor'
# Member 'status_word'
# Member 'op_mode_display'
# Member 'error_code'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DataReceived(type):
    """Metaclass of message 'DataReceived'."""

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
                'ecat_msgs.msg.DataReceived')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__data_received
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__data_received
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__data_received
            cls._TYPE_SUPPORT = module.type_support_msg__msg__data_received
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__data_received

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


class DataReceived(metaclass=Metaclass_DataReceived):
    """Message class 'DataReceived'."""

    __slots__ = [
        '_header',
        '_com_status',
        '_slave_com_status',
        '_actual_pos',
        '_actual_vel',
        '_actual_tor',
        '_status_word',
        '_op_mode_display',
        '_error_code',
        '_current_lifecycle_state',
        '_left_limit_switch_val',
        '_right_limit_switch_val',
        '_emergency_switch_val',
        '_period_ns',
        '_jitter_ns',
        '_exec_ns',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'com_status': 'uint8',
        'slave_com_status': 'sequence<uint8>',
        'actual_pos': 'sequence<int32>',
        'actual_vel': 'sequence<int32>',
        'actual_tor': 'sequence<int16>',
        'status_word': 'sequence<uint16>',
        'op_mode_display': 'sequence<uint8>',
        'error_code': 'sequence<uint16>',
        'current_lifecycle_state': 'uint8',
        'left_limit_switch_val': 'uint8',
        'right_limit_switch_val': 'uint8',
        'emergency_switch_val': 'uint8',
        'period_ns': 'uint32',
        'jitter_ns': 'uint32',
        'exec_ns': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.com_status = kwargs.get('com_status', int())
        self.slave_com_status = array.array('B', kwargs.get('slave_com_status', []))
        self.actual_pos = array.array('i', kwargs.get('actual_pos', []))
        self.actual_vel = array.array('i', kwargs.get('actual_vel', []))
        self.actual_tor = array.array('h', kwargs.get('actual_tor', []))
        self.status_word = array.array('H', kwargs.get('status_word', []))
        self.op_mode_display = array.array('B', kwargs.get('op_mode_display', []))
        self.error_code = array.array('H', kwargs.get('error_code', []))
        self.current_lifecycle_state = kwargs.get('current_lifecycle_state', int())
        self.left_limit_switch_val = kwargs.get('left_limit_switch_val', int())
        self.right_limit_switch_val = kwargs.get('right_limit_switch_val', int())
        self.emergency_switch_val = kwargs.get('emergency_switch_val', int())
        self.period_ns = kwargs.get('period_ns', int())
        self.jitter_ns = kwargs.get('jitter_ns', int())
        self.exec_ns = kwargs.get('exec_ns', int())

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
        if self.com_status != other.com_status:
            return False
        if self.slave_com_status != other.slave_com_status:
            return False
        if self.actual_pos != other.actual_pos:
            return False
        if self.actual_vel != other.actual_vel:
            return False
        if self.actual_tor != other.actual_tor:
            return False
        if self.status_word != other.status_word:
            return False
        if self.op_mode_display != other.op_mode_display:
            return False
        if self.error_code != other.error_code:
            return False
        if self.current_lifecycle_state != other.current_lifecycle_state:
            return False
        if self.left_limit_switch_val != other.left_limit_switch_val:
            return False
        if self.right_limit_switch_val != other.right_limit_switch_val:
            return False
        if self.emergency_switch_val != other.emergency_switch_val:
            return False
        if self.period_ns != other.period_ns:
            return False
        if self.jitter_ns != other.jitter_ns:
            return False
        if self.exec_ns != other.exec_ns:
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
    def com_status(self):
        """Message field 'com_status'."""
        return self._com_status

    @com_status.setter
    def com_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'com_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'com_status' field must be an unsigned integer in [0, 255]"
        self._com_status = value

    @property
    def slave_com_status(self):
        """Message field 'slave_com_status'."""
        return self._slave_com_status

    @slave_com_status.setter
    def slave_com_status(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'slave_com_status' array.array() must have the type code of 'B'"
            self._slave_com_status = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'slave_com_status' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._slave_com_status = array.array('B', value)

    @property
    def actual_pos(self):
        """Message field 'actual_pos'."""
        return self._actual_pos

    @actual_pos.setter
    def actual_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'actual_pos' array.array() must have the type code of 'i'"
            self._actual_pos = value
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
                "The 'actual_pos' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._actual_pos = array.array('i', value)

    @property
    def actual_vel(self):
        """Message field 'actual_vel'."""
        return self._actual_vel

    @actual_vel.setter
    def actual_vel(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'actual_vel' array.array() must have the type code of 'i'"
            self._actual_vel = value
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
                "The 'actual_vel' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._actual_vel = array.array('i', value)

    @property
    def actual_tor(self):
        """Message field 'actual_tor'."""
        return self._actual_tor

    @actual_tor.setter
    def actual_tor(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'actual_tor' array.array() must have the type code of 'h'"
            self._actual_tor = value
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
                "The 'actual_tor' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._actual_tor = array.array('h', value)

    @property
    def status_word(self):
        """Message field 'status_word'."""
        return self._status_word

    @status_word.setter
    def status_word(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'status_word' array.array() must have the type code of 'H'"
            self._status_word = value
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
                "The 'status_word' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._status_word = array.array('H', value)

    @property
    def op_mode_display(self):
        """Message field 'op_mode_display'."""
        return self._op_mode_display

    @op_mode_display.setter
    def op_mode_display(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'op_mode_display' array.array() must have the type code of 'B'"
            self._op_mode_display = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'op_mode_display' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._op_mode_display = array.array('B', value)

    @property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'error_code' array.array() must have the type code of 'H'"
            self._error_code = value
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
                "The 'error_code' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._error_code = array.array('H', value)

    @property
    def current_lifecycle_state(self):
        """Message field 'current_lifecycle_state'."""
        return self._current_lifecycle_state

    @current_lifecycle_state.setter
    def current_lifecycle_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_lifecycle_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_lifecycle_state' field must be an unsigned integer in [0, 255]"
        self._current_lifecycle_state = value

    @property
    def left_limit_switch_val(self):
        """Message field 'left_limit_switch_val'."""
        return self._left_limit_switch_val

    @left_limit_switch_val.setter
    def left_limit_switch_val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_limit_switch_val' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_limit_switch_val' field must be an unsigned integer in [0, 255]"
        self._left_limit_switch_val = value

    @property
    def right_limit_switch_val(self):
        """Message field 'right_limit_switch_val'."""
        return self._right_limit_switch_val

    @right_limit_switch_val.setter
    def right_limit_switch_val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_limit_switch_val' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_limit_switch_val' field must be an unsigned integer in [0, 255]"
        self._right_limit_switch_val = value

    @property
    def emergency_switch_val(self):
        """Message field 'emergency_switch_val'."""
        return self._emergency_switch_val

    @emergency_switch_val.setter
    def emergency_switch_val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emergency_switch_val' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emergency_switch_val' field must be an unsigned integer in [0, 255]"
        self._emergency_switch_val = value

    @property
    def period_ns(self):
        """Message field 'period_ns'."""
        return self._period_ns

    @period_ns.setter
    def period_ns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'period_ns' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'period_ns' field must be an unsigned integer in [0, 4294967295]"
        self._period_ns = value

    @property
    def jitter_ns(self):
        """Message field 'jitter_ns'."""
        return self._jitter_ns

    @jitter_ns.setter
    def jitter_ns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'jitter_ns' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'jitter_ns' field must be an unsigned integer in [0, 4294967295]"
        self._jitter_ns = value

    @property
    def exec_ns(self):
        """Message field 'exec_ns'."""
        return self._exec_ns

    @exec_ns.setter
    def exec_ns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exec_ns' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'exec_ns' field must be an unsigned integer in [0, 4294967295]"
        self._exec_ns = value
