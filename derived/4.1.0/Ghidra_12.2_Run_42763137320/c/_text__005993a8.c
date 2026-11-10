/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005993a8; name: FUN_.text__005993a8
 */


void FUN__text__005993a8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_8;
  
  lVar2 = *(long *)(param_1 + 0x188);
  (**(code **)(*param_2 + 0x10))(&local_8,param_2);
  lVar1 = *(long *)(lVar2 + 0x130);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar2 + 0x130) = local_8;
  return;
}


