/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   minMaxFunctionOverloadVersion.h
 * Author: massimo
 *
 * Created on June 19, 2017, 10:43 AM
 */

#ifndef MINMAXFUNCTIONOVERLOAD_H_
#define MINMAXFUNCTIONOVERLOAD_H_
#include <memory>
#include <functional>
////////////////////////////////////////////////////////////////////////////////
namespace minMaxFunctionOverload
{

class minMaxFunctionOverload
{
public:
  minMaxFunctionOverload() {};
  
  static std::string version;
  static std::string minMaxFunctionOverloadVersion () noexcept;
};  // class dummyLib

template <typename T>
class max
{
  public:
    constexpr T operator() (const T& arg) const noexcept
    {
      return arg;
    }
    
    T operator() (const T& arg1, const T& arg2) const noexcept
    {
      if ( arg1 < arg2 )
      {
        return arg2;
      }
      return arg1;
    }
    
    template<typename... U>
    constexpr T operator() (const T& first, const U&... args) const noexcept
    {
      return this->operator()(first, (const T&)(this->operator()(args...)));
    }
};  // class max

// create a class max object for type T and return a std::unique_ptr to it
template <typename T>
std::unique_ptr<max<T>> create_max() noexcept
{
  std::unique_ptr<max<T>> local_ptr(new max<T>);
  return local_ptr; // local_ptr will surrender ownership;
                    // the compiler should optimize the return as if it was:
                    // return std::move(local_ptr);
}

template<typename T, typename... U>
constexpr T findMax(const T& first, const U&... args) noexcept
{
  return create_max<T>().get()->operator()(first, args...);
}

}  // namespace minMaxFunctionOverload

#endif /* DUMMYLIB_H */
