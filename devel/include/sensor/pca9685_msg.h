// Generated by gencpp from file sensor/pca9685_msg.msg
// DO NOT EDIT!


#ifndef SENSOR_MESSAGE_PCA9685_MSG_H
#define SENSOR_MESSAGE_PCA9685_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sensor
{
template <class ContainerAllocator>
struct pca9685_msg_
{
  typedef pca9685_msg_<ContainerAllocator> Type;

  pca9685_msg_()
    : header()
    , temperature(0.0)
    , speed(0)  {
    }
  pca9685_msg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , temperature(0.0)
    , speed(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _temperature_type;
  _temperature_type temperature;

   typedef int16_t _speed_type;
  _speed_type speed;





  typedef boost::shared_ptr< ::sensor::pca9685_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor::pca9685_msg_<ContainerAllocator> const> ConstPtr;

}; // struct pca9685_msg_

typedef ::sensor::pca9685_msg_<std::allocator<void> > pca9685_msg;

typedef boost::shared_ptr< ::sensor::pca9685_msg > pca9685_msgPtr;
typedef boost::shared_ptr< ::sensor::pca9685_msg const> pca9685_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor::pca9685_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor::pca9685_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sensor::pca9685_msg_<ContainerAllocator1> & lhs, const ::sensor::pca9685_msg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.temperature == rhs.temperature &&
    lhs.speed == rhs.speed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sensor::pca9685_msg_<ContainerAllocator1> & lhs, const ::sensor::pca9685_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sensor

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sensor::pca9685_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor::pca9685_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor::pca9685_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor::pca9685_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor::pca9685_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor::pca9685_msg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor::pca9685_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d041db550ab3844083f2be693a00cbbd";
  }

  static const char* value(const ::sensor::pca9685_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd041db550ab38440ULL;
  static const uint64_t static_value2 = 0x83f2be693a00cbbdULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor::pca9685_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor/pca9685_msg";
  }

  static const char* value(const ::sensor::pca9685_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor::pca9685_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# defain fan sensor pca9685 message format\n"
"# Header\n"
"Header header\n"
"# ID\n"
"# int8 chip_id\n"
"# int8 chip_version\n"
"# temperature\n"
"float32 temperature\n"
"# speed\n"
"int16 speed\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::sensor::pca9685_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor::pca9685_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.temperature);
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pca9685_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor::pca9685_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor::pca9685_msg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "temperature: ";
    Printer<float>::stream(s, indent + "  ", v.temperature);
    s << indent << "speed: ";
    Printer<int16_t>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MESSAGE_PCA9685_MSG_H
