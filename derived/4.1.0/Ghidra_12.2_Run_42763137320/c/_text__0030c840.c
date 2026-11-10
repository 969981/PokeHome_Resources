/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030c840; name: FUN_.text__0030c840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030c840(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long local_38;
  
  lVar6 = *_DAT_008a2b30;
  uVar5 = 0x50cdd8;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x13b8;
  }
  *(undefined4 *)(lVar6 + 0xf000a0) = uVar5;
  auVar9 = FUN__text__0011b95c(*_DAT_0089f508);
  *(undefined8 *)(lVar6 + 0xf00098) = 0x10015f008c54000;
  *(undefined1 (*) [16])(lVar6 + 0x68) = auVar9;
  plVar3 = _DAT_008a2b50;
  lVar8 = *_DAT_008a2b50;
  if (*(char *)(lVar8 + 0x50) == '\0') {
    *(undefined1 *)(lVar8 + 0x45c) = *(undefined1 *)(lVar8 + 0x51);
  }
  *(undefined1 *)(lVar8 + 0x50) = 1;
  uVar5 = FUN__text__005964e0((char *)(lVar8 + 0x50),0x13b8);
  *(undefined4 *)(lVar8 + 0x1458) = uVar5;
  *(undefined2 *)(lVar8 + 0x1454) = 1;
  if ((param_1 & 1) != 0) {
    *(undefined8 *)(lVar8 + 0x50ce68) = 0;
    *(undefined8 *)(lVar8 + 0x50ce4c) = *(undefined8 *)(lVar8 + 0x142c);
    *(undefined8 *)(lVar8 + 0x50ce54) = *(undefined8 *)(lVar8 + 0x1434);
    *(undefined8 *)(lVar8 + 0x50ce5c) = *(undefined8 *)(lVar8 + 0x143c);
    *(undefined8 *)(lVar8 + 0x50ce64) = *(undefined8 *)(lVar8 + 0x1444);
    *(undefined8 *)(lVar8 + 0x50ce2c) = *(undefined8 *)(lVar8 + 0x140c);
    *(undefined8 *)(lVar8 + 0x50ce34) = *(undefined8 *)(lVar8 + 0x1414);
    *(undefined8 *)(lVar8 + 0x50ce3c) = *(undefined8 *)(lVar8 + 0x141c);
    *(undefined8 *)(lVar8 + 0x50ce44) = *(undefined8 *)(lVar8 + 0x1424);
    *(undefined4 *)(lVar8 + 0x50ce28) = *(undefined4 *)(lVar8 + 0x1408);
    memcpy((void *)(lVar8 + 0x50ce70),(void *)(lVar8 + 0x1460),0x50b9a0);
    uVar2 = *(undefined8 *)(lVar8 + 0x50ce08);
    *(undefined8 *)(&DAT_00a18810 + lVar8) = *(undefined8 *)(lVar8 + 0x50ce00);
    *(undefined8 *)(&DAT_00a18818 + lVar8) = uVar2;
    uVar2 = *(undefined8 *)(lVar8 + 0x50ce18);
    *(undefined8 *)(&DAT_00a18820 + lVar8) = *(undefined8 *)(lVar8 + 0x50ce10);
    *(undefined8 *)(&DAT_00a18828 + lVar8) = uVar2;
    uVar5 = FUN__text__005964e0((undefined4 *)(lVar8 + 0x50ce28),&LAB__text__0050ba08);
    *(undefined4 *)(lVar8 + 0x145c) = uVar5;
    *(undefined2 *)(lVar8 + 0x1456) = 1;
  }
  uVar1 = (param_1 ^ 0xffffffff) & 1;
  memset((void *)(lVar6 + 0x90),0,0xf00000);
  memcpy((void *)(lVar6 + 0x90),(void *)(*plVar3 + 0x50),0x50cdd8);
  FUN__text__00240ddc(&local_38,*(undefined8 *)(lVar6 + 0x50),0x734668);
  if (*(long *)(lVar6 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x58) + 0x48) + 0x18))();
  }
  *(uint *)(lVar6 + 0xf00094) = uVar1;
  *(long *)(lVar6 + 0x58) = local_38;
  pcVar7 = *(code **)(local_38 + 0x378);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(local_38 + 0x380) = 0;
    *(undefined8 *)(local_38 + 0x388) = 0;
    *(undefined8 *)(local_38 + 0x370) = 0;
    *(undefined8 *)(local_38 + 0x378) = 0;
    (*pcVar7)(local_38 + 0x390);
  }
  *(uint *)(local_38 + 0x394) = uVar1;
  *(undefined1 *)(local_38 + 0x390) = 1;
  uVar4 = _DAT_008a2b60;
  *(long *)(local_38 + 0x398) = lVar6;
  uVar2 = _DAT_008a2b58;
  *(undefined8 *)(local_38 + 0x370) = uVar4;
  uVar4 = _DAT_008a2b68;
  *(undefined8 *)(local_38 + 0x378) = uVar2;
  uVar2 = _DAT_008a2b70;
  *(undefined8 *)(local_38 + 0x380) = uVar4;
  *(undefined8 *)(local_38 + 0x388) = uVar2;
  FUN__text__005e896c(*(undefined8 *)(lVar6 + 0x58),0x70b9f5,0xffffffff,0x10);
  return;
}


