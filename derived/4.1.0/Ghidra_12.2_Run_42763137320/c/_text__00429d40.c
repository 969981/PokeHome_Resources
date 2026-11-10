/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00429d40; name: FUN_.text__00429d40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00429d40(long param_1,long *param_2,int *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  ushort uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long *local_58;
  
  lVar11 = *param_2;
  lVar17 = lVar11 + 0xc;
  *param_2 = lVar11 + 4;
  iVar9 = *(int *)(lVar11 + 4);
  *param_2 = lVar11 + 8;
  uVar13 = *(uint *)(lVar11 + 8);
  uVar14 = (ulong)uVar13;
  *param_2 = lVar17;
  if (iVar9 != -1) {
    local_58 = (long *)0x0;
    iVar8 = FUN__text__00425c90(_DAT_008a47e8,iVar9,&local_58);
    if (iVar8 == 1 && local_58 != (long *)0x0) {
      iVar8 = (**(code **)(*local_58 + 0x20))(local_58,_DAT_008a47e8,lVar17,uVar14);
      plVar7 = local_58;
      if (iVar8 != 1) {
        (**(code **)(*local_58 + 0x28))(local_58,_DAT_008a47e8);
        *param_2 = *param_2 + uVar14;
        *param_3 = *param_3 - uVar13;
        return iVar8;
      }
      plVar10 = *(long **)(param_1 + 0x38);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10,_DAT_008a47e8);
      }
      *(int *)(param_1 + 0x30) = iVar9;
      *(long **)(param_1 + 0x38) = plVar7;
    }
    else {
      *(int *)(param_1 + 0x30) = iVar9;
    }
    lVar17 = *param_2;
  }
  *param_2 = lVar17 + uVar14;
  *param_3 = *param_3 - uVar13;
  bVar5 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  if (bVar5 != 0) {
    uVar13 = *(uint *)(param_1 + 0x48);
    uVar15 = (uint)bVar5;
    uVar16 = (uint)bVar5;
    if ((uVar13 < bVar5 || uVar13 == uVar15) && (*(uint *)(param_1 + 0x4c) < uVar15)) {
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar17 = FUN__text__00400fa0();
        if (lVar17 == 0) {
          return 0x34;
        }
LAB__text__00429e70:
        *(long *)(param_1 + 0x40) = lVar17;
        *(uint *)(param_1 + 0x4c) = uVar16;
        goto LAB__text__00429e78;
      }
      lVar17 = FUN__text__00400f80(0,(ulong)bVar5 << 2);
      if (lVar17 == 0) {
        return 0x34;
      }
      lVar11 = *(long *)(param_1 + 0x40);
      if ((lVar11 == 0) || (lVar11 == lVar17)) goto LAB__text__00429e70;
      if (uVar13 != 0) {
        if (uVar13 == 1) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          do {
            lVar11 = uVar14 * 4;
            uVar14 = uVar14 + 2;
            *(undefined4 *)(lVar17 + lVar11) = *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar11);
            ((undefined4 *)(lVar17 + lVar11))[1] =
                 *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar11 + 4);
          } while (((ulong)uVar13 & 0xfffffffe) != uVar14);
        }
        if ((uVar13 & 1) != 0) {
          *(undefined4 *)(lVar17 + uVar14 * 4) =
               *(undefined4 *)(*(long *)(param_1 + 0x40) + uVar14 * 4);
        }
        lVar11 = *(long *)(param_1 + 0x40);
      }
      FUN__text__00400fc0(0,lVar11);
      *(long *)(param_1 + 0x40) = lVar17;
      *(uint *)(param_1 + 0x48) = uVar15;
      *(uint *)(param_1 + 0x4c) = uVar15;
      if (uVar16 == 0) goto LAB__text__00429f0c;
    }
    else {
LAB__text__00429e78:
      *(uint *)(param_1 + 0x48) = uVar16;
    }
    if (uVar16 == 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar17 = *param_2;
        lVar11 = uVar14 * 4;
        uVar14 = uVar14 + 2;
        *param_2 = lVar17 + 1;
        uVar4 = *(undefined4 *)(lVar17 + 1);
        *param_2 = lVar17 + 5;
        *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar11) = uVar4;
        lVar17 = *param_2;
        *param_2 = lVar17 + 1;
        uVar4 = *(undefined4 *)(lVar17 + 1);
        *param_2 = lVar17 + 5;
        *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar11 + 4) = uVar4;
      } while (((ulong)bVar5 & 0xfe) != uVar14);
    }
    if ((bVar5 & 1) != 0) {
      lVar17 = *param_2;
      *param_2 = lVar17 + 1;
      uVar4 = *(undefined4 *)(lVar17 + 1);
      *param_2 = lVar17 + 5;
      *(undefined4 *)(*(long *)(param_1 + 0x40) + uVar14 * 4) = uVar4;
    }
  }
LAB__text__00429f0c:
  iVar9 = FUN__text__0042a310(param_2,param_3,param_1);
  if (iVar9 != 1) {
    return iVar9;
  }
  iVar9 = (**(code **)(*(long *)(param_1 + 0x18) + 0x70))((long *)(param_1 + 0x18),param_2,param_3);
  if (iVar9 != 1) {
    return iVar9;
  }
  uVar6 = *(ushort *)*param_2;
  *param_2 = (long)((ushort *)*param_2 + 1);
  if (uVar6 == 0) {
    return 1;
  }
  uVar13 = (uint)uVar6;
  if (*(uint *)(param_1 + 0x6c) < (uint)uVar6) {
    if (*(long *)(param_1 + 0x60) == 0) {
      uVar15 = *(uint *)(param_1 + 0x68);
      lVar17 = FUN__text__00400f80(0,(ulong)uVar6 << 3);
      if (lVar17 == 0) {
        return 0x34;
      }
      if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x60) != lVar17)) {
        if (uVar15 != 0) {
          lVar11 = 0;
          do {
            puVar3 = (undefined8 *)(lVar17 + lVar11);
            *(undefined2 *)puVar3 = 0;
            *(undefined1 *)((long)puVar3 + 2) = 0;
            *(undefined4 *)((long)puVar3 + 4) = 0;
            puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar11);
            lVar11 = lVar11 + 8;
            *puVar3 = *puVar1;
          } while ((ulong)uVar15 * 8 != lVar11);
          FUN__text__00400fc0(0,*(undefined8 *)(param_1 + 0x60));
          *(long *)(param_1 + 0x60) = lVar17;
          *(uint *)(param_1 + 0x6c) = uVar13;
          if (uVar13 == 0) {
            return 1;
          }
          goto LAB__text__00429f8c;
        }
        FUN__text__00400fc0(0);
      }
    }
    else {
      lVar17 = FUN__text__00400fa0(0);
      if (lVar17 == 0) {
        return 0x34;
      }
    }
    *(long *)(param_1 + 0x60) = lVar17;
    *(uint *)(param_1 + 0x6c) = uVar13;
  }
LAB__text__00429f8c:
  uVar15 = 0;
  do {
    pbVar12 = (byte *)*param_2 + 1;
    bVar5 = *(byte *)*param_2;
    *param_2 = (long)pbVar12;
    uVar6 = bVar5 & 0x7f;
    while ((char)bVar5 < '\0') {
      bVar5 = *pbVar12;
      *param_2 = (long)(pbVar12 + 1);
      uVar6 = bVar5 & 0x7f | uVar6 << 7;
      pbVar12 = pbVar12 + 1;
    }
    bVar5 = *pbVar12;
    *param_2 = (long)(pbVar12 + 1);
    uVar18 = *(uint *)(pbVar12 + 1);
    *param_2 = (long)(pbVar12 + 5);
    lVar17 = *(long *)(param_1 + 0x60);
    uVar16 = *(uint *)(param_1 + 0x68);
    if (uVar16 != 0) {
      pbVar12 = (byte *)(lVar17 + 2);
      lVar11 = (ulong)uVar16 << 3;
      do {
        if (*(ushort *)(pbVar12 + -2) == uVar6) {
          *(uint *)(pbVar12 + 2) = uVar18;
          *pbVar12 = bVar5;
          goto LAB__text__00429fa8;
        }
        pbVar12 = pbVar12 + 8;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    if (uVar16 < *(uint *)(param_1 + 0x6c)) {
LAB__text__0042a058:
      *(uint *)(param_1 + 0x68) = uVar16 + 1;
      if (lVar17 != 0) {
        puVar2 = (uint *)(lVar17 + (ulong)uVar16 * 8);
        puVar2[1] = uVar18;
        *puVar2 = (uint)CONCAT12(bVar5,uVar6);
      }
    }
    else {
      uVar14 = FUN__text__0042cca0(param_1 + 0x60);
      if (((uVar14 & 1) != 0) && (uVar16 < *(uint *)(param_1 + 0x6c))) {
        uVar16 = *(uint *)(param_1 + 0x68);
        lVar17 = *(long *)(param_1 + 0x60);
        goto LAB__text__0042a058;
      }
    }
LAB__text__00429fa8:
    uVar15 = uVar15 + 1;
    if (uVar15 == uVar13) {
      return 1;
    }
  } while( true );
}


