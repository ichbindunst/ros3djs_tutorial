// Generated by gencpp from file iiwa_msgs/SetPTPJointSpeedLimits.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SETPTPJOINTSPEEDLIMITS_H
#define IIWA_MSGS_MESSAGE_SETPTPJOINTSPEEDLIMITS_H

#include <ros/service_traits.h>


#include <iiwa_msgs/SetPTPJointSpeedLimitsRequest.h>
#include <iiwa_msgs/SetPTPJointSpeedLimitsResponse.h>


namespace iiwa_msgs
{

struct SetPTPJointSpeedLimits
{

typedef SetPTPJointSpeedLimitsRequest Request;
typedef SetPTPJointSpeedLimitsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetPTPJointSpeedLimits
} // namespace iiwa_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimits > {
  static const char* value()
  {
    return "e5ffdd082606e43192e0949ab1d5a1f3";
  }

  static const char* value(const ::iiwa_msgs::SetPTPJointSpeedLimits&) { return value(); }
};

template<>
struct DataType< ::iiwa_msgs::SetPTPJointSpeedLimits > {
  static const char* value()
  {
    return "iiwa_msgs/SetPTPJointSpeedLimits";
  }

  static const char* value(const ::iiwa_msgs::SetPTPJointSpeedLimits&) { return value(); }
};


// service_traits::MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest> should match 
// service_traits::MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimits > 
template<>
struct MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimits >::value();
  }
  static const char* value(const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest> should match 
// service_traits::DataType< ::iiwa_msgs::SetPTPJointSpeedLimits > 
template<>
struct DataType< ::iiwa_msgs::SetPTPJointSpeedLimitsRequest>
{
  static const char* value()
  {
    return DataType< ::iiwa_msgs::SetPTPJointSpeedLimits >::value();
  }
  static const char* value(const ::iiwa_msgs::SetPTPJointSpeedLimitsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimitsResponse> should match 
// service_traits::MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimits > 
template<>
struct MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimitsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::iiwa_msgs::SetPTPJointSpeedLimits >::value();
  }
  static const char* value(const ::iiwa_msgs::SetPTPJointSpeedLimitsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::iiwa_msgs::SetPTPJointSpeedLimitsResponse> should match 
// service_traits::DataType< ::iiwa_msgs::SetPTPJointSpeedLimits > 
template<>
struct DataType< ::iiwa_msgs::SetPTPJointSpeedLimitsResponse>
{
  static const char* value()
  {
    return DataType< ::iiwa_msgs::SetPTPJointSpeedLimits >::value();
  }
  static const char* value(const ::iiwa_msgs::SetPTPJointSpeedLimitsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SETPTPJOINTSPEEDLIMITS_H
