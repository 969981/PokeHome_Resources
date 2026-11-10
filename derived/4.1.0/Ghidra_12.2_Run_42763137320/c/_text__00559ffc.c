/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00559ffc; name: FUN_.text__00559ffc
 */


undefined4 FUN__text__00559ffc(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 1) = param_3;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 << 3,0x71971e,0x68);
  *param_1 = lVar1;
  uVar2 = 0x34;
  if (lVar1 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


