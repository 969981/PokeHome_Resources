/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d4cf0; name: FUN_.text__003d4cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d4cf0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  iVar2 = *_DAT_008a0300;
  if (*(int *)(param_1 + 0x100) == 0) {
    lVar7 = *(long *)(param_1 + 0x58) + (long)iVar2 * 0x168;
    FUN__text__006ec8e0(lVar7);
    FUN__text__003d4e4c(param_2);
    if (*(int *)(lVar7 + 0x160) != 0) {
      FUN__text__006eddd4(lVar7);
      *(undefined4 *)(lVar7 + 0x160) = 0;
    }
    FUN__text__006ec93c(lVar7);
    *(undefined1 *)(param_1 + 0x109) = 1;
    return;
  }
  pcVar6 = *(code **)(param_1 + 0x88);
  *(int *)(param_1 + 0x104) = iVar2;
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar6)(param_1 + 0xa0);
    iVar2 = *(int *)(param_1 + 0x104);
  }
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  uVar4 = _DAT_008a37a8;
  uVar3 = _DAT_008a3798;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar5 = _DAT_008a37b0;
  uVar1 = _DAT_008a37a0;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  lVar7 = *(long *)(param_1 + 0x58) + (long)iVar2 * 0x168;
  FUN__text__006ec8e0(lVar7);
  (**(code **)(param_1 + 0x80))((undefined8 *)(param_1 + 0xa0));
  if (*(int *)(lVar7 + 0x160) != 0) {
    FUN__text__006eddd4(lVar7);
    *(undefined4 *)(lVar7 + 0x160) = 0;
  }
  FUN__text__006ec93c(lVar7);
  FUN__text__005b5520(*_DAT_0089f418,param_1);
  *(undefined1 *)(param_1 + 0x109) = 1;
  return;
}


