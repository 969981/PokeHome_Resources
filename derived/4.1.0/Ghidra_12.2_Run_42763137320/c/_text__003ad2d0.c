/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ad2d0; name: FUN_.text__003ad2d0
 */


void FUN__text__003ad2d0(long param_1,ulong param_2)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  long local_38;
  
  FUN__text__003ad574();
  FUN__text__003ad78c(param_1);
  if (*(char *)(param_1 + 0x8fd) != '\0') {
    FUN__text__003b2bf0(param_1,0);
    *(undefined1 *)(param_1 + 0x8fd) = 0;
  }
  FUN__text__003b2d20(param_1,0);
  FUN__text__003ad850(param_1);
  *(uint *)(*(long *)(param_1 + 0x800) + 0x28) = (uint)(*(int *)(param_1 + 0x6c0) != 0);
  uVar9 = *(undefined8 *)(param_1 + 0x800);
  uVar4 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))();
  FUN__text__003b7000(uVar9,param_1 + 0x6ec,uVar4);
  uVar5 = FUN__text__003b7340(*(undefined8 *)(param_1 + 0x800),param_1 + 0x6ec);
  if ((uVar5 & 0x80000001) == 1) {
    uVar5 = uVar5 >> 1;
    cVar1 = *(char *)(param_1 + 0x8e8);
    uVar3 = uVar5;
  }
  else {
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 1;
    }
    uVar5 = (int)uVar5 >> 1;
    cVar1 = *(char *)(param_1 + 0x8e8);
    uVar3 = uVar5 - 1;
  }
  if (cVar1 != '\0') {
    FUN__text__003b708c(*(undefined8 *)(param_1 + 0x800),uVar3,uVar5);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14) = *(undefined4 *)(param_1 + 0x848);
  *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x10) = *(undefined4 *)(param_1 + 0x84c);
  FUN__text__003ada20(param_1);
  plVar10 = *(long **)(param_1 + 0x98);
  if (plVar10 != (long *)0x0) {
    (**(code **)(plVar10[9] + 0x10))();
  }
  uVar9 = (**(code **)(*plVar10 + 0x30))(plVar10,param_1 + 0x6d0);
  (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
  plVar10 = *(long **)(param_1 + 0x98);
  if (plVar10 != (long *)0x0) {
    (**(code **)(plVar10[9] + 0x10))();
  }
  uVar12 = (**(code **)(*plVar10 + 0x50))(plVar10,param_1 + 0x6d0);
  (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
  lVar8 = *(long *)(param_1 + 0x768);
  *(undefined8 *)(lVar8 + 8) = uVar9;
  *(undefined8 *)(lVar8 + 0x10) = uVar12;
  *(long *)(*(long *)(param_1 + 0x768) + 0x18) = param_1 + 0xa0;
  FUN__text__003adb0c(param_1);
  fVar11 = (float)*(int *)(*(long *)(param_1 + 0x800) + 0x10);
  fVar13 = -(fVar11 * *(float *)(param_1 + 0x700));
  fVar2 = 0.0;
  if (*(int *)(param_1 + 0x6c0) != 0) {
    fVar13 = 0.0;
    fVar2 = *(float *)(param_1 + 0x6fc) * fVar11;
  }
  FUN__text__003b7900(fVar2,fVar13,*(undefined8 *)(param_1 + 0x768));
  if ((param_2 & 1) == 0) {
    FUN__text__003adcc0(param_1,*(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14),
                        *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x10));
  }
  plVar10 = *(long **)(param_1 + 0x820);
  FUN__text__003aa314(&local_38,*(undefined8 *)(param_1 + 8));
  if (*plVar10 != 0) {
    (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
  }
  *plVar10 = local_38;
  *(long *)(local_38 + 0x60) = plVar10[1];
  if (*plVar10 != 0) {
    plVar10 = (long *)(*(code *)**(undefined8 **)(*plVar10 + 0x50))();
    plVar7 = (long *)FUN__text__003a9e38();
    if (plVar7 != plVar10) {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10 != plVar7 && plVar10 != (long *)0x0);
    }
  }
  iVar6 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))();
  if (iVar6 == 0) {
    FUN__text__003a14e8(*(undefined8 *)(param_1 + 2000),0);
  }
  local_38 = param_1;
  FUN__text__003b2e50(param_1,&local_38,0);
  *(undefined1 *)(param_1 + 0x850) = 1;
  return;
}


