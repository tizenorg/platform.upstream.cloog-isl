
   /**-------------------------------------------------------------------**
    **                              CLooG                                **
    **-------------------------------------------------------------------**
    **                             names.h                               **
    **-------------------------------------------------------------------**
    **                  First version: august 1st 2002                   **
    **-------------------------------------------------------------------**/


/******************************************************************************
 *               CLooG : the Chunky Loop Generator (experimental)             *
 ******************************************************************************
 *                                                                            *
 * Copyright (C) 2001-2005 Cedric Bastoul                                     *
 *                                                                            *
 * This is free software; you can redistribute it and/or modify it under the  *
 * terms of the GNU General Public License as published by the Free Software  *
 * Foundation; either version 2 of the License, or (at your option) any later *
 * version.                                                                   *
 *                                                                            *
 * This software is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY *
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License   *
 * for more details.                                                          *
 *                                                                            *
 * You should have received a copy of the GNU General Public License along    *
 * with software; if not, write to the Free Software Foundation, Inc.,        *
 * 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA                     *
 *                                                                            *
 * CLooG, the Chunky Loop Generator                                           *
 * Written by Cedric Bastoul, Cedric.Bastoul@inria.fr                         *
 *                                                                            *
 ******************************************************************************/


#ifndef CLOOG_NAMES_H
#define CLOOG_NAMES_H
#if defined(__cplusplus)
extern "C" 
  {
#endif 


# define MAX_NAME 50
# define FIRST_PARAMETER 'M'
# define FIRST_ITERATOR  'i'


/**
 * CloogNames structure:
 * this structure contains all the informations about parameter and iterator
 * names (as strings).
 */
struct cloognames
{ int nb_scalars ;         /**< Scalar dimension number. */
  int nb_scattering ;      /**< Scattering iterator number. */
  int nb_iterators ;       /**< Iterator number. */
  int nb_parameters ;      /**< Parameter number. */
  char ** scalars ;        /**< The scalar names     (an array of strings). */
  char ** scattering ;     /**< The scattering names (an array of strings). */
  char ** iterators ;      /**< The iterator names   (an array of strings). */
  char ** parameters ;     /**< The parameter names  (an array of strings). */
} ;
typedef struct cloognames CloogNames ;


/******************************************************************************
 *                          Structure display function                        *
 ******************************************************************************/
void cloog_names_print_structure(FILE *, CloogNames *, int) ;
void cloog_names_print(FILE *, CloogNames *) ;


/******************************************************************************
 *                         Memory deallocation function                       *
 ******************************************************************************/
void cloog_names_free(CloogNames *) ;


/******************************************************************************
 *                              Reading functions                             *
 ******************************************************************************/
char ** cloog_names_read_strings(FILE *, int, char *, char) ;


/******************************************************************************
 *                            Processing functions                            *
 ******************************************************************************/
CloogNames * cloog_names_malloc() ;
CloogNames * cloog_names_alloc(int,int,int,int,char **,char **,char **,char **);
char ** cloog_names_generate_items(int, char *, char) ;
CloogNames * cloog_names_generate(int, int, int, int, char, char, char, char) ;
void cloog_names_scalarize(CloogNames *, int, int *) ;

#if defined(__cplusplus)
  }
#endif 
#endif /* define _H */