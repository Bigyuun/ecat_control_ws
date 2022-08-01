# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ecat_msgs:msg/GuiButtonData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'spn_target_values'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GuiButtonData(type):
    """Metaclass of message 'GuiButtonData'."""

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
                'ecat_msgs.msg.GuiButtonData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gui_button_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gui_button_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gui_button_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gui_button_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gui_button_data

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


class GuiButtonData(metaclass=Metaclass_GuiButtonData):
    """Message class 'GuiButtonData'."""

    __slots__ = [
        '_header',
        '_b_init_ecat',
        '_b_reinit_ecat',
        '_b_enable_drives',
        '_b_disable_drives',
        '_b_enable_cyclic_pos',
        '_b_enable_cyclic_vel',
        '_b_enable_vel',
        '_b_enable_pos',
        '_b_enter_cyclic_pdo',
        '_b_emergency_mode',
        '_b_send',
        '_b_stop_cyclic_pdo',
        '_spn_target_values',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'b_init_ecat': 'uint8',
        'b_reinit_ecat': 'uint8',
        'b_enable_drives': 'uint8',
        'b_disable_drives': 'uint8',
        'b_enable_cyclic_pos': 'uint8',
        'b_enable_cyclic_vel': 'uint8',
        'b_enable_vel': 'uint8',
        'b_enable_pos': 'uint8',
        'b_enter_cyclic_pdo': 'uint8',
        'b_emergency_mode': 'uint8',
        'b_send': 'uint8',
        'b_stop_cyclic_pdo': 'uint8',
        'spn_target_values': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.b_init_ecat = kwargs.get('b_init_ecat', int())
        self.b_reinit_ecat = kwargs.get('b_reinit_ecat', int())
        self.b_enable_drives = kwargs.get('b_enable_drives', int())
        self.b_disable_drives = kwargs.get('b_disable_drives', int())
        self.b_enable_cyclic_pos = kwargs.get('b_enable_cyclic_pos', int())
        self.b_enable_cyclic_vel = kwargs.get('b_enable_cyclic_vel', int())
        self.b_enable_vel = kwargs.get('b_enable_vel', int())
        self.b_enable_pos = kwargs.get('b_enable_pos', int())
        self.b_enter_cyclic_pdo = kwargs.get('b_enter_cyclic_pdo', int())
        self.b_emergency_mode = kwargs.get('b_emergency_mode', int())
        self.b_send = kwargs.get('b_send', int())
        self.b_stop_cyclic_pdo = kwargs.get('b_stop_cyclic_pdo', int())
        self.spn_target_values = array.array('i', kwargs.get('spn_target_values', []))

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
        if self.b_init_ecat != other.b_init_ecat:
            return False
        if self.b_reinit_ecat != other.b_reinit_ecat:
            return False
        if self.b_enable_drives != other.b_enable_drives:
            return False
        if self.b_disable_drives != other.b_disable_drives:
            return False
        if self.b_enable_cyclic_pos != other.b_enable_cyclic_pos:
            return False
        if self.b_enable_cyclic_vel != other.b_enable_cyclic_vel:
            return False
        if self.b_enable_vel != other.b_enable_vel:
            return False
        if self.b_enable_pos != other.b_enable_pos:
            return False
        if self.b_enter_cyclic_pdo != other.b_enter_cyclic_pdo:
            return False
        if self.b_emergency_mode != other.b_emergency_mode:
            return False
        if self.b_send != other.b_send:
            return False
        if self.b_stop_cyclic_pdo != other.b_stop_cyclic_pdo:
            return False
        if self.spn_target_values != other.spn_target_values:
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
    def b_init_ecat(self):
        """Message field 'b_init_ecat'."""
        return self._b_init_ecat

    @b_init_ecat.setter
    def b_init_ecat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_init_ecat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_init_ecat' field must be an unsigned integer in [0, 255]"
        self._b_init_ecat = value

    @property
    def b_reinit_ecat(self):
        """Message field 'b_reinit_ecat'."""
        return self._b_reinit_ecat

    @b_reinit_ecat.setter
    def b_reinit_ecat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_reinit_ecat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_reinit_ecat' field must be an unsigned integer in [0, 255]"
        self._b_reinit_ecat = value

    @property
    def b_enable_drives(self):
        """Message field 'b_enable_drives'."""
        return self._b_enable_drives

    @b_enable_drives.setter
    def b_enable_drives(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_enable_drives' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_enable_drives' field must be an unsigned integer in [0, 255]"
        self._b_enable_drives = value

    @property
    def b_disable_drives(self):
        """Message field 'b_disable_drives'."""
        return self._b_disable_drives

    @b_disable_drives.setter
    def b_disable_drives(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_disable_drives' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_disable_drives' field must be an unsigned integer in [0, 255]"
        self._b_disable_drives = value

    @property
    def b_enable_cyclic_pos(self):
        """Message field 'b_enable_cyclic_pos'."""
        return self._b_enable_cyclic_pos

    @b_enable_cyclic_pos.setter
    def b_enable_cyclic_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_enable_cyclic_pos' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_enable_cyclic_pos' field must be an unsigned integer in [0, 255]"
        self._b_enable_cyclic_pos = value

    @property
    def b_enable_cyclic_vel(self):
        """Message field 'b_enable_cyclic_vel'."""
        return self._b_enable_cyclic_vel

    @b_enable_cyclic_vel.setter
    def b_enable_cyclic_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_enable_cyclic_vel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_enable_cyclic_vel' field must be an unsigned integer in [0, 255]"
        self._b_enable_cyclic_vel = value

    @property
    def b_enable_vel(self):
        """Message field 'b_enable_vel'."""
        return self._b_enable_vel

    @b_enable_vel.setter
    def b_enable_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_enable_vel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_enable_vel' field must be an unsigned integer in [0, 255]"
        self._b_enable_vel = value

    @property
    def b_enable_pos(self):
        """Message field 'b_enable_pos'."""
        return self._b_enable_pos

    @b_enable_pos.setter
    def b_enable_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_enable_pos' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_enable_pos' field must be an unsigned integer in [0, 255]"
        self._b_enable_pos = value

    @property
    def b_enter_cyclic_pdo(self):
        """Message field 'b_enter_cyclic_pdo'."""
        return self._b_enter_cyclic_pdo

    @b_enter_cyclic_pdo.setter
    def b_enter_cyclic_pdo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_enter_cyclic_pdo' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_enter_cyclic_pdo' field must be an unsigned integer in [0, 255]"
        self._b_enter_cyclic_pdo = value

    @property
    def b_emergency_mode(self):
        """Message field 'b_emergency_mode'."""
        return self._b_emergency_mode

    @b_emergency_mode.setter
    def b_emergency_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_emergency_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_emergency_mode' field must be an unsigned integer in [0, 255]"
        self._b_emergency_mode = value

    @property
    def b_send(self):
        """Message field 'b_send'."""
        return self._b_send

    @b_send.setter
    def b_send(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_send' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_send' field must be an unsigned integer in [0, 255]"
        self._b_send = value

    @property
    def b_stop_cyclic_pdo(self):
        """Message field 'b_stop_cyclic_pdo'."""
        return self._b_stop_cyclic_pdo

    @b_stop_cyclic_pdo.setter
    def b_stop_cyclic_pdo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_stop_cyclic_pdo' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b_stop_cyclic_pdo' field must be an unsigned integer in [0, 255]"
        self._b_stop_cyclic_pdo = value

    @property
    def spn_target_values(self):
        """Message field 'spn_target_values'."""
        return self._spn_target_values

    @spn_target_values.setter
    def spn_target_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'spn_target_values' array.array() must have the type code of 'i'"
            self._spn_target_values = value
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
                "The 'spn_target_values' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._spn_target_values = array.array('i', value)
