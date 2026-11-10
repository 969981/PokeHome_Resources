/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054e3e4; name: FUN_.text__0054e3e4
 */


undefined8
FUN__text__0054e3e4(long param_1,long *param_2,long *param_3,long param_4,undefined4 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 auStack_260 [128];
  
  *(long *)(param_1 + 8) = param_4;
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar10 = *(undefined8 *)(param_4 + 0x28);
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  uVar4 = *(undefined8 *)(param_4 + 0x20);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_4 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  FUN__text__0054dee4(param_4,0);
  *(long **)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *param_5;
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  uVar11 = param_5[1];
  if ((*(char *)(param_1 + 0x48) == '\0') && ((uVar11 & 0x7000) == 0x7000)) {
    uVar11 = uVar11 & 0xffffbf00 | uVar11 + ((int)(uVar11 << 0x11) >> 0x1f) & 0xff;
  }
  if (*(char *)(param_1 + 0x49) == '\0') {
    uVar11 = uVar11 & 0xffff7f00 | uVar11 + ((int)(uVar11 << 0x10) >> 0x1f) & 0xff;
  }
  plVar1 = (long *)(param_1 + 0x80);
  plVar7 = (long *)(**(code **)(*param_3 + 0x10))(param_3);
  uVar5 = *(undefined4 *)(param_1 + 0x78);
  if (*plVar1 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *plVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((uVar11 & 0xff) != 0) {
    uVar13 = (ulong)uVar11 & 0xff;
    lVar8 = (**(code **)(*param_2 + 0x10))(param_2,uVar13 << 5,0x7147ff,0x43);
    *plVar1 = lVar8;
    if (lVar8 == 0) {
      return 0x34;
    }
    *(uint *)(param_1 + 0x88) = uVar11 & 0xff;
    lVar8 = (long)auStack_260 + (0x200 - ((ulong)((int)uVar13 * 4 + 0xf) & 0x7f0));
    FUN__text__0054db20(plVar7,(ulong)uVar11,param_1 + 0x34,lVar8);
    if (*(int *)(param_1 + 0x88) != 0) {
      lVar12 = 0;
      uVar13 = 0;
      do {
        lVar9 = 0;
        if (*plVar1 != 0) {
          puVar2 = (undefined8 *)(*plVar1 + lVar12);
          puVar2[2] = 0;
          puVar2[3] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          lVar9 = *plVar1;
        }
        uVar14 = *(undefined4 *)(lVar8 + uVar13 * 4);
        iVar6 = (**(code **)(*plVar7 + 0xe0))(plVar7);
        FUN__text__0054f36c(uVar14,lVar9 + lVar12,uVar5,param_1 + 0x24,(long)iVar6);
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x20;
      } while (uVar13 < *(uint *)(param_1 + 0x88));
    }
  }
  return 1;
}


