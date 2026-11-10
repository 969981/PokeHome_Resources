/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054f9a0; name: FUN_.text__0054f9a0
 */


undefined8 FUN__text__0054f9a0(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x10))
                    (param_2,(ulong)(((uint)(param_3 >> 1) & 0x7fffffff) + 1) << 2,0x70c87e,0x56);
  *(long *)(param_1 + 0x20) = lVar1;
  if (lVar1 == 0) {
    return 0x34;
  }
  uVar2 = FUN__text__00555380(param_1,param_2,param_3 & 0xffffffff,param_3 & 0xffffffff);
  return uVar2;
}


