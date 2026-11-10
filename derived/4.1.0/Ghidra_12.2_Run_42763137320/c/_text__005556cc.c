/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005556cc; name: FUN_.text__005556cc
 */


undefined8 FUN__text__005556cc(int *param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  void *__src;
  
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    return 0;
  }
  __src = *(void **)(param_1 + 4);
  uVar1 = param_1[3];
  if ((param_4 & 1) == 0) {
    if (uVar1 < param_3) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 < param_3) {
      memset((void *)((long)param_2 + (ulong)uVar1 * 4),0,(ulong)((param_3 - uVar1) * 4));
      param_3 = uVar1;
    }
  }
  uVar2 = *param_1 - param_1[2];
  uVar1 = param_3;
  if (uVar2 <= param_3) {
    uVar1 = uVar2;
  }
  memcpy(param_2,(void *)((long)__src + (ulong)(uint)param_1[2] * 4),(ulong)(uVar1 << 2));
  if (uVar2 < param_3) {
    memcpy((void *)((long)param_2 + (ulong)uVar1 * 4),__src,(ulong)((param_3 - uVar1) * 4));
  }
  return 1;
}


