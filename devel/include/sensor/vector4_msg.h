// Generated by gencpp from file sensor/vector4_msg.msg
// DO NOT EDIT!


#ifndef SENSOR_MESSAGE_VECTOR4_MSG_H
#define SENSOR_MESSAGE_VECTOR4_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sensor
{
template <class ContainerAllocator>
struct vector4_msg_
{
  typedef vector4_msg_<ContainerAllocator> Type;

  vector4_msg_()
    : a(0.0)
    , b(0.0)
    , c(0.0)
    , d(0.0)  {
    }
  vector4_msg_(const ContainerAllocator& _alloc)
    : a(0.0)
    , b(0.0)
    , c(0.0)
    , d(0.0)  {
  (void)_alloc;
    }



   typedef float _a_type;
  _a_type a;

   typedef float _b_type;
  _b_type b;

   typedef float _c_type;
  _c_type c;

   typedef float _d_type;
  _d_type d;





  typedef boost::shared_ptr< ::sensor::vector4_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor::vector4_msg_<ContainerAllocator> const> ConstPtr;

}; // struct vector4_msg_

typedef ::sensor::vector4_msg_<std::allocator<void> > vector4_msg;

typedef boost::shared_ptr< ::sensor::vector4_msg > vector4_msgPtr;
typedef boost::shared_ptr< ::sensor::vector4_msg const> vector4_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor::vector4_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor::vector4_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sensor::vector4_msg_<ContainerAllocator1> & lhs, const ::sensor::vector4_msg_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a &&
    lhs.b == rhs.b &&
    lhs.c == rhs.c &&
    lhs.d == rhs.d;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sensor::vector4_msg_<ContainerAllocator1> & lhs, const ::sensor::vector4_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sensor

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sensor::vector4_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor::vector4_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor::vector4_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor::vector4_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor::vector4_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor::vector4_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor::vector4_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d86ed09ecfcaeb2855e47ec69fad1dd";
  }

  static const char* value(const ::sensor::vector4_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d86ed09ecfcaeb2ULL;
  static const uint64_t static_value2 = 0x855e47ec69fad1ddULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor::vector4_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor/vector4_msg";
  }

  static const char* value(const ::sensor::vector4_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor::vector4_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 定义一个思维向量用\n"
"float32 a\n"
"float32 b\n"
"float32 c\n"
"float32 d\n"
;
  }

  static const char* value(const ::sensor::vector4_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor::vector4_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
      stream.next(m.c);
      stream.next(m.d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct vector4_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor::vector4_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor::vector4_msg_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<float>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<float>::stream(s, indent + "  ", v.b);
    s << indent << "c: ";
    Printer<float>::stream(s, indent + "  ", v.c);
    s << indent << "d: ";
    Printer<float>::stream(s, indent + "  ", v.d);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MESSAGE_VECTOR4_MSG_H
