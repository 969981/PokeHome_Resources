/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014e774; name: FUN_.text__0014e774
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014e774(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  
  iVar1 = *_DAT_008a0300;
  if (*(int *)(param_1 + 0x100) == 0) {
    lVar6 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x168;
    FUN__text__006ec8e0(lVar6);
    if (*(int *)(lVar6 + 0x160) != 0) {
      FUN__text__006eddd4(lVar6);
      *(undefined4 *)(lVar6 + 0x160) = 0;
    }
    FUN__text__006ec93c(lVar6);
    *(undefined1 *)(param_1 + 0x109) = 1;
    return;
  }
  pcVar5 = *(code **)(param_1 + 0x88);
  *(int *)(param_1 + 0x104) = iVar1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar5)(param_1 + 0xa0);
    iVar1 = *(int *)(param_1 + 0x104);
  }
  uVar4 = _DAT_008a00b0;
  uVar3 = _DAT_008a00a8;
  uVar2 = _DAT_008a00a0;
  *(undefined8 *)(param_1 + 0x80) = _DAT_008a0098;
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  lVar6 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x168;
  FUN__text__006ec8e0(lVar6);
  (**(code **)(param_1 + 0x80))(param_1 + 0xa0);
  if (*(int *)(lVar6 + 0x160) != 0) {
    FUN__text__006eddd4(lVar6);
    *(undefined4 *)(lVar6 + 0x160) = 0;
  }
  FUN__text__006ec93c(lVar6);
  FUN__text__005b5520(*_DAT_0089f418,param_1);
  *(undefined1 *)(param_1 + 0x109) = 1;
  return;
}


