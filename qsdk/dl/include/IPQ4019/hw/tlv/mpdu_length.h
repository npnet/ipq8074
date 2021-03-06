// Copyright (c) 2013 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _MPDU_LENGTH_H_
#define _MPDU_LENGTH_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	length[13:0], reserved[31:14]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_MPDU_LENGTH 1

struct mpdu_length {
    volatile uint32_t length                          : 14, //[13:0]
                      reserved                        : 18; //[31:14]
};

/*

length
			
			MPDU Frame Length in bytes.
			
			This is the full MPDU length, which includes all
			(A-)MSDU frames, header conversion, encryption, FCS, etc.
			
			
			
			When based on MPDU configuration bits (in the MPDU link
			descriptor)  first_MPDU, Last_mpdu or change in the 
			Rate_offset, the QM determines that the remainder of the
			MPDU frames in the queue should NOT be transmitted as part
			of an A-MPDU aggregate with the previous frames, is will
			start inserting a length of 0 into this field.
			
			
			
			<legal all>

reserved
			
			0
*/


/* Description		MPDU_LENGTH_0_LENGTH
			
			MPDU Frame Length in bytes.
			
			This is the full MPDU length, which includes all
			(A-)MSDU frames, header conversion, encryption, FCS, etc.
			
			
			
			When based on MPDU configuration bits (in the MPDU link
			descriptor)  first_MPDU, Last_mpdu or change in the 
			Rate_offset, the QM determines that the remainder of the
			MPDU frames in the queue should NOT be transmitted as part
			of an A-MPDU aggregate with the previous frames, is will
			start inserting a length of 0 into this field.
			
			
			
			<legal all>
*/
#define MPDU_LENGTH_0_LENGTH_OFFSET                                  0x00000000
#define MPDU_LENGTH_0_LENGTH_LSB                                     0
#define MPDU_LENGTH_0_LENGTH_MASK                                    0x00003fff

/* Description		MPDU_LENGTH_0_RESERVED
			
			0
*/
#define MPDU_LENGTH_0_RESERVED_OFFSET                                0x00000000
#define MPDU_LENGTH_0_RESERVED_LSB                                   14
#define MPDU_LENGTH_0_RESERVED_MASK                                  0xffffc000


#endif // _MPDU_LENGTH_H_
