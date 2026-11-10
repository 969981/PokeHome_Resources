/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d5c08; name: FUN_.text__002d5c08
 */


void FUN__text__002d5c08(undefined8 param_1,uint param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN__text__002f0ef0();
  uVar1 = FUN__text__002ceab8(uVar1,param_2 & 0xffff);
  if ((int)uVar1 == 7) {
    FUN__text__002d5c70(uVar1,param_2,0);
    uVar1 = 0;
    if (DAT_008e5318 != 0) {
      uVar1 = FUN__text__002d1cf0(DAT_008e5318,param_2);
    }
  }
  FUN__text__002d5d20(uVar1,param_2,param_3,0,0);
  return;
}


