/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405840; name: FUN_.text__00405840
 */


void FUN__text__00405840(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if (*(int *)(param_2 + 0xd1c) != 0) {
    FUN__text__00404660(param_1,param_3);
    return;
  }
  uVar1 = (ulong)*(uint *)(param_3 + 0xc);
  if (*(long *)(param_2 + uVar1 * 0x18 + 0x18) != 0) {
    FUN__text__00404260(param_1,param_2);
    uVar1 = (ulong)*(uint *)(param_3 + 0xc);
  }
  *(long *)(param_2 + uVar1 * 0x18 + 0x18) = param_3;
  return;
}


