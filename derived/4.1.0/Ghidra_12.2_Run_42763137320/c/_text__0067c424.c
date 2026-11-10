/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067c424; name: FUN_.text__0067c424
 */


int FUN__text__0067c424(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 8) == 0) {
    uVar2 = 0x7158b8;
  }
  else if (*(char *)(param_1 + 0x9aa) == '\0') {
    if (*(ulong *)(param_1 + 0x8f0) < (ulong)*(uint *)(param_1 + 0x988)) {
      if ((*(byte *)(param_1 + 0x9ab) & 5) != 0) {
        return -0x67;
      }
      if ((ulong)*(uint *)(param_1 + 0x9a0) <= *(ulong *)(param_1 + 0x8f0)) {
        iVar1 = FUN__text__00680340(param_1,*(int *)(param_2 + 8),param_2,0xfffffdeb);
        iVar3 = -0x67;
        if (iVar1 < -900) {
          iVar3 = iVar1;
        }
        return iVar3;
      }
      FUN__text__00685e3c(param_3);
      if ((*(uint *)(param_3 + 0xb8) == 0) ||
         ((*(uint *)(param_3 + 0xb8) & 1) != (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
        *(long *)(param_1 + 0x8f8) = *(long *)(param_1 + 0x8f8) + -1;
      }
      *(long *)(param_1 + 0x8f0) = *(long *)(param_1 + 0x8f0) + 1;
      if (*(code **)(param_1 + 0x820) == (code *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(param_1 + 0x820))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = -0x386;
      }
      if (iVar1 != -0x209) {
        iVar1 = iVar3;
      }
      return iVar1;
    }
    uVar2 = 0x7183b1;
  }
  else {
    uVar2 = 0x718377;
  }
  iVar1 = FUN__text__0067c768(param_1,param_2,0xfffffe07,uVar2);
  iVar3 = -0x67;
  if (iVar1 < -900) {
    iVar3 = iVar1;
  }
  return iVar3;
}


