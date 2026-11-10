/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e7474; name: FUN_.text__005e7474
 */


void FUN__text__005e7474(long param_1,long *param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x128) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  lVar1 = *param_2;
  *param_2 = 0;
  *(long *)(param_1 + 0x128) = lVar1;
  *(ulong *)(lVar1 + 0x130) = *(ulong *)(lVar1 + 0x130) & 0xfffffffffffffff7;
  FUN__text__005e74d0(param_1,*(undefined8 *)(param_1 + 0x128));
  return;
}


