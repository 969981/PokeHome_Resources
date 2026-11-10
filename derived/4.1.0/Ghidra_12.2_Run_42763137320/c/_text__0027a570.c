/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027a570; name: FUN_.text__0027a570
 */


void FUN__text__0027a570(long param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong local_10 [2];
  
  uVar2 = 0;
  local_10[0] = *(ulong *)(param_2 + 2);
  local_10[1] = *(undefined8 *)(param_2 + 4);
  do {
    if ((local_10[(uint)uVar2 >> 6 & 0x3ff] >> (uVar2 & 0x3f) & 1) != 0) goto LAB__text__0027a5a0;
    uVar1 = (uint)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while (uVar1 != 0x80);
  uVar2 = 0x80;
LAB__text__0027a5a0:
  FUN__text__0027a380(param_1,*param_2,uVar2,0,*(int *)(param_1 + 0x148) == 1);
  return;
}


