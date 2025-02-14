// Generated by gencpp from file sensor/ms5837_msg.msg
// DO NOT EDIT!


#ifndef SENSOR_MESSAGE_MS5837_MSG_H
#define SENSOR_MESSAGE_MS5837_MSG_H


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
struct ms5837_msg_
{
  typedef ms5837_msg_<ContainerAllocator> Type;

  ms5837_msg_()
    : header()
    , psr_mbar(0.0)
    , psr_atm(0.0)
    , psr_Pa(0.0)
    , temp_C(0.0)
    , temp_F(0.0)
    , temp_K(0.0)
    , depth_fresh(0.0)
    , depth_salt(0.0)
    , altitude(0.0)  {
    }
  ms5837_msg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , psr_mbar(0.0)
    , psr_atm(0.0)
    , psr_Pa(0.0)
    , temp_C(0.0)
    , temp_F(0.0)
    , temp_K(0.0)
    , depth_fresh(0.0)
    , depth_salt(0.0)
    , altitude(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _psr_mbar_type;
  _psr_mbar_type psr_mbar;

   typedef float _psr_atm_type;
  _psr_atm_type psr_atm;

   typedef float _psr_Pa_type;
  _psr_Pa_type psr_Pa;

   typedef float _temp_C_type;
  _temp_C_type temp_C;

   typedef float _temp_F_type;
  _temp_F_type temp_F;

   typedef float _temp_K_type;
  _temp_K_type temp_K;

   typedef float _depth_fresh_type;
  _depth_fresh_type depth_fresh;

   typedef float _depth_salt_type;
  _depth_salt_type depth_salt;

   typedef float _altitude_type;
  _altitude_type altitude;





  typedef boost::shared_ptr< ::sensor::ms5837_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor::ms5837_msg_<ContainerAllocator> const> ConstPtr;

}; // struct ms5837_msg_

typedef ::sensor::ms5837_msg_<std::allocator<void> > ms5837_msg;

typedef boost::shared_ptr< ::sensor::ms5837_msg > ms5837_msgPtr;
typedef boost::shared_ptr< ::sensor::ms5837_msg const> ms5837_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor::ms5837_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor::ms5837_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sensor::ms5837_msg_<ContainerAllocator1> & lhs, const ::sensor::ms5837_msg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.psr_mbar == rhs.psr_mbar &&
    lhs.psr_atm == rhs.psr_atm &&
    lhs.psr_Pa == rhs.psr_Pa &&
    lhs.temp_C == rhs.temp_C &&
    lhs.temp_F == rhs.temp_F &&
    lhs.temp_K == rhs.temp_K &&
    lhs.depth_fresh == rhs.depth_fresh &&
    lhs.depth_salt == rhs.depth_salt &&
    lhs.altitude == rhs.altitude;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sensor::ms5837_msg_<ContainerAllocator1> & lhs, const ::sensor::ms5837_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sensor

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sensor::ms5837_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor::ms5837_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor::ms5837_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor::ms5837_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor::ms5837_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor::ms5837_msg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor::ms5837_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2465bb52020c0c434b014d6184497bf3";
  }

  static const char* value(const ::sensor::ms5837_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2465bb52020c0c43ULL;
  static const uint64_t static_value2 = 0x4b014d6184497bf3ULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor::ms5837_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor/ms5837_msg";
  }

  static const char* value(const ::sensor::ms5837_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor::ms5837_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# define deep sensor MS5837_30B message format\n"
"# Header\n"
"Header header\n"
"# Pressure\n"
"float32 psr_mbar\n"
"float32 psr_atm\n"
"float32 psr_Pa\n"
"# temperature\n"
"float32 temp_C\n"
"float32 temp_F\n"
"float32 temp_K\n"
"# depth\n"
"float32 depth_fresh\n"
"float32 depth_salt\n"
"# altitude\n"
"float32 altitude\n"
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

  static const char* value(const ::sensor::ms5837_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor::ms5837_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.psr_mbar);
      stream.next(m.psr_atm);
      stream.next(m.psr_Pa);
      stream.next(m.temp_C);
      stream.next(m.temp_F);
      stream.next(m.temp_K);
      stream.next(m.depth_fresh);
      stream.next(m.depth_salt);
      stream.next(m.altitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ms5837_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor::ms5837_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor::ms5837_msg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "psr_mbar: ";
    Printer<float>::stream(s, indent + "  ", v.psr_mbar);
    s << indent << "psr_atm: ";
    Printer<float>::stream(s, indent + "  ", v.psr_atm);
    s << indent << "psr_Pa: ";
    Printer<float>::stream(s, indent + "  ", v.psr_Pa);
    s << indent << "temp_C: ";
    Printer<float>::stream(s, indent + "  ", v.temp_C);
    s << indent << "temp_F: ";
    Printer<float>::stream(s, indent + "  ", v.temp_F);
    s << indent << "temp_K: ";
    Printer<float>::stream(s, indent + "  ", v.temp_K);
    s << indent << "depth_fresh: ";
    Printer<float>::stream(s, indent + "  ", v.depth_fresh);
    s << indent << "depth_salt: ";
    Printer<float>::stream(s, indent + "  ", v.depth_salt);
    s << indent << "altitude: ";
    Printer<float>::stream(s, indent + "  ", v.altitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MESSAGE_MS5837_MSG_H
