/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059761c; name: FUN_.text__0059761c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0059761c(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float __x;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  uVar1 = *(uint *)(param_1 + 0x200);
  uVar2 = *(uint *)(param_1 + 0x204);
  iVar3 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))();
  uVar10 = *(undefined8 *)(param_1 + 0x268);
  iVar3 = uVar1 + iVar3 * uVar2;
  local_88 = 0x14;
  local_98 = 0x389ba311a7b1e081;
  uStack_90 = 0x721141;
  FUN__text__005e927c(auStack_80,&local_98);
  lVar5 = FUN__text__005a1ad0(uVar10,iVar3,auStack_80);
  if (lVar5 == 0) {
    pfVar6 = (float *)0x0;
    lVar5 = 0;
  }
  else {
    iVar4 = *_DAT_008a0300;
    *(int *)(lVar5 + 0x138) = iVar4;
    FUN__text__005b52c0(*_DAT_0089f418,lVar5);
    lVar5 = lVar5 + (long)iVar4 * 0x70 + 0x58;
    pfVar6 = (float *)thunk_FUN__text__006ec5f4(lVar5);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  if (pfVar6 != (float *)0x0) {
    __x = (float)uVar2;
    iVar4 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0xb0));
    fVar11 = exp2f(__x);
    pfVar6[2] = __x;
    lVar7 = (ulong)uVar1 * 0x40;
    *pfVar6 = (float)iVar4 / fVar11;
    pfVar6[1] = (float)uVar1;
    pfVar6[3] = *(float *)(param_1 + 0x270);
    uVar10 = *(undefined8 *)(lVar7 + 0x8b4400);
    uVar8 = *(undefined8 *)(lVar7 + 0x8b4408);
    uVar9 = *(undefined8 *)(lVar7 + 0x8b4418);
    *(undefined8 *)(pfVar6 + 0x10) = *(undefined8 *)(lVar7 + 0x8b4410);
    *(undefined8 *)(pfVar6 + 0x12) = uVar9;
    *(undefined8 *)(pfVar6 + 0xc) = uVar10;
    *(undefined8 *)(pfVar6 + 0xe) = uVar8;
    uVar10 = *(undefined8 *)(lVar7 + 0x8b43e0);
    uVar8 = *(undefined8 *)(lVar7 + 0x8b43e8);
    uVar9 = *(undefined8 *)(lVar7 + 0x8b43f8);
    *(undefined8 *)(pfVar6 + 8) = *(undefined8 *)(lVar7 + 0x8b43f0);
    *(undefined8 *)(pfVar6 + 10) = uVar9;
    *(undefined8 *)(pfVar6 + 4) = uVar10;
    *(undefined8 *)(pfVar6 + 6) = uVar8;
    uVar10 = *(undefined8 *)(param_1 + 0x288);
    uVar8 = *(undefined8 *)(param_1 + 0x298);
    uVar9 = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(pfVar6 + 0x18) = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(pfVar6 + 0x1a) = uVar8;
    *(undefined8 *)(pfVar6 + 0x14) = uVar9;
    *(undefined8 *)(pfVar6 + 0x16) = uVar10;
    uVar10 = *(undefined8 *)(param_1 + 0x2a8);
    uVar8 = *(undefined8 *)(param_1 + 0x2b8);
    uVar9 = *(undefined8 *)(param_1 + 0x2a0);
    *(undefined8 *)(pfVar6 + 0x20) = *(undefined8 *)(param_1 + 0x2b0);
    *(undefined8 *)(pfVar6 + 0x22) = uVar8;
    *(undefined8 *)(pfVar6 + 0x1c) = uVar9;
    *(undefined8 *)(pfVar6 + 0x1e) = uVar10;
  }
  if (lVar5 != 0) {
    thunk_FUN__text__006ec608(lVar5);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x268);
  local_88 = 0x14;
  local_98 = 0x389ba311a7b1e081;
  uStack_90 = 0x721141;
  FUN__text__005e927c(auStack_80,&local_98);
  lVar5 = FUN__text__005a1ad0(uVar10,iVar3,auStack_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x260);
  local_88 = 0x14;
  local_98 = 0x389ba311a7b1e081;
  uStack_90 = 0x721141;
  FUN__text__005e927c(auStack_80,&local_98);
  lVar7 = FUN__text__005bc998(uVar10,0,auStack_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  if ((lVar5 != 0) && (lVar7 != 0)) {
    FUN__text__005a0f78(lVar7,*(undefined8 *)(param_1 + 0x60),lVar5);
  }
  FUN__text__005a2ae0(param_1);
  return;
}


