/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010e28c; name: FUN_.text__0010e28c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0010e28c(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 local_38;
  
  if ((*(uint *)(param_1 + 0x9d8) == param_2) && ((param_3 & 1) == 0)) {
    return;
  }
  pcVar3 = *(code **)((ulong)param_2 * 0x10 + 0x8aa2b8);
  uVar1 = *(ulong *)((ulong)param_2 * 0x10 + 0x8aa2c0);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + ((long)uVar1 >> 1)));
  }
  uVar2 = (*pcVar3)();
  FUN__text__003c8d50(*(undefined8 *)(param_1 + 0x8e8),1);
  if ((*(uint *)(param_1 + 0x9d4) == uVar2) && ((param_3 & 1) == 0)) {
    *(uint *)(param_1 + 0x9d8) = param_2;
    return;
  }
  local_38 = *(undefined8 *)(_DAT_0089f828 + (ulong)uVar2 * 8);
  FUN__text__003c7d90(*(undefined8 *)(param_1 + 0x8e8),&local_38);
  *(uint *)(param_1 + 0x9d4) = uVar2;
  *(uint *)(param_1 + 0x9d8) = param_2;
  return;
}


