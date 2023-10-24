#ifndef BIT_MATH_
#define BIT_MATH_



#define REGSTER_SIZE 8

//bit_math

#define SET_BIT(REG,BIT_NUM)	REG|=(1<<BIT_NUM)
#define CLR_BIT(REG,BIT_NUM)	REG&=(~(1<<BIT_NUM))
#define TOG_BIT(REG,BIT_NUM)	REG^=(1<<BIT_NUM)
#define GET_BIT(REG,BIT_NUM)	((REG&(1<<BIT_NUM))>>BIT_NUM)
#define IS_BIT_SET(REG,BIT_NUM)	(REG&(1<<BIT_NUM))
#define IS_BIT_CLR(REG,BIT_NUM)	!((REG&(1<<BIT_NUM))>>BIT_NUM)
#define ROR(REG,VAL)	REG=(REG<<(REGISTER_SIZE - VAL))|(REG>>(VAL))
#define ROL(REG,VAL)	REG=(REG>>(REGISTER_SIZE - VAL))|(REG<<(VAL))
#define ASSIG_BIT(REG,BIT_NUM,VAL)	((REG=REG&~(1<<BIT_NUM)) | (VAL<<BIT_NUM)) 


#endif  //BIT_MATH_
