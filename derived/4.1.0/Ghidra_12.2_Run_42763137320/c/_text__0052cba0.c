/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052cba0; name: FUN_.text__0052cba0
 */


bool FUN__text__0052cba0(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0) {
    return true;
  }
  if (*(char *)(*param_1 + 0x568) == '\0') {
    return false;
  }
  uVar2 = 1;
  do {
    uVar3 = uVar2;
    if (uVar1 == uVar3) break;
    uVar2 = uVar3 + 1;
  } while (*(char *)(param_1[uVar3] + 0x568) != '\0');
  return uVar1 <= uVar3;
}


