/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e733c; name: FUN_.text__005e733c
 */


void FUN__text__005e733c(long param_1,long *param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x120) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  lVar1 = *param_2;
  *param_2 = 0;
  *(long *)(param_1 + 0x120) = lVar1;
  *(ulong *)(lVar1 + 0x130) = *(ulong *)(lVar1 + 0x130) & 0xfffffffffffffff7;
  FUN__text__005e73a0(param_1,*(undefined8 *)(param_1 + 0x120));
  return;
}


