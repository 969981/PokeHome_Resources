/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bc574; name: FUN_.text__005bc574
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bc574(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  uVar10 = *(undefined8 *)(param_1 + 0xe0);
  local_78 = 0xf03ffb7387bef17d;
  uStack_70 = 0x71e9d6;
  local_68 = 0x10;
  FUN__text__005e927c(auStack_60,&local_78);
  lVar6 = FUN__text__005a1ad0(uVar10,0,auStack_60);
  piVar5 = _DAT_008a0300;
  puVar4 = _DAT_0089f418;
  if (lVar6 == 0) {
    puVar7 = (undefined8 *)0x0;
    lVar6 = 0;
  }
  else {
    iVar3 = *_DAT_008a0300;
    *(int *)(lVar6 + 0x138) = iVar3;
    FUN__text__005b52c0(*puVar4,lVar6);
    lVar6 = lVar6 + (long)iVar3 * 0x70 + 0x58;
    puVar7 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar6);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (puVar7 != (undefined8 *)0x0) {
    lVar8 = *(long *)(param_1 + 0x68);
    uVar10 = *(undefined8 *)(lVar8 + 0xe0);
    uVar1 = *(undefined8 *)(lVar8 + 0xe8);
    uVar2 = *(undefined8 *)(lVar8 + 0xf8);
    puVar7[2] = *(undefined8 *)(lVar8 + 0xf0);
    puVar7[3] = uVar2;
    *puVar7 = uVar10;
    puVar7[1] = uVar1;
    uVar10 = *(undefined8 *)(lVar8 + 0x100);
    uVar1 = *(undefined8 *)(lVar8 + 0x108);
    uVar2 = *(undefined8 *)(lVar8 + 0x118);
    puVar7[6] = *(undefined8 *)(lVar8 + 0x110);
    puVar7[7] = uVar2;
    puVar7[4] = uVar10;
    puVar7[5] = uVar1;
  }
  if (lVar6 != 0) {
    thunk_FUN__text__006ec608(lVar6);
  }
  FUN__text__005a0018(*(undefined8 *)(param_1 + 0x60));
  lVar6 = *(long *)(param_1 + 0x60);
  iVar3 = *piVar5;
  if (*(int *)(lVar6 + 0x100) == 0) {
    lVar8 = *(long *)(lVar6 + 0x58) + (long)iVar3 * 0x168;
    FUN__text__006ec8e0(lVar8);
    FUN__text__005bcd24(param_1);
    if (*(int *)(lVar8 + 0x160) != 0) {
      FUN__text__006eddd4(lVar8);
      *(undefined4 *)(lVar8 + 0x160) = 0;
    }
    FUN__text__006ec93c(lVar8);
  }
  else {
    pcVar9 = *(code **)(lVar6 + 0x88);
    *(int *)(lVar6 + 0x104) = iVar3;
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 *)(lVar6 + 0x98) = 0;
      *(undefined8 *)(lVar6 + 0x80) = 0;
      *(undefined8 *)(lVar6 + 0x88) = 0;
      (*pcVar9)(lVar6 + 0xa0);
      iVar3 = *(int *)(lVar6 + 0x104);
    }
    *(long *)(lVar6 + 0xa0) = param_1;
    *(code **)(lVar6 + 0x80) = FUN__text__005bce88;
    *(undefined **)(lVar6 + 0x88) = &DAT__text__005bce90;
    lVar8 = *(long *)(lVar6 + 0x58) + (long)iVar3 * 0x168;
    *(undefined1 **)(lVar6 + 0x90) = &LAB__text__005bce94;
    *(undefined1 **)(lVar6 + 0x98) = &LAB__text__005bcea0;
    FUN__text__006ec8e0(lVar8);
    (**(code **)(lVar6 + 0x80))((long *)(lVar6 + 0xa0));
    if (*(int *)(lVar8 + 0x160) != 0) {
      FUN__text__006eddd4(lVar8);
      *(undefined4 *)(lVar8 + 0x160) = 0;
    }
    FUN__text__006ec93c(lVar8);
    FUN__text__005b5520(*puVar4,lVar6);
  }
  *(undefined1 *)(lVar6 + 0x109) = 1;
  return;
}


