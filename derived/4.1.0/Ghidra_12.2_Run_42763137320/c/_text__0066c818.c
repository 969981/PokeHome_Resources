/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c818; name: FUN_.text__0066c818
 */


int FUN__text__0066c818(long *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  size_t __n;
  void *__src;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  undefined7 local_68;
  undefined4 uStack_61;
  undefined8 local_58;
  
  lVar8 = *param_1;
  local_58 = 0;
  iVar3 = *(int *)(lVar8 + 0x15a0);
  if (iVar3 == 1) {
    FUN__text__00666f74(lVar8,0x70f296);
    *(undefined4 *)(lVar8 + 0x15a0) = 2;
    lVar5 = FUN__text__0065fd58();
    *(long *)(lVar8 + 0x1598) = lVar5;
    if (lVar5 == 0) {
      FUN__text__0066713c(lVar8,0x70bd22);
      return 0x1b;
    }
    *(undefined8 *)(lVar8 + 0x1590) = 0;
    FUN__text__0065cab0(lVar8,1);
    iVar3 = (**(code **)(lVar8 + 0xf38))(&local_58,*(undefined8 *)(lVar8 + 0xf30));
    FUN__text__0065cab0(lVar8,0);
    if (iVar3 != 0) {
      FUN__text__0066713c(lVar8,0x716eef);
      *param_3 = 0;
      iVar3 = 0x2a;
LAB__text__0066c8f8:
      FUN__text__0065fd64(lVar8 + 0x1598);
      FUN__text__0066bd88(local_58);
      return iVar3;
    }
    iVar3 = FUN__text__0066031c(local_58,*(undefined8 *)(lVar8 + 0x1598),lVar8);
    if (iVar3 != 0) goto LAB__text__0066c8f8;
    FUN__text__00666f74(lVar8,0x718ed1);
    FUN__text__0066bd88(local_58);
    iVar3 = *(int *)(lVar8 + 0x15a0);
  }
  if (((*(ushort *)(lVar8 + 0x660) >> 6 & 1) == 0) || (iVar3 != 0)) {
    if (iVar3 != 2) goto LAB__text__0066c964;
    pcVar9 = FUN__text__0066cbcc;
    lVar5 = lVar8;
  }
  else {
    param_2 = param_2 - 0xc;
    *(long *)(lVar8 + 0x1e0) = *(long *)(lVar8 + 0x1e0) + 10;
LAB__text__0066c964:
    pcVar9 = *(code **)(lVar8 + 0x1528);
    lVar5 = *(long *)(lVar8 + 0x1530);
  }
  FUN__text__0065cab0(lVar8,1);
  uVar6 = (*pcVar9)(*(undefined8 *)(lVar8 + 0x1e0),1,param_2,lVar5);
  FUN__text__0065cab0(lVar8,0);
  if (uVar6 == 0x10000001) {
    if ((*(byte *)(param_1[0x84] + 0x84) >> 4 & 1) == 0) {
      *(uint *)(lVar8 + 0x1c0) = *(uint *)(lVar8 + 0x1c0) | 0x20;
      if ((*(ushort *)(lVar8 + 0x660) >> 6 & 1) != 0) {
        *(long *)(lVar8 + 0x1e0) = *(long *)(lVar8 + 0x1e0) + -10;
      }
      *param_3 = 0;
      return 0;
    }
    uVar7 = 0x71f98a;
LAB__text__0066ca2c:
    FUN__text__0066713c(lVar8,uVar7);
    return 0x1a;
  }
  if (uVar6 == 0x10000000) {
    FUN__text__0066713c(lVar8,0x7113c0);
    *param_3 = 0;
    return 0x2a;
  }
  if (param_2 < uVar6) {
    *param_3 = 0;
    uVar7 = 0x719a35;
    goto LAB__text__0066ca2c;
  }
  if ((*(ushort *)(lVar8 + 0x660) & 0x140) != 0x40) goto LAB__text__0066cb88;
  iVar3 = *(int *)(lVar8 + 0x15a0);
  local_68 = 0;
  uStack_61 = 0;
  uVar1 = *(ulong *)(lVar8 + 0xf40) & 0x840;
  __src = (void *)0x7149a6;
  if (uVar1 != 0) {
    __src = (void *)0x718d91;
  }
  if (iVar3 == 2) {
    iVar4 = 0;
    uVar10 = uVar6;
LAB__text__0066caf8:
    if (*(long *)(*(long *)(lVar8 + 0x1598) + 0x10) == *(long *)(lVar8 + 0x1590)) {
      FUN__text__0065fd64(lVar8 + 0x1598);
      *(undefined8 *)(lVar8 + 0xf30) = 0;
      uVar7 = 0x70b371;
      *(undefined4 *)(lVar8 + 0x15a0) = 3;
      uVar2 = *(ushort *)(lVar8 + 0x660);
      *(undefined8 *)(lVar8 + 0xf38) = 0;
LAB__text__0066cb5c:
      *(ushort *)(lVar8 + 0x660) = uVar2 | 4;
      FUN__text__00666f74(lVar8,uVar7);
    }
    else if (uVar10 == (long)iVar4) {
LAB__text__0066cb50:
      uVar2 = *(ushort *)(lVar8 + 0x660);
      uVar7 = 0x712c90;
      goto LAB__text__0066cb5c;
    }
    uVar6 = uVar10;
    if (iVar3 == 2) goto LAB__text__0066cb88;
  }
  else {
    iVar4 = FUN__text__006599c0(&local_68,0xb,0x70ea3e,uVar6,__src);
    uVar10 = uVar6 + (long)iVar4;
    __dest = (void *)(*(long *)(lVar8 + 0x1e0) - (long)iVar4);
    *(void **)(lVar8 + 0x1e0) = __dest;
    memcpy(__dest,&local_68,(long)iVar4);
    if (((uVar6 == 0) && (*(long *)(lVar8 + 0xf38) != 0)) && (*(int *)(lVar8 + 0x15a0) == 0)) {
      *(undefined4 *)(lVar8 + 0x15a0) = 1;
      uVar6 = uVar10;
      goto LAB__text__0066cb88;
    }
    __n = 1;
    if (uVar1 == 0) {
      __n = 2;
    }
    memcpy((void *)(*(long *)(lVar8 + 0x1e0) + uVar10),__src,__n);
    if (*(int *)(lVar8 + 0x15a0) == 2) goto LAB__text__0066caf8;
    if ((uVar6 == 0) && (*(int *)(lVar8 + 0x15a0) != 1)) goto LAB__text__0066cb50;
  }
  lVar8 = 1;
  if (uVar1 == 0) {
    lVar8 = 2;
  }
  uVar6 = uVar10 + lVar8;
LAB__text__0066cb88:
  *param_3 = uVar6;
  return 0;
}


