/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b6ab0; name: FUN_.text__001b6ab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001b6ab0(undefined1 param_1 [16],int param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  uint local_240;
  int iStack_23c;
  int local_238;
  int iStack_234;
  int local_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_168 [24];
  long local_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [144];
  undefined1 auStack_b0 [52];
  char local_7c [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong uStack_60;
  uint local_58;
  
  if (*(char *)(param_3 + 0x5b88) == '\0') {
    return;
  }
  lVar9 = *(long *)(param_3 + 8);
  lVar8 = *(long *)(lVar9 + 0x2d0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_3 + 0x38);
  local_7c[0] = '\0';
  local_78 = 0;
  lVar7 = *(long *)(lVar6 + 0xe8);
  local_70 = 0;
  local_68 = *(undefined8 *)(lVar7 + 0x20);
  uStack_60 = *(ulong *)(lVar7 + 0x28);
  local_58 = *(uint *)(lVar7 + 0x30);
  iVar2 = (int)((ulong)local_68 >> 0x20);
  uVar10 = (ulong)(*(int *)(lVar6 + 0x1b0) != iVar2 && *(int *)(lVar6 + 0x1b4) == iVar2);
  FUN__text__001912c0(&local_68,local_7c);
  memcpy(auStack_148,(void *)(param_3 + (uStack_60 >> 0x20) * 1000 + (ulong)local_58 * 200 + 0x42d0)
         ,200);
  iVar2 = *(int *)(param_3 + 0x5b8c);
  if (iVar2 == 2) {
    FUN__text__001a011c(*(undefined8 *)(param_3 + 0x38));
    FUN__text__001a0414(*(undefined8 *)(param_3 + 0x38));
    FUN__text__003c7c60(lVar8,auStack_140,0);
    local_240 = local_240 & 0xffffff00;
    iStack_23c = 0;
    local_238 = 0;
    iStack_234 = 0;
    local_230 = 0;
    FUN__text__001912c0(&local_68,&local_240);
    uVar3 = local_58;
    if (((((local_240 & 0xff) == (uint)*(byte *)(param_3 + 0x5a58)) &&
         (iStack_23c == *(int *)(param_3 + 0x5a5c))) && (local_238 == *(int *)(param_3 + 0x5a60)))
       && ((iStack_234 == *(int *)(param_3 + 0x5a64) && (local_230 == *(int *)(param_3 + 0x5a68)))))
    {
      uVar10 = uStack_60 >> 0x20;
      lVar9 = *(long *)(*(long *)(param_3 + 8) + 0x2d0);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar6 = param_3 + uVar10 * 1000 + (ulong)uVar3 * 200;
      FUN__text__003c7c60(lVar9,lVar6 + 0x13f8,1);
      FUN__text__0012c378(*(long *)(param_3 + 8) + 0x110,lVar6 + 0x14a0);
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    FUN__text__001bc4a0(param_3,0,0,0);
    FUN__text__001ad4a8(*(undefined8 *)(param_3 + 0x4d0));
    FUN__text__001a193c(*(undefined8 *)(param_3 + 0x38));
    iVar2 = *(int *)(param_3 + 0x5b8c);
    *(undefined1 *)(param_3 + 0x5b88) = 0;
  }
  else {
    if (iVar2 == 1) {
      local_240 = FUN__text__001a010c(*(undefined8 *)(param_3 + 0x38));
      iStack_23c = param_2;
      uVar3 = FUN__text__0019694c(*_DAT_008a05f0,&local_240,&local_240,param_3 + 0x5b70);
      FUN__text__001a0114(*(undefined8 *)(param_3 + 0x38),&local_240);
      if (((*(long *)(lVar9 + 0x2d0) != 0) &&
          (uVar4 = FUN__text__003c7ec0(*(long *)(lVar9 + 0x2d0),auStack_b0), ((uVar4 ^ 1) & 1) != 0)
          ) || (((uVar3 ^ 1) & 1) != 0)) goto LAB__text__001b6f20;
    }
    else {
      if (iVar2 != 0) goto LAB__text__001b6f20;
      FUN__text__0012c378(lVar9 + 0x110,auStack_b0);
      lVar9 = *_DAT_0089f598;
      FUN__text__005e927c(auStack_168,_DAT_008a0618);
      uVar5 = FUN__text__003eec14(lVar9);
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_230 = 0;
      uStack_22c = 0;
      uStack_228 = 0;
      local_240 = 0;
      iStack_23c = 0;
      local_238 = 0;
      iStack_234 = 0;
      iVar2 = FUN__text__003ef560(lVar9,auStack_168,uVar5,0);
      if (iVar2 != 0) {
        FUN__text__0015e5bc(*(undefined8 *)(lVar9 + 0x210),auStack_168,iVar2,uVar5,0,&local_240,0);
        pcVar1 = (code *)CONCAT44(iStack_234,local_238);
        if (pcVar1 != (code *)0x0) {
          local_230 = 0;
          uStack_22c = 0;
          uStack_228 = 0;
          local_240 = 0;
          iStack_23c = 0;
          local_238 = 0;
          iStack_234 = 0;
          (*pcVar1)(&local_220);
        }
      }
      if (local_150 != 0) {
        (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
      }
      uVar11 = FUN__text__001a010c(*(undefined8 *)(param_3 + 0x38));
      *(undefined4 *)(param_3 + 0x5b70) = uVar11;
      *(int *)(param_3 + 0x5b74) = param_2;
      iVar2 = *(int *)(*(long *)(param_3 + 0x38) + uVar10 * 4 + 0x1bc);
      if (iVar2 != 0) {
        lVar9 = *(long *)(param_3 + 0x38) + uVar10 * 0x20;
        if (iVar2 == 4) {
          lVar9 = *(long *)(lVar9 + 0xa8);
          if ((local_7c[0] != '\0') || (local_78._4_4_ != *(int *)(lVar9 + 0x5790))) {
LAB__text__001b6ee8:
            FUN__text__001be354(&local_240,lVar9 + 0x1b0);
            uVar11 = FUN__text__003c7a60(lVar8,&local_238);
            *(undefined4 *)(param_3 + 0x5b70) = uVar11;
            *(int *)(param_3 + 0x5b74) = param_2;
            FUN__text__001be464(&local_240);
            goto LAB__text__001b6f14;
          }
          __n = 0xc0;
          lVar9 = lVar9 + (local_70 & 0xffffffff) * 0x3c0 + (ulong)local_70._4_4_ * 0xc0;
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x68);
          if (((local_7c[0] != *(char *)(lVar9 + 0x5a58)) ||
              ((int)local_78 != *(int *)(lVar9 + 0x5a5c))) ||
             ((local_78._4_4_ != *(int *)(lVar9 + 0x5a60) ||
              (((int)local_70 != *(int *)(lVar9 + 0x5a64) ||
               (local_70._4_4_ != *(uint *)(lVar9 + 0x5a68))))))) goto LAB__text__001b6ee8;
          __n = 200;
          lVar9 = lVar9 + (uStack_60 >> 0x20) * 1000 + (ulong)local_58 * 200;
        }
        memcpy(&local_240,(void *)(lVar9 + 0x13f0),__n);
        uVar11 = FUN__text__003c7a60(lVar8,&local_238);
        *(undefined4 *)(param_3 + 0x5b70) = uVar11;
        *(int *)(param_3 + 0x5b74) = param_2;
      }
    }
LAB__text__001b6f14:
    iVar2 = *(int *)(param_3 + 0x5b8c);
  }
  *(int *)(param_3 + 0x5b8c) = iVar2 + 1;
LAB__text__001b6f20:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


