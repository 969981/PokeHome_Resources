/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b6244; name: FUN_.text__001b6244
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001b6244(long param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_f0 [24];
  long local_d8;
  long local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_1 + 0x5b80) != '\0') {
    lVar9 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(lVar9 + 0x2d0);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0xe8);
    uVar1 = *(uint *)(lVar7 + 0x2c);
    uVar2 = *(uint *)(lVar7 + 0x30);
    if (*(int *)(param_1 + 0x5b84) == 1) {
      if ((*(long *)(lVar9 + 0x2d0) == 0) ||
         (uVar6 = FUN__text__003c7ec0(*(long *)(lVar9 + 0x2d0),
                                      param_1 + (ulong)uVar1 * 1000 + (ulong)uVar2 * 200 + 0x1498),
         (uVar6 & 1) != 0)) {
        lVar7 = param_1 + (ulong)uVar1 * 1000 + (ulong)uVar2 * 200;
        FUN__text__003c7c60(lVar8,lVar7 + 0x1478,0);
        FUN__text__003c7c60(lVar8,lVar7 + 0x13f8,0);
        FUN__text__0012c378(lVar9 + 0x110,lVar7 + 0x1490);
        *(char *)(param_1 + 0x5b80) = '\0';
        *(int *)(param_1 + 0x5b84) = *(int *)(param_1 + 0x5b84) + 1;
        FUN__text__001a1728(*(undefined8 *)(param_1 + 0x38));
        FUN__text__001ad480(*(undefined8 *)(param_1 + 0x4d0));
        local_d0 = 0;
        FUN__text__001a1914(*(undefined8 *)(param_1 + 0x38),&local_d0);
        if (local_d0 != 0) {
          (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
        }
      }
    }
    else if (*(int *)(param_1 + 0x5b84) == 0) {
      FUN__text__0012c378(lVar9 + 0x110,param_1 + (ulong)uVar1 * 1000 + (ulong)uVar2 * 200 + 0x1498)
      ;
      lVar9 = *_DAT_0089f598;
      FUN__text__005e927c(auStack_f0,_DAT_008a0600);
      uVar5 = FUN__text__003eec14(lVar9);
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      iVar4 = FUN__text__003ef560(lVar9,auStack_f0,uVar5,0);
      if (iVar4 != 0) {
        FUN__text__0015e5bc(*(undefined8 *)(lVar9 + 0x210),auStack_f0,iVar4,uVar5,0,&local_d0,0);
        pcVar3 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = 0;
          local_c8 = (code *)0x0;
          (*pcVar3)(&local_b0);
        }
      }
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      }
      *(int *)(param_1 + 0x5b84) = *(int *)(param_1 + 0x5b84) + 1;
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
  }
  return;
}


