/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001beccc; name: FUN_.text__001beccc
 */


void FUN__text__001beccc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined2 local_64;
  
  lVar6 = *(long *)(param_1 + 0x1c0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if ((((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) || (*(long *)(param_2 + 0x158) == 0)) ||
     (lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__003c7c60(lVar6,param_4 + 0x28,0);
  FUN__text__003c7c60(lVar6,param_4 + 0x30,0);
  plVar12 = (long *)(param_4 + 0x38);
  if (*plVar12 != 0) {
    FUN__text__003c7c60(lVar6,plVar12,0);
  }
  plVar13 = (long *)(param_4 + 0x40);
  if (*plVar13 != 0) {
    FUN__text__003c7c60(lVar6,plVar13,0);
  }
  plVar14 = (long *)(param_4 + 0x48);
  if (*plVar14 != 0) {
    FUN__text__003c7c60(lVar6,plVar14,0);
  }
  plVar16 = (long *)(param_4 + 0x50);
  if (*plVar16 != 0) {
    FUN__text__003c7c60(lVar6,plVar16,0);
  }
  plVar7 = (long *)(param_4 + 0x58);
  if (*plVar7 != 0) {
    FUN__text__003c7c60(lVar6,plVar7,0);
  }
  plVar15 = (long *)(param_4 + 0x60);
  if (*plVar15 != 0) {
    FUN__text__003c7c60(lVar6,plVar15,0);
  }
  plVar8 = (long *)(param_4 + 0x68);
  if (*plVar8 != 0) {
    FUN__text__003c7c60(lVar6,plVar8,0);
  }
  plVar10 = (long *)(param_4 + 0x70);
  if (*plVar10 != 0) {
    FUN__text__003c7c60(lVar6,plVar10,0);
  }
  local_64 = 0;
  local_70 = 0;
  FUN__text__001c1070(&local_64,&local_70,param_2,param_3);
  if ((char)local_64 != '\0') {
    FUN__text__003c7c60(lVar6,param_4 + 0x28,1);
  }
  if (local_64._1_1_ != '\0') {
    FUN__text__003c7c60(lVar6,param_4 + 0x30,1);
  }
  if ((char)local_70 != '\0') {
    FUN__text__003c7c60(lVar6,plVar12,1);
  }
  if (local_70._1_1_ != '\0') {
    FUN__text__003c7c60(lVar6,plVar13,1);
  }
  if (local_70._2_1_ != '\0') {
    FUN__text__003c7c60(lVar6,plVar14,1);
  }
  if (local_70._3_1_ != '\0') {
    FUN__text__003c7c60(lVar6,plVar16,1);
  }
  if (local_70._4_1_ != '\0') {
    FUN__text__003c7c60(lVar6,plVar7,1);
  }
  cVar2 = local_70._5_1_;
  if (local_70._5_1_ != '\0') {
    FUN__text__003c7c60(lVar6,plVar15,1);
  }
  if (local_70._6_1_ != '\0') {
    FUN__text__003c7c60(lVar6,plVar8,1);
  }
  if (local_70._7_1_ != '\0') {
    FUN__text__003c7c60(lVar6,plVar10,1);
  }
  lVar11 = *(long *)(param_2 + 0x158);
  if (lVar11 != 0) {
    plVar12 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar9 = *(long *)(param_2 + 0x10);
    if (lVar9 != 0) {
      local_78 = lVar11;
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar12);
      FUN__text__001916b0(lVar9,&local_78,param_3,1);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
    }
    iVar3 = FUN__text__00308390(lVar11);
    if (iVar3 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN__text__00193a7c(lVar9,param_3);
      uVar4 = uVar4 & 1;
    }
    uVar5 = FUN__text__00193be8(lVar9,param_3);
    uVar1 = uVar4 | 2;
    if ((uVar5 & 1) == 0) {
      uVar1 = uVar4;
    }
    if ((*(long *)(param_4 + 0x78) != 0) &&
       (FUN__text__003c7c60(lVar6,(long *)(param_4 + 0x78),uVar1 != 0), uVar1 != 0)) {
      FUN__text__0012c378(param_1,param_4 + 0x80);
      uVar17 = 0;
      if (uVar1 != 1) {
        uVar17 = 0x3f800000;
      }
      FUN__text__0012c97c(uVar17,param_1,param_4 + 0x80);
    }
    local_80 = lVar6;
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    FUN__text__00196aac(param_4,&local_80,cVar2 != '\0');
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


