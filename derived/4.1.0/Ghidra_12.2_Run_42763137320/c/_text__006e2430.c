/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e2430; name: FUN_.text__006e2430
 */


void FUN__text__006e2430(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x1d0);
  puVar1 = (undefined8 *)(param_2 + 0x1d0);
  if (((lVar2 == 0) && (*(long *)(param_2 + 0x1d8) == 0)) && (*(char *)(param_2 + 0xf) != '\0')) {
    lVar2 = param_1 + (long)*(int *)(param_2 + 0x14) * 8;
    if (*(long *)(lVar2 + 0x4b0) == param_2) {
      *(undefined8 *)(lVar2 + 0x4b0) = 0;
      lVar2 = (long)*(int *)(param_2 + 0x14);
      lVar3 = *(long *)(param_1 + lVar2 * 8 + 0x4b0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x1d8) = 0;
        lVar2 = (long)*(int *)(param_2 + 0x14);
      }
      param_1 = param_1 + lVar2 * 8;
      if (*(long *)(param_1 + 0x6b0) == param_2) {
        *(undefined8 *)(param_1 + 0x6b0) = 0;
        *(undefined1 *)(param_2 + 0xf) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_2 + 0x1d8) = 0;
        return;
      }
      *(undefined1 *)(param_2 + 0xf) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x1d8) = 0;
      return;
    }
    if (*(long *)(lVar2 + 0x6b0) == param_2) {
      *(undefined8 *)(lVar2 + 0x6b0) = 0;
      lVar2 = *(long *)(param_2 + 0x1d8);
      if (*(long *)(param_2 + 0x1d0) != 0) {
        *(long *)(*(long *)(param_2 + 0x1d0) + 0x1d8) = lVar2;
        lVar2 = *(long *)(param_2 + 0x1d8);
      }
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x1d0) = *puVar1;
        *(undefined1 *)(param_2 + 0xf) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_2 + 0x1d8) = 0;
        return;
      }
    }
    FUN__text__006d8380(0x71228c);
    *(undefined1 *)(param_2 + 0xf) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x1d8) = 0;
    return;
  }
  lVar3 = param_1 + (long)*(int *)(param_2 + 0x14) * 8;
  if (*(long *)(lVar3 + 0xb0) == param_2) {
    *(long *)(lVar3 + 0xb0) = lVar2;
    lVar2 = (long)*(int *)(param_2 + 0x14);
    lVar3 = *(long *)(param_1 + lVar2 * 8 + 0xb0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x1d8) = 0;
      lVar2 = (long)*(int *)(param_2 + 0x14);
    }
    param_1 = param_1 + lVar2 * 8;
    if (*(long *)(param_1 + 0x2b0) == param_2) {
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x1d8) = 0;
      return;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x2b0) == param_2) {
      *(undefined8 *)(lVar3 + 0x2b0) = *(undefined8 *)(param_2 + 0x1d8);
      lVar2 = *(long *)(param_2 + 0x1d0);
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
    }
    if (*(long *)(param_2 + 0x1d8) == 0) {
      FUN__text__006d8380(0x71228c);
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x1d8) = 0;
      return;
    }
    *(undefined8 *)(*(long *)(param_2 + 0x1d8) + 0x1d0) = *puVar1;
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x1d8) = 0;
  return;
}


