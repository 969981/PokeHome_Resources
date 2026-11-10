/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030c650; name: FUN_.text__0030c650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030c650(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long *plVar9;
  long local_28;
  
  lVar5 = DAT_008e55f8;
  puVar1 = (undefined4 *)(DAT_008e55f8 + 0xf00094);
  lVar6 = FUN__text__00325bc0();
  uVar2 = *(undefined8 *)(lVar6 + 0x50);
  uVar3 = *(undefined8 *)(lVar6 + 0x58);
  if (*(int *)(lVar6 + 0x2c) == 1) {
    uVar7 = 0x3f003a34000;
  }
  else {
    if (*(int *)(lVar6 + 0x2c) != 2) goto LAB__text__0030c6d8;
    uVar7 = 0x187003a36000;
  }
  *(ulong *)(lVar5 + 0xf00098) = uVar7 | 0x100000000000000;
LAB__text__0030c6d8:
  *(undefined4 *)(lVar5 + 0xf000a0) = 0x100000;
  *(undefined8 *)(lVar5 + 0x68) = uVar2;
  *(undefined8 *)(lVar5 + 0x70) = uVar3;
  memset((void *)(lVar5 + 0x90),0,0xf00000);
  plVar4 = _DAT_008a2b38;
  plVar9 = *(long **)(*_DAT_008a2b38 + 0x50);
  if (plVar9 != (long *)0x0) {
    (**(code **)(plVar9[10] + 0x10))();
  }
  (**(code **)(*plVar9 + 0x38))(plVar9);
  (**(code **)(plVar9[10] + 0x18))(plVar9 + 10);
  lVar6 = *(long *)(*plVar4 + 0x50);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x50) + 0x10))();
  }
  FUN__text__00310610(lVar6,(void *)(lVar5 + 0x90));
  (**(code **)(*(long *)(lVar6 + 0x50) + 0x18))((long *)(lVar6 + 0x50));
  FUN__text__00240ddc(&local_28,*(undefined8 *)(lVar5 + 0x50),0x734668);
  if (*(long *)(lVar5 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar5 + 0x58) + 0x48) + 0x18))();
  }
  *puVar1 = 0;
  *(long *)(lVar5 + 0x58) = local_28;
  pcVar8 = *(code **)(local_28 + 0x378);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(local_28 + 0x380) = 0;
    *(undefined8 *)(local_28 + 0x388) = 0;
    *(undefined8 *)(local_28 + 0x370) = 0;
    *(undefined8 *)(local_28 + 0x378) = 0;
    (*pcVar8)(local_28 + 0x390);
  }
  *(undefined4 *)(local_28 + 0x394) = 0;
  *(undefined1 *)(local_28 + 0x390) = 1;
  uVar3 = _DAT_008a2b60;
  *(long *)(local_28 + 0x398) = lVar5;
  uVar2 = _DAT_008a2b58;
  *(undefined8 *)(local_28 + 0x370) = uVar3;
  uVar3 = _DAT_008a2b68;
  *(undefined8 *)(local_28 + 0x378) = uVar2;
  uVar2 = _DAT_008a2b70;
  *(undefined8 *)(local_28 + 0x380) = uVar3;
  *(undefined8 *)(local_28 + 0x388) = uVar2;
  FUN__text__005e896c(*(undefined8 *)(lVar5 + 0x58),0x71746e,0xffffffff,0x10);
  return;
}


