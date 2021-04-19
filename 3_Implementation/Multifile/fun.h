/**
 * @file fun.h
 * @author Shivangi
 * @brief Header files for contact management project
 * @version 0.1
 * @date 2021-04-18
 * 
 * @copyright Copyright (c) 2021 
 * 
 */

#ifndef __FUN_H__
#define __FUN_H__

/**
 * @brief Funtion for adding contact
 * 
 * @param[in] fname
 * @param[in] lname
 * @param[in] phone_number
 * @param[in] FILE
 * @param[in] fp
 */
void addContact();

/**
 * @brief Function for viewing contact
 * 
 * @param[in] rfname
 * @param[in] rlname
 * @param[in] rphone_number
 * @param[in] FILE
 * @param[in] fp
 */
void viewContact();

#endif    /*  __FUN_H__ */