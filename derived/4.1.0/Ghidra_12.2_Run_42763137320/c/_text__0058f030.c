/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058f030; name: FUN_.text__0058f030
 */


void FUN__text__0058f030(int *param_1,ushort param_2,long param_3,long *param_4,uint *param_5,
                        undefined8 param_6)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ushort *__src;
  ulong uVar10;
  ushort *__dest;
  ulong uVar11;
  int iVar12;
  ulong __n;
  ushort *local_78;
  uint local_70;
  undefined1 local_68;
  
  *param_1 = 0;
  iVar8 = param_1[8];
  __dest = (ushort *)0x0;
  uVar4 = param_1[0x1a];
  uVar11 = (ulong)uVar4;
  uVar10 = 0;
  piVar2 = param_1 + 4;
  uVar5 = *(uint *)(*(long *)(param_1 + 10) + 4);
  do {
    if (uVar11 < uVar10 + 2) {
LAB__text__0058f17c:
      param_1[3] = (int)uVar10;
      param_1[1] = 0x2e;
      if (**(long **)(param_1 + 0xc) != 0) {
        FUN__text__00586420(piVar2);
      }
      goto joined_r0x0058f19c;
    }
    iVar12 = param_1[0x1b];
    if (__dest != (ushort *)0x0) {
      FUN__text__00400fc0(5,__dest);
    }
    __src = (ushort *)(param_3 + uVar10) + 1;
    uVar6 = *(ushort *)(param_3 + uVar10);
    __n = (ulong)uVar6;
    if (param_2 < uVar6) {
LAB__text__0058f1a4:
      __dest = (ushort *)0x0;
      param_1[0] = 0;
      param_1[1] = 2;
      goto joined_r0x0058f19c;
    }
    if ((param_1[2] == 4) || (uVar3 = uVar10 + 2 + __n, uVar11 < uVar3)) {
      __dest = (ushort *)0x0;
      goto LAB__text__0058f17c;
    }
    if (uVar11 < uVar3 + 8) {
      __dest = (ushort *)FUN__text__00400f80(5,__n + 8);
      if (__dest == (ushort *)0x0) goto LAB__text__0058f1a4;
      memcpy(__dest,__src,__n);
      __src = __dest;
    }
    else {
      __dest = (ushort *)0x0;
    }
    local_70 = (uint)uVar6;
    bVar7 = (char)iVar12 != '\0';
    uVar1 = (int)uVar10 + local_70 + 2;
    uVar10 = (ulong)uVar1;
    local_68 = bVar7 && uVar1 == uVar4;
    if (bVar7 && uVar1 == uVar4) {
      param_1[2] = 4;
    }
    local_78 = __src;
    FUN__text__005861f0(piVar2,&local_78,param_6,(uVar5 & 0x7ffffffe) * 2 * iVar8 + 0xf & 0xfffffff0
                       );
    iVar12 = param_1[0x11] - param_1[0x10];
  } while (iVar12 == 0);
  param_1[3] = uVar1;
  iVar8 = param_1[8];
  uVar4 = iVar12 * iVar8 * 4;
  if ((*param_4 == 0) || (*param_5 < uVar4)) {
    if (*param_4 != 0) {
      FUN__text__00400fc0(5);
    }
    lVar9 = FUN__text__00400f90(5,uVar4,0x10);
    *param_4 = lVar9;
    if (lVar9 == 0) {
      param_1[0x19] = 0;
      param_1[1] = 2;
      goto joined_r0x0058f19c;
    }
    *param_5 = uVar4;
    iVar8 = param_1[8];
    uVar4 = param_1[0x18];
  }
  else {
    uVar4 = param_1[0x18];
  }
  if ((uVar4 >> 0xf & 1) == 0) {
    iVar8 = iVar8 + 1;
  }
  else {
    iVar8 = (uVar4 >> 0xe & 1) + (uVar4 >> 0xd & 1) + (uVar4 >> 0xc & 1);
  }
  FUN__text__00585f70(piVar2,*param_4,iVar12,iVar8);
  param_1[0x19] = iVar12;
  *param_1 = iVar12;
  if (param_1[2] == 4) {
    iVar8 = FUN__text__00585f70(piVar2,0,0,0);
    if (iVar8 == 0) {
      param_1[1] = 0x11;
      goto joined_r0x0058f19c;
    }
    iVar12 = *param_1;
  }
  iVar8 = 0x2d;
  if (iVar12 == 0) {
    iVar8 = 0x2e;
  }
  param_1[1] = iVar8;
joined_r0x0058f19c:
  if (__dest != (ushort *)0x0) {
    FUN__text__00400fc0(5,__dest);
  }
  return;
}


