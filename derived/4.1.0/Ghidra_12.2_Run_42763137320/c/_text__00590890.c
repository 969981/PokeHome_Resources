/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00590890; name: FUN_.text__00590890
 */


int FUN__text__00590890(long param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong __n;
  
  iVar4 = *(int *)(param_1 + 0x68);
  do {
    if (iVar4 == 0) {
      bVar3 = *(byte *)(param_1 + 0x82);
      if ((bVar3 & 1) != 0) {
        return 0x11;
      }
      if ((bVar3 >> 1 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x90))();
        iVar4 = FUN__text__004dd04c(param_1);
      }
      else {
        *(byte *)(param_1 + 0x82) = bVar3 & 0xfd;
        iVar4 = FUN__text__004dd04c(param_1);
      }
      if (iVar4 != 0x2d) {
        return iVar4;
      }
      if (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x78)) {
        *(undefined1 *)(param_1 + 0xb8) = 1;
        *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xa8);
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x84) / 400;
      }
    }
    uVar2 = *(uint *)(param_1 + 0xa4);
    piVar1 = (int *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0xb0) - 1U != uVar2) {
      piVar1 = (int *)(*(long *)(param_1 + 0xc0) + (ulong)(uVar2 + 1) * 4);
    }
    uVar7 = *(uint *)(param_1 + 0x68);
    uVar2 = *piVar1 - *(int *)(*(long *)(param_1 + 0xc0) + (ulong)uVar2 * 4) & 0xffff;
    if (uVar7 < uVar2 && *(char *)(param_1 + 0xe4) == '\0') {
      lVar5 = FUN__text__00400f80(5,uVar2);
      *(long *)(param_1 + 0xd8) = lVar5;
      if (lVar5 == 0) {
        return 0x34;
      }
      uVar6 = *(uint *)(param_1 + 0xe0);
      *(undefined1 *)(param_1 + 0xe4) = 1;
      uVar7 = *(uint *)(param_1 + 0x68);
      if (uVar2 - uVar6 <= *(uint *)(param_1 + 0x68)) {
        uVar7 = uVar2 - uVar6;
      }
      __n = (ulong)uVar7;
LAB__text__005908e8:
      uVar8 = (uint)__n;
      memcpy((void *)(*(long *)(param_1 + 0xd8) + (ulong)uVar6),*(void **)(param_1 + 0x60),__n);
      uVar6 = *(uint *)(param_1 + 0xe0);
      lVar5 = *(long *)(param_1 + 0x60);
      uVar7 = *(uint *)(param_1 + 0x68);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xe0);
      uVar8 = uVar7;
      if (uVar2 - uVar6 <= uVar7) {
        uVar8 = uVar2 - uVar6;
      }
      __n = (ulong)uVar8;
      if (*(char *)(param_1 + 0xe4) != '\0') goto LAB__text__005908e8;
      lVar5 = *(long *)(param_1 + 0x60);
      *(long *)(param_1 + 0xd8) = lVar5;
    }
    *(ulong *)(param_1 + 0x60) = lVar5 + __n;
    iVar4 = uVar7 - uVar8;
    *(uint *)(param_1 + 0xe0) = uVar6 + uVar8;
    *(int *)(param_1 + 0x68) = iVar4;
    *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar8;
    if (uVar6 + uVar8 == uVar2) {
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
      return 0x2d;
    }
  } while( true );
}


