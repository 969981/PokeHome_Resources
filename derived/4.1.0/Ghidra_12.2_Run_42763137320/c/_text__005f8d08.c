/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8d08; name: FUN_.text__005f8d08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f8d08(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_30 [2];
  
  lVar3 = *_DAT_0089f5b8;
  lVar1 = lVar3 + 0x1b8;
  if ((double)*(long *)(lVar3 + 0x1c0) <= (double)*(long *)(lVar3 + 0x1d0)) {
    lVar1 = lVar3 + 0x1c8;
  }
  (**(code **)(*param_1 + 0x28))(param_1,lVar1);
  local_30[0] = param_1[0x2d];
  local_30[1] = 0;
  uVar2 = FUN__text__005e40dc();
  FUN__text__005e4160(uVar2,local_30);
  return;
}


