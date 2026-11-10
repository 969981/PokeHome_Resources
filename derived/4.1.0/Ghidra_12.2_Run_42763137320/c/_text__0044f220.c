/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044f220; name: FUN_.text__0044f220
 */


void FUN__text__0044f220(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  uVar4 = *(uint *)(param_2 + 0x68);
  if (*(uint *)(param_1 + 0x6c) < uVar4) {
    lVar6 = **(long **)(param_1 + 0x58);
    if (*(long *)(param_1 + 0x60) == 0) {
      lVar6 = (**(code **)(lVar6 + 0x10))
                        (*(long **)(param_1 + 0x58),(ulong)uVar4 * 0x18,0x70d345,0xcc);
      if (lVar6 == 0) goto LAB__text__0044f344;
      if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x60) != lVar6)) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x18))();
      }
    }
    else {
      lVar6 = (**(code **)(lVar6 + 0x28))();
      if (lVar6 == 0) goto LAB__text__0044f344;
    }
    *(long *)(param_1 + 0x60) = lVar6;
    *(uint *)(param_1 + 0x6c) = uVar4;
  }
  *(uint *)(param_1 + 0x68) = uVar4;
  if (*(int *)(param_2 + 0x68) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x60) + lVar6);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar6);
      lVar6 = lVar6 + 0x18;
      uVar5 = *puVar1;
      uVar8 = puVar1[2];
      puVar2[1] = puVar1[1];
      puVar2[2] = uVar8;
      *puVar2 = uVar5;
    } while (uVar7 < *(uint *)(param_2 + 0x68));
  }
LAB__text__0044f344:
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  if ((*(long *)(param_1 + 0x80) != 0) && (*(char *)(param_1 + 0x88) != '\0')) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))();
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  return;
}


