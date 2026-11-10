/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00439f30; name: FUN_.text__00439f30
 */


bool FUN__text__00439f30(long param_1,long *param_2,ulong *param_3)

{
  uint uVar1;
  void *__dest;
  char cVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  uVar4 = *param_3;
  if (uVar4 == 0) {
    if (*(char *)(param_1 + 4) != '\0') {
      uVar3 = *(ushort *)(param_1 + 2);
      lVar10 = *param_2;
      plVar11 = (long *)(lVar10 + (ulong)uVar3 * 0x28);
      lVar9 = *plVar11;
      if (lVar9 != 0) {
        FUN__text__004360b8(lVar9);
        FUN__text__00400fc0(0x10,lVar9);
        *plVar11 = 0;
      }
      lVar10 = lVar10 + (ulong)uVar3 * 0x28;
      *(undefined4 *)(lVar10 + 0x10) = 0;
      *(byte *)(lVar10 + 0x18) = *(byte *)(lVar10 + 0x18) & 0xfe | 3 < *(byte *)(lVar10 + 0x18);
      *(short *)(lVar10 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar3;
      cVar2 = *(char *)(param_1 + 4);
      *(undefined1 *)(param_1 + 4) = 0;
      return cVar2 != '\0';
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x10);
    if (uVar5 != 0) {
      iVar6 = 0;
      while( true ) {
        uVar7 = iVar6 + (uVar5 >> 1);
        uVar8 = *(ulong *)(*(long *)(param_1 + 8) +
                          (-(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar7 << 4));
        if (uVar8 == uVar4) break;
        if (uVar8 < uVar4) {
          iVar6 = uVar7 + 1;
        }
        uVar7 = uVar5 - (uVar8 < uVar4);
        uVar5 = uVar7 >> 1;
        if (uVar7 < 2) {
          return false;
        }
      }
      lVar10 = *param_2;
      uVar3 = *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar7 * 0x10 + 8);
      plVar11 = (long *)(lVar10 + (ulong)uVar3 * 0x28);
      lVar9 = *plVar11;
      if (lVar9 != 0) {
        FUN__text__004360b8(lVar9);
        FUN__text__00400fc0(0x10,lVar9);
        *plVar11 = 0;
      }
      lVar10 = lVar10 + (ulong)uVar3 * 0x28;
      *(undefined4 *)(lVar10 + 0x10) = 0;
      *(byte *)(lVar10 + 0x18) = *(byte *)(lVar10 + 0x18) & 0xfe | 3 < *(byte *)(lVar10 + 0x18);
      *(short *)(lVar10 + 0x20) = (short)param_2[2];
      *(ushort *)(param_2 + 2) = uVar3;
      uVar5 = *(uint *)(param_1 + 0x10);
      lVar10 = *(long *)(param_1 + 8);
      if (uVar5 == 0) {
LAB__text__0043a134:
        if (lVar10 == 0) {
          return uVar5 != 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        return uVar5 != 0;
      }
      uVar4 = *param_3;
      iVar6 = 0;
      uVar7 = uVar5;
      do {
        uVar1 = iVar6 + (uVar7 >> 1);
        uVar8 = *(ulong *)(lVar10 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 |
                                    (ulong)uVar1 << 4));
        if (uVar8 == uVar4) {
          uVar7 = uVar5 - 1;
          if ((long)(int)uVar1 < (long)(ulong)uVar7) {
            __dest = (void *)(lVar10 + (long)(int)uVar1 * 0x10);
            memmove(__dest,(void *)((long)__dest + 0x10),
                    (ulong)(((int)lVar10 + uVar7 * 0x10) - (int)__dest) & 0xfffffff0);
            uVar7 = *(int *)(param_1 + 0x10) - 1;
          }
          *(uint *)(param_1 + 0x10) = uVar7;
          if (uVar7 != 0) {
            return true;
          }
          lVar10 = *(long *)(param_1 + 8);
          goto LAB__text__0043a134;
        }
        if (uVar8 < uVar4) {
          iVar6 = uVar1 + 1;
        }
        uVar1 = uVar7 - (uVar8 < uVar4);
        uVar7 = uVar1 >> 1;
      } while (1 < uVar1);
    }
  }
  return false;
}


