/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d058c; name: FUN_.text__002d058c
 */


undefined8 FUN__text__002d058c(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_2 & 0xffffffff;
  uVar1 = FUN__text__002d0830(param_1,param_2,0,param_3);
  if (((((((uVar1 & 1) == 0) &&
         (uVar1 = FUN__text__002d0830(uVar1,uVar3,1,param_3), (uVar1 & 1) == 0)) &&
        (uVar1 = FUN__text__002d0830(uVar1,uVar3,2,param_3), (uVar1 & 1) == 0)) &&
       (((uVar1 = FUN__text__002d0830(uVar1,uVar3,3,param_3), (uVar1 & 1) == 0 &&
         (uVar1 = FUN__text__002d0830(uVar1,uVar3,4,param_3), (uVar1 & 1) == 0)) &&
        ((uVar1 = FUN__text__002d0830(uVar1,uVar3,5,param_3), (uVar1 & 1) == 0 &&
         ((uVar1 = FUN__text__002d0830(uVar1,uVar3,6,param_3), (uVar1 & 1) == 0 &&
          (uVar1 = FUN__text__002d0830(uVar1,uVar3,7,param_3), (uVar1 & 1) == 0)))))))) &&
      ((uVar1 = FUN__text__002d0830(uVar1,uVar3,8,param_3), (uVar1 & 1) == 0 &&
       (((uVar1 = FUN__text__002d0830(uVar1,uVar3,9,param_3), (uVar1 & 1) == 0 &&
         (uVar1 = FUN__text__002d0830(uVar1,uVar3,10,param_3), (uVar1 & 1) == 0)) &&
        (uVar1 = FUN__text__002d0830(uVar1,uVar3,0xb,param_3), (uVar1 & 1) == 0)))))) &&
     (((((uVar1 = FUN__text__002d0830(uVar1,uVar3,0xc,param_3), (uVar1 & 1) == 0 &&
         (uVar1 = FUN__text__002d0830(uVar1,uVar3,0xd,param_3), (uVar1 & 1) == 0)) &&
        ((uVar1 = FUN__text__002d0830(uVar1,uVar3,0xe,param_3), (uVar1 & 1) == 0 &&
         ((uVar1 = FUN__text__002d0830(uVar1,uVar3,0xf,param_3), (uVar1 & 1) == 0 &&
          (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x10,param_3), (uVar1 & 1) == 0)))))) &&
       (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x11,param_3), (uVar1 & 1) == 0)) &&
      (((((uVar1 = FUN__text__002d0830(uVar1,uVar3,0x12,param_3), (uVar1 & 1) == 0 &&
          (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x13,param_3), (uVar1 & 1) == 0)) &&
         (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x14,param_3), (uVar1 & 1) == 0)) &&
        ((uVar1 = FUN__text__002d0830(uVar1,uVar3,0x15,param_3), (uVar1 & 1) == 0 &&
         (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x16,param_3), (uVar1 & 1) == 0)))) &&
       ((((uVar1 = FUN__text__002d0830(uVar1,uVar3,0x17,param_3), (uVar1 & 1) == 0 &&
          ((uVar1 = FUN__text__002d0830(uVar1,uVar3,0x18,param_3), (uVar1 & 1) == 0 &&
           (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x19,param_3), (uVar1 & 1) == 0)))) &&
         (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x1a,param_3), (uVar1 & 1) == 0)) &&
        ((((uVar1 = FUN__text__002d0830(uVar1,uVar3,0x1b,param_3), (uVar1 & 1) == 0 &&
           (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x1c,param_3), (uVar1 & 1) == 0)) &&
          (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x1d,param_3), (uVar1 & 1) == 0)) &&
         (uVar1 = FUN__text__002d0830(uVar1,uVar3,0x1e,param_3), (uVar1 & 1) == 0)))))))))) {
    uVar2 = FUN__text__002d0830(uVar1,uVar3,0x1f,param_3);
    return uVar2;
  }
  return 1;
}


