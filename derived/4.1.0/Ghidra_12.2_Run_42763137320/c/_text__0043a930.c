/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043a930; name: FUN_.text__0043a930
 */


bool FUN__text__0043a930(long param_1,long *param_2,uint *param_3,long *param_4,uint *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  void *__dest;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  ulong uVar15;
  
  uVar7 = *param_3;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar15 = (ulong)uVar3;
  if (uVar7 == 0) {
    if (0 < (int)uVar3) {
      iVar8 = -uVar3;
      do {
        uVar10 = uVar15 - 1 & 0xffffffff;
        puVar14 = (uint *)(*(long *)(param_1 + 8) + uVar10 * 0x18);
        *param_5 = *puVar14;
        uVar6 = FUN__text__0043ac10(puVar14,param_2,param_3 + 2,param_4,param_5 + 2);
        if ((uVar6 & 1) != 0) {
          FUN__text__00438750(puVar14);
          uVar7 = *(uint *)(param_1 + 0x10);
          if (uVar15 < uVar7) {
            __dest = (void *)(*(long *)(param_1 + 8) + uVar10 * 0x18);
            memmove(__dest,(void *)((long)__dest + 0x18),(ulong)((iVar8 + uVar7) * 0x18));
            uVar7 = *(uint *)(param_1 + 0x10);
          }
          *(uint *)(param_1 + 0x10) = uVar7 - 1;
        }
        iVar8 = iVar8 + 1;
        bVar1 = 1 < uVar15;
        uVar15 = uVar15 - 1;
      } while (bVar1);
    }
  }
  else if (uVar3 != 0) {
    iVar8 = 0;
    do {
      iVar2 = iVar8 + ((uint)uVar15 >> 1);
      puVar14 = (uint *)(*(long *)(param_1 + 8) + (long)iVar2 * 0x18);
      uVar3 = *puVar14;
      if (uVar3 == uVar7) {
        *param_5 = uVar7;
        uVar15 = FUN__text__0043ac10(puVar14,param_2,param_3 + 2,param_4,param_5 + 2);
        if ((uVar15 & 1) != 0) {
          FUN__text__00438750(puVar14);
          uVar7 = *(uint *)(param_1 + 0x10);
          if (uVar7 != 0) {
            iVar8 = 0;
            uVar3 = *param_3;
            uVar9 = uVar7;
            goto LAB__text__0043aaa0;
          }
        }
        break;
      }
      if (uVar3 < uVar7) {
        iVar8 = iVar2 + 1;
      }
      uVar3 = (uint)uVar15 - (uint)(uVar3 < uVar7);
      uVar15 = (ulong)(uVar3 >> 1);
    } while (1 < uVar3);
  }
  goto LAB__text__0043ab00;
  while( true ) {
    if (uVar4 < uVar3) {
      iVar8 = iVar2 + 1;
    }
    uVar4 = uVar9 - (uVar4 < uVar3);
    uVar9 = uVar4 >> 1;
    if (uVar4 < 2) break;
LAB__text__0043aaa0:
    iVar2 = iVar8 + (uVar9 >> 1);
    puVar14 = (uint *)(*(long *)(param_1 + 8) + (long)iVar2 * 0x18);
    uVar4 = *puVar14;
    if (uVar4 == uVar3) {
      uVar7 = uVar7 - 1;
      if ((long)iVar2 < (long)(ulong)uVar7) {
        memmove(puVar14,puVar14 + 6,
                (ulong)(((int)*(long *)(param_1 + 8) + uVar7 * 0x18) - (int)puVar14));
        uVar7 = *(int *)(param_1 + 0x10) - 1;
      }
      *(uint *)(param_1 + 0x10) = uVar7;
      break;
    }
  }
LAB__text__0043ab00:
  *param_5 = 0;
  if ((((*param_3 == 0) && ((char)param_3[2] == -1)) && ((char)param_3[4] == -1)) &&
     (((*(long *)(param_3 + 6) == 0 && (*(char *)(param_1 + 6) != '\0')) && (*param_4 != 0)))) {
    uVar5 = *(ushort *)(param_1 + 4);
    lVar12 = *param_2;
    plVar13 = (long *)(lVar12 + (ulong)uVar5 * 0x28);
    lVar11 = *plVar13;
    if (lVar11 != 0) {
      FUN__text__004360b8(lVar11);
      FUN__text__00400fc0(0x10,lVar11);
      *plVar13 = 0;
    }
    lVar12 = lVar12 + (ulong)uVar5 * 0x28;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(byte *)(lVar12 + 0x18) = *(byte *)(lVar12 + 0x18) & 0xfe | 3 < *(byte *)(lVar12 + 0x18);
    *(short *)(lVar12 + 0x20) = (short)param_2[2];
    *(ushort *)(param_2 + 2) = uVar5;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      iVar8 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN__text__00400fc0(0);
      iVar8 = *(int *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return *(char *)(param_1 + 6) == '\0' && iVar8 == 0;
}


