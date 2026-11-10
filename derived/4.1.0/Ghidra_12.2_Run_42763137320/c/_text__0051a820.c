/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051a820; name: FUN_.text__0051a820
 */


bool FUN__text__0051a820(long param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint local_24;
  
  if (param_2 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 0x128) == *(long *)(param_1 + 0x158)) {
      if (*(char *)(*(long *)(param_1 + 0x120) + 0x54) == '\0') {
        uVar2 = *(uint *)(*(long *)(param_2 + 0xe) + 0x30);
        if (uVar2 != 0) {
          plVar3 = *(long **)(*(long *)(param_2 + 0xe) + 0x28);
          lVar5 = (ulong)uVar2 << 3;
          do {
            if (*plVar3 == *(long *)(param_1 + 0x120)) goto LAB__text__0051a934;
            plVar3 = plVar3 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        local_24 = 0;
        plVar3 = (long *)FUN__text__0051f820(*(long *)(param_1 + 0x158),
                                             *(undefined8 *)(param_2 + 0xe),&local_24);
        uVar4 = (ulong)local_24;
        if (local_24 != 0) {
          do {
            if (*plVar3 == *(long *)(param_1 + 0x120)) goto LAB__text__0051a934;
            uVar4 = uVar4 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar4 != 0);
        }
      }
    }
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = *param_2;
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0x10) = param_2[1];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0x20) = param_2[2];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0x30) = param_2[3];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0x40) = param_2[4];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0x50) = param_2[5];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0x60) = param_2[6];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0x70) = param_2[7];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0x80) = param_2[8];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0x90) = param_2[9];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0xa0) = param_2[10];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 4 + 0xb0) = param_2[0xb];
    *(undefined4 **)(param_1 + (ulong)*(uint *)(param_1 + 0x160) * 8 + 0x138) = param_2;
    iVar1 = *(int *)(param_1 + 0x160) + 1;
    *(int *)(param_1 + 0x160) = iVar1;
    if (iVar1 == 4) {
      FUN__text__0051a9cc(param_1);
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
  }
LAB__text__0051a934:
  return *(char *)(param_1 + 0x169) == '\0';
}


