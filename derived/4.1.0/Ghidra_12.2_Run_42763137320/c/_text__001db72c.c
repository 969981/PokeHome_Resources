/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001db72c; name: FUN_.text__001db72c
 */


void FUN__text__001db72c(long param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 local_c0 [12];
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(char *)(param_1 + 0x8ba2) == '\0') {
    FUN__text__003c7c60(lVar6,param_1 + 0x8ac8,0);
    uVar7 = 0;
    iVar8 = 0;
    if (*(char *)(param_1 + 0x8ba0) == '\0') goto LAB__text__001db7cc;
LAB__text__001db87c:
    lVar5 = *(long *)(param_1 + 8);
    lVar9 = *(long *)(lVar5 + 0x2d0);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    local_c0[0] = 0xaa81ed4081cc46c5;
    uVar4 = FUN__text__0012ce7c(lVar5 + 0x110,local_c0);
    FUN__text__003a14e8(uVar4,0);
    FUN__text__003c7c60(lVar9,param_1 + 0x8b08,0);
    FUN__text__001ddbc4(param_1);
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    if (*(char *)(param_1 + 0x8b38) == '\0') goto LAB__text__001db8f4;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    bVar2 = false;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x8ba4);
    iVar8 = *(int *)(param_1 + 0x8ba8);
    FUN__text__003c7c60(lVar6,param_1 + 0x8ac8,iVar8 == 0);
    if (*(char *)(param_1 + 0x8ba0) != '\0') goto LAB__text__001db87c;
LAB__text__001db7cc:
    lVar5 = *(long *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x8ba8);
    lVar9 = *(long *)(lVar5 + 0x2d0);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    local_c0[0] = 0xaa81ed4081cc46c5;
    uVar4 = FUN__text__0012ce7c(lVar5 + 0x110,local_c0);
    FUN__text__003a14e8(uVar4,iVar1 != 0);
    FUN__text__003c7c60(lVar9,param_1 + 0x8b08,iVar1 != 0);
    if (iVar1 == 0) {
      FUN__text__001ddbc4(param_1);
    }
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    if (*(char *)(param_1 + 0x8b38) == '\0') goto LAB__text__001db8f4;
    bVar2 = *(int *)(param_1 + 0x8ba8) != 0;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN__text__001d9160(uVar4,bVar2);
LAB__text__001db8f4:
  FUN__text__0019c014(local_c0);
  uVar3 = FUN__text__0019c1d8(local_c0,param_1 + 0x8b40);
  uVar3 = (uVar3 ^ 0xffffffff) & 1;
  FUN__text__001d7838(*(undefined8 *)(param_1 + 0x38),uVar3,*(undefined1 *)(param_1 + 0x8ba2),uVar7,
                      iVar8);
  FUN__text__001d92c4(*(undefined8 *)(param_1 + 0x40),uVar3);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


