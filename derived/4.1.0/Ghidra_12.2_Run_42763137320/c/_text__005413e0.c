/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005413e0; name: FUN_.text__005413e0
 */


bool FUN__text__005413e0(long param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  uint local_24;
  
  if ((param_2 != (undefined4 *)0x0) &&
     ((lVar3 = *(long *)(param_1 + 0x168), *(long *)(param_1 + 0x128) != lVar3 ||
      (*(long *)(param_2 + 0xe) != *(long *)(param_1 + 0x120))))) {
    if (*(long *)(param_1 + 0x138) == lVar3) {
      if (*(char *)(*(long *)(param_1 + 0x130) + 0x54) == '\0') {
        uVar2 = *(uint *)(*(long *)(param_2 + 0xe) + 0x30);
        if (uVar2 != 0) {
          plVar4 = *(long **)(*(long *)(param_2 + 0xe) + 0x28);
          lVar3 = (ulong)uVar2 << 3;
          do {
            if (*plVar4 == *(long *)(param_1 + 0x130)) goto LAB__text__00541510;
            plVar4 = plVar4 + 1;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      else {
        local_24 = 0;
        plVar4 = (long *)FUN__text__0051f820(lVar3,*(undefined8 *)(param_2 + 0xe),&local_24);
        uVar5 = (ulong)local_24;
        if (local_24 != 0) {
          do {
            if (*plVar4 == *(long *)(param_1 + 0x130)) goto LAB__text__00541510;
            uVar5 = uVar5 - 1;
            plVar4 = plVar4 + 1;
          } while (uVar5 != 0);
        }
      }
    }
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4) = *param_2;
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x10) = param_2[1];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x20) = param_2[2];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x30) = param_2[3];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x40) = param_2[4];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x50) = param_2[5];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x60) = param_2[6];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x70) = param_2[7];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x80) = param_2[8];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0x90) = param_2[9];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0xa0) = param_2[10];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 4 + 0xb0) = param_2[0xb];
    *(undefined4 **)(param_1 + (ulong)*(uint *)(param_1 + 0x170) * 8 + 0x148) = param_2;
    iVar1 = *(int *)(param_1 + 0x170) + 1;
    *(int *)(param_1 + 0x170) = iVar1;
    if (iVar1 == 4) {
      FUN__text__005415a0(param_1);
      *(undefined4 *)(param_1 + 0x170) = 0;
    }
  }
LAB__text__00541510:
  return *(char *)(param_1 + 0x179) == '\0';
}


