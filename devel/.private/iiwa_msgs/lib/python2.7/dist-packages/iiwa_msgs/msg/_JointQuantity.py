# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from iiwa_msgs/JointQuantity.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class JointQuantity(genpy.Message):
  _md5sum = "b9f90cf50b6e4af396f731df7da11689"
  _type = "iiwa_msgs/JointQuantity"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 a1
float32 a2
float32 a3
float32 a4
float32 a5
float32 a6
float32 a7"""
  __slots__ = ['a1','a2','a3','a4','a5','a6','a7']
  _slot_types = ['float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       a1,a2,a3,a4,a5,a6,a7

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(JointQuantity, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.a1 is None:
        self.a1 = 0.
      if self.a2 is None:
        self.a2 = 0.
      if self.a3 is None:
        self.a3 = 0.
      if self.a4 is None:
        self.a4 = 0.
      if self.a5 is None:
        self.a5 = 0.
      if self.a6 is None:
        self.a6 = 0.
      if self.a7 is None:
        self.a7 = 0.
    else:
      self.a1 = 0.
      self.a2 = 0.
      self.a3 = 0.
      self.a4 = 0.
      self.a5 = 0.
      self.a6 = 0.
      self.a7 = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_7f().pack(_x.a1, _x.a2, _x.a3, _x.a4, _x.a5, _x.a6, _x.a7))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 28
      (_x.a1, _x.a2, _x.a3, _x.a4, _x.a5, _x.a6, _x.a7,) = _get_struct_7f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_7f().pack(_x.a1, _x.a2, _x.a3, _x.a4, _x.a5, _x.a6, _x.a7))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 28
      (_x.a1, _x.a2, _x.a3, _x.a4, _x.a5, _x.a6, _x.a7,) = _get_struct_7f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7f = None
def _get_struct_7f():
    global _struct_7f
    if _struct_7f is None:
        _struct_7f = struct.Struct("<7f")
    return _struct_7f
