/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c0c4c; name: FUN_.text__005c0c4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c0c4c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_008a5870;
  lVar2 = param_1[0xd];
  param_1[0xd] = 0;
  param_1[-9] = lVar1 + 0x10;
  *param_1 = lVar1 + 0x98;
  param_1[1] = lVar1 + 0xd8;
  if (lVar2 != 0) {
    FUN__text__005be1c0(lVar2);
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],lVar2,param_1[0xf],param_1[0x10]);
  }
  FUN__text__005a7e90(param_1 + -9);
  return;
}


