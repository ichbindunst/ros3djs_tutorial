// Generated by gencpp from file iiwa_msgs/SetSmartServoLinSpeedLimitsResponse.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SETSMARTSERVOLINSPEEDLIMITSRESPONSE_H
#define IIWA_MSGS_MESSAGE_SETSMARTSERVOLINSPEEDLIMITSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace iiwa_msgs
{
template <class ContainerAllocator>
struct SetSmartServoLinSpeedLimitsResponse_
{
  typedef SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> Type;

  SetSmartServoLinSpeedLimitsResponse_()
    : success(false)
    , error()  {
    }
  SetSmartServoLinSpeedLimitsResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , error(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_type;
  _error_type error;





  typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetSmartServoLinSpeedLimitsResponse_

typedef ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<std::allocator<void> > SetSmartServoLinSpeedLimitsResponse;

typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse > SetSmartServoLinSpeedLimitsResponsePtr;
typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse const> SetSmartServoLinSpeedLimitsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'iiwa_msgs': ['/home/yao/ros3djs_tutorial/src/iiwa_stack/iiwa_msgs/msg', '/home/yao/ros3djs_tutorial/devel/.private/iiwa_msgs/share/iiwa_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45872d25d65c97743cc71afc6d4e884d";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45872d25d65c9774ULL;
  static const uint64_t static_value2 = 0x3cc71afc6d4e884dULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/SetSmartServoLinSpeedLimitsResponse";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool success\n\
string error\n\
\n\
";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSmartServoLinSpeedLimitsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "error: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SETSMARTSERVOLINSPEEDLIMITSRESPONSE_H
