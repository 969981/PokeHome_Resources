/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00692500; name: FUN_.text__00692500
 */


void FUN__text__00692500(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar1 = *(int *)(param_1 + 3) - 1;
  lVar2 = param_1[2];
  *param_1 = 0;
  param_1[1] = lVar2;
  if (1 < *(int *)(param_1 + 3)) {
    if (uVar1 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      plVar4 = (long *)(lVar2 + 0x58);
      do {
        uVar3 = uVar3 + 2;
        plVar4[-0xb] = (long)plVar4;
        *plVar4 = (long)(plVar4 + 0xb);
        plVar4 = plVar4 + 0x16;
      } while (((ulong)uVar1 & 0xfffffffe) != uVar3);
    }
    if ((uVar1 & 1) != 0) {
      plVar4 = (long *)(lVar2 + uVar3 * 0x58);
      *plVar4 = (long)(plVar4 + 0xb);
    }
  }
  *(undefined8 *)(lVar2 + (long)(int)(uVar1 * 0xb) * 8) = 0;
  param_1[2] = lVar2;
  return;
}


