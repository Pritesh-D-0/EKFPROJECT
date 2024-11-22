// Generated by gencpp from file course_project/Landmark.msg
// DO NOT EDIT!


#ifndef COURSE_PROJECT_MESSAGE_LANDMARK_H
#define COURSE_PROJECT_MESSAGE_LANDMARK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace course_project
{
template <class ContainerAllocator>
struct Landmark_
{
  typedef Landmark_<ContainerAllocator> Type;

  Landmark_()
    : x(0.0)
    , y(0.0)
    , distance(0.0)
    , variance(0.0)  {
    }
  Landmark_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , distance(0.0)
    , variance(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _distance_type;
  _distance_type distance;

   typedef float _variance_type;
  _variance_type variance;





  typedef boost::shared_ptr< ::course_project::Landmark_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::course_project::Landmark_<ContainerAllocator> const> ConstPtr;

}; // struct Landmark_

typedef ::course_project::Landmark_<std::allocator<void> > Landmark;

typedef boost::shared_ptr< ::course_project::Landmark > LandmarkPtr;
typedef boost::shared_ptr< ::course_project::Landmark const> LandmarkConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::course_project::Landmark_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::course_project::Landmark_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::course_project::Landmark_<ContainerAllocator1> & lhs, const ::course_project::Landmark_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.distance == rhs.distance &&
    lhs.variance == rhs.variance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::course_project::Landmark_<ContainerAllocator1> & lhs, const ::course_project::Landmark_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace course_project

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::course_project::Landmark_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::course_project::Landmark_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_project::Landmark_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_project::Landmark_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_project::Landmark_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_project::Landmark_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::course_project::Landmark_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d57b053e39926628bfa2041c6ea64533";
  }

  static const char* value(const ::course_project::Landmark_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd57b053e39926628ULL;
  static const uint64_t static_value2 = 0xbfa2041c6ea64533ULL;
};

template<class ContainerAllocator>
struct DataType< ::course_project::Landmark_<ContainerAllocator> >
{
  static const char* value()
  {
    return "course_project/Landmark";
  }

  static const char* value(const ::course_project::Landmark_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::course_project::Landmark_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n"
"float32 y\n"
"float32 distance\n"
"float32 variance\n"
;
  }

  static const char* value(const ::course_project::Landmark_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::course_project::Landmark_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.distance);
      stream.next(m.variance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Landmark_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::course_project::Landmark_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::course_project::Landmark_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
    s << indent << "variance: ";
    Printer<float>::stream(s, indent + "  ", v.variance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COURSE_PROJECT_MESSAGE_LANDMARK_H