/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fb678; name: FUN_.text__003fb678
 */


uint FUN__text__003fb678(long *param_1,ulong param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)param_1[4];
  if (uVar4 < param_2 + param_3) {
    *param_4 = 1;
    param_3 = 0;
    if (param_2 < uVar4) {
      param_3 = (int)uVar4 - (int)param_2;
    }
    cVar2 = *(char *)((long)param_1 + 0x6b);
  }
  else {
    *param_4 = 0;
    cVar2 = *(char *)((long)param_1 + 0x6b);
  }
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x48))();
    uVar1 = uVar3 - (int)param_2;
    if (param_2 + param_3 <= (ulong)uVar3) {
      uVar1 = param_3;
    }
    param_3 = uVar1;
  }
  return param_3;
}


