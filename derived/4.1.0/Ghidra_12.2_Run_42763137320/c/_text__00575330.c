/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00575330; name: FUN_.text__00575330
 */


undefined8 FUN__text__00575330(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x158);
  if (*(char *)(lVar5 + 0x98) == '\0') {
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x135) = 0;
    if (*(int *)(lVar5 + 0x80) - 2U < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (*(int *)(lVar5 + 0x80) == 1) {
        uVar3 = (ulong)*(byte *)(param_1 + 0x138);
      }
    }
    *(char *)(param_1 + 0x136) = (char)uVar3;
    if (*(int *)(lVar5 + 0x88) - 2U < 2) {
      uVar3 = (ulong)((int)uVar3 + 1);
    }
    else if (*(int *)(lVar5 + 0x88) == 1) {
      uVar3 = (ulong)((int)uVar3 + (uint)*(byte *)(param_1 + 0x138));
    }
    *(char *)(param_1 + 0x137) = (char)uVar3;
    if (*(int *)(lVar5 + 0x90) - 2U < 2) {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      *(char *)(param_1 + 0x134) = (char)uVar1;
    }
    else {
      if (*(int *)(lVar5 + 0x90) == 1) {
        uVar3 = (ulong)((int)uVar3 + (uint)*(byte *)(param_1 + 0x138));
      }
      *(char *)(param_1 + 0x134) = (char)uVar3;
      if ((int)uVar3 == 0) goto LAB__text__00575464;
    }
    lVar5 = (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                      (*(long **)(param_1 + 0x160),uVar3 * 0xa0,0x715356,0x163);
    *(long *)(param_1 + 0x148) = lVar5;
    if (lVar5 == 0) {
      return 0x34;
    }
    lVar4 = 0;
    while( true ) {
      uVar3 = uVar3 - 1;
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)(lVar5 + lVar4);
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      if (uVar3 == 0) break;
      lVar5 = *(long *)(param_1 + 0x148);
      lVar4 = lVar4 + 0xa0;
    }
  }
LAB__text__00575464:
  FUN__text__00575d58(param_1);
  FUN__text__00575e3c(param_1);
  FUN__text__00575f20(param_1);
  return 1;
}


