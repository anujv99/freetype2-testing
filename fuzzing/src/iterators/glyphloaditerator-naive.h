// glyphloaditerator-naive.h
//
//   Iterator that, naively, loads every available glyph.
//
// Copyright 2018 by
// Armin Hasitzka.
//
// This file is part of the FreeType project, and may only be used,
// modified, and distributed under the terms of the FreeType project
// license, LICENSE.TXT.  By continuing to use, modify, or distribute
// this file you indicate that you have read the license and
// understand and accept it fully.


#ifndef ITERATORS_GLYPH_LOAD_ITERATOR_NAIVE_H_
#define ITERATORS_GLYPH_LOAD_ITERATOR_NAIVE_H_


#include "iterators/glyphloaditerator.h"


  using namespace std;


  class GlyphLoadIteratorNaive
  : public GlyphLoadIterator
  {
  public:


    GlyphLoadIteratorNaive( void ) {}
    

    GlyphLoadIteratorNaive(
      const GlyphLoadIteratorNaive& ) = delete;
    GlyphLoadIteratorNaive& operator= (
      const GlyphLoadIteratorNaive& ) = delete;


    virtual
    ~GlyphLoadIteratorNaive( void ) {}


    void
    run( Unique_FT_Face  face )
    override;


  private:
    

    static const FT_Long  GLYPH_INDEX_MAX = 50;

    FT_Long  num_glyphs  = 0;
    FT_Long  glyph_index = 0;

    bool  last_load_successful = false;
  };


#endif // ITERATORS_GLYPH_LOAD_ITERATOR_NAIVE_H_
