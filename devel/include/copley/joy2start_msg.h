// Generated by gencpp from file copley/joy2start_msg.msg
// DO NOT EDIT!


#ifndef COPLEY_MESSAGE_JOY2START_MSG_H
#define COPLEY_MESSAGE_JOY2START_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace copley
{
template <class ContainerAllocator>
struct joy2start_msg_
{
  typedef joy2start_msg_<ContainerAllocator> Type;

  joy2start_msg_()
    : rpi_host(0)
    , copley_motor(0)  {
    }
  joy2start_msg_(const ContainerAllocator& _alloc)
    : rpi_host(0)
    , copley_motor(0)  {
  (void)_alloc;
    }



   typedef int16_t _rpi_host_type;
  _rpi_host_type rpi_host;

   typedef int16_t _copley_motor_type;
  _copley_motor_type copley_motor;





  typedef boost::shared_ptr< ::copley::joy2start_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::copley::joy2start_msg_<ContainerAllocator> const> ConstPtr;

}; // struct joy2start_msg_

typedef ::copley::joy2start_msg_<std::allocator<void> > joy2start_msg;

typedef boost::shared_ptr< ::copley::joy2start_msg > joy2start_msgPtr;
typedef boost::shared_ptr< ::copley::joy2start_msg const> joy2start_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::copley::joy2start_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::copley::joy2start_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::copley::joy2start_msg_<ContainerAllocator1> & lhs, const ::copley::joy2start_msg_<ContainerAllocator2> & rhs)
{
  return lhs.rpi_host == rhs.rpi_host &&
    lhs.copley_motor == rhs.copley_motor;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::copley::joy2start_msg_<ContainerAllocator1> & lhs, const ::copley::joy2start_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace copley

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::copley::joy2start_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::copley::joy2start_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::copley::joy2start_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::copley::joy2start_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::copley::joy2start_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::copley::joy2start_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::copley::joy2start_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b630d1038f374b9c6d69706a70f018ec";
  }

  static const char* value(const ::copley::joy2start_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb630d1038f374b9cULL;
  static const uint64_t static_value2 = 0x6d69706a70f018ecULL;
};

template<class ContainerAllocator>
struct DataType< ::copley::joy2start_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "copley/joy2start_msg";
  }

  static const char* value(const ::copley::joy2start_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::copley::joy2start_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# $ catkin_make -DCATKIN_WHITELIST_PACKAGES=\"copley\"\n"
"\n"
"# Start_Joy\n"
"int16 rpi_host\n"
"int16 copley_motor # 采用int变量而不是bool，可能再分出第三种情况，如重启\n"
;
  }

  static const char* value(const ::copley::joy2start_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::copley::joy2start_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rpi_host);
      stream.next(m.copley_motor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct joy2start_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::copley::joy2start_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::copley::joy2start_msg_<ContainerAllocator>& v)
  {
    s << indent << "rpi_host: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rpi_host);
    s << indent << "copley_motor: ";
    Printer<int16_t>::stream(s, indent + "  ", v.copley_motor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COPLEY_MESSAGE_JOY2START_MSG_H
