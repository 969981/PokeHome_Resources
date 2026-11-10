/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00201190; name: FUN_.text__00201190
 */


void FUN__text__00201190(long *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_50 [2];
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  lVar1 = *param_1;
  local_50[0] = *(undefined4 *)(param_1[2] + (ulong)*param_2 * 4);
  lVar2 = *(long *)(lVar1 + 0xa0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lStack_40 = param_1[1];
  local_38 = *(undefined8 *)(lStack_40 + 0x390);
  local_48 = lVar2;
  FUN__text__0013f4cc(*(undefined8 *)(lVar1 + 0xd8),local_50);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


