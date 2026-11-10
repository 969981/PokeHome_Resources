/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051b660; name: FUN_.text__0051b660
 */


bool FUN__text__0051b660(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint local_18;
  uint local_14;
  
  if (param_1[1] == param_3) {
    if (*(char *)(*param_1 + 0x54) == '\0') {
      uVar1 = *(uint *)(*(long *)(param_2 + 0x38) + 0x30);
      if (uVar1 != 0) {
        plVar2 = *(long **)(*(long *)(param_2 + 0x38) + 0x28);
        lVar3 = (ulong)uVar1 << 3;
        do {
          if (*plVar2 == *param_1) {
            return true;
          }
          plVar2 = plVar2 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      local_18 = 0;
      plVar2 = (long *)FUN__text__0051f820(param_3,*(undefined8 *)(param_2 + 0x38),&local_18);
      uVar4 = (ulong)local_18;
      if (local_18 != 0) {
        do {
          if (*plVar2 == *param_1) {
            return true;
          }
          plVar2 = plVar2 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  if (param_1[3] != param_3) {
    return false;
  }
  lVar3 = param_1[2];
  if (*(char *)(lVar3 + 0x54) == '\0') {
    uVar1 = *(uint *)(*(long *)(param_2 + 0x38) + 0x30);
    if (uVar1 != 0) {
      lVar5 = (ulong)uVar1 * 8;
      plVar2 = *(long **)(*(long *)(param_2 + 0x38) + 0x28);
      do {
        lVar5 = lVar5 + -8;
        lVar6 = *plVar2;
        plVar2 = plVar2 + 1;
      } while (lVar6 != lVar3 && lVar5 != 0);
      return lVar6 == lVar3;
    }
  }
  else {
    local_14 = 0;
    plVar2 = (long *)FUN__text__0051f820(param_3,*(undefined8 *)(param_2 + 0x38),&local_14);
    uVar4 = (ulong)local_14;
    if (local_14 != 0) {
      do {
        if (*plVar2 == param_1[2]) {
          return true;
        }
        uVar4 = uVar4 - 1;
        plVar2 = plVar2 + 1;
      } while (uVar4 != 0);
    }
  }
  return false;
}


