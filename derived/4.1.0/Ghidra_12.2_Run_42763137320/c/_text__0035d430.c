/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035d430; name: FUN_.text__0035d430
 */


uint FUN__text__0035d430(long param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x56c);
  uVar3 = FUN__text__0035d2c0();
  if (((((((uVar3 & 1) == 0) || ((bVar1 & 1) == 0)) &&
        ((uVar3 = FUN__text__0035d2c0(param_1,param_2,param_3,1), (uVar3 & 1) == 0 ||
         ((bVar1 >> 1 & 1) == 0)))) &&
       ((uVar3 = FUN__text__0035d2c0(param_1,param_2,param_3,2), (uVar3 & 1) == 0 ||
        ((bVar1 >> 2 & 1) == 0)))) &&
      ((uVar3 = FUN__text__0035d2c0(param_1,param_2,param_3,3), (uVar3 & 1) == 0 ||
       ((bVar1 >> 3 & 1) == 0)))) &&
     ((uVar3 = FUN__text__0035d2c0(param_1,param_2,param_3,4), (uVar3 & 1) == 0 ||
      ((bVar1 >> 4 & 1) == 0)))) {
    uVar2 = FUN__text__0035d2c0(param_1,param_2,param_3,5);
    return uVar2 & (bVar1 & 0x20) >> 5;
  }
  return 1;
}


