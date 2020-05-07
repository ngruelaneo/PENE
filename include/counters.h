#pragma once
#include <pin.H>

namespace pene {
  enum counter_type : UINT {
      add_double_scalar_sse,
      add_double_simd_sse,
      add_float_scalar_sse,
      add_float_simd_sse,
      div_double_scalar_sse,
      div_double_simd_sse,
      div_float_scalar_sse,
      div_float_simd_sse,
      mul_double_scalar_sse,
      mul_double_simd_sse,
      mul_float_scalar_sse,
      mul_float_simd_sse,
      cvt_double_scalar_sse,
      cvt_double_simd_sse,
      cvt_float_scalar_sse,
      cvt_float_simd_sse,
      oth_double_scalar_sse,
      oth_double_simd_sse,
      oth_float_scalar_sse,
      oth_float_simd_sse,
      add_double_scalar_avx,
      add_double_simd_avx,
      add_float_scalar_avx,
      add_float_simd_avx,
      div_double_scalar_avx,
      div_double_simd_avx,
      div_float_scalar_avx,
      div_float_simd_avx,
      fma_double_scalar_avx,
      fma_double_simd_avx,
      fma_float_scalar_avx,
      fma_float_simd_avx,
      mul_double_scalar_avx,
      mul_double_simd_avx,
      mul_float_scalar_avx,
      mul_float_simd_avx,
      cvt_double_scalar_avx,
      cvt_double_simd_avx,
      cvt_float_scalar_avx,
      cvt_float_simd_avx,
      oth_double_scalar_avx,
      oth_double_simd_avx,
      oth_float_scalar_avx,
      oth_float_simd_avx,
      add_double_scalar_avx512,
      add_double_simd_avx512,
      add_float_scalar_avx512,
      add_float_simd_avx512,
      div_double_scalar_avx512,
      div_double_simd_avx512,
      div_float_scalar_avx512,
      div_float_simd_avx512,
      fma_double_scalar_avx512,
      fma_double_simd_avx512,
      fma_float_scalar_avx512,
      fma_float_simd_avx512,
      mul_double_scalar_avx512,
      mul_double_simd_avx512,
      mul_float_scalar_avx512,
      mul_float_simd_avx512,
      cvt_double_scalar_avx512,
      cvt_double_simd_avx512,
      cvt_float_scalar_avx512,
      cvt_float_simd_avx512,
      oth_double_scalar_avx512,
      oth_double_simd_avx512,
      oth_float_scalar_avx512,
      oth_float_simd_avx512,
    size
  };

  struct counters
  {
    /// TODO: Provide a thread safe int_type similar to std::atomic<>
    using int_type = UINT64;
    static constexpr UINT size = counter_type::size;
    int_type array[size];
    counters();
    int_type& operator[](const counter_type &);
    const int_type& operator[](const counter_type &) const;
    void print() const;
  };
}