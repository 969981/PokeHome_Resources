/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ddf20; name: FUN_.text__002ddf20
 */


void FUN__text__002ddf20(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar5 = *(ulong *)(param_1 + 0x70);
  uVar4 = uVar5 >> 4;
  uVar9 = uVar5 & 0xf;
  lVar6 = *(long *)(param_1 + 0x80);
  lVar7 = *(long *)(*(long *)(param_1 + 8) + uVar4 * 8);
  pcVar1 = *(code **)(lVar7 + uVar9 * 0x120 + 0xa8);
  if (pcVar1 != (code *)0x0) {
    lVar2 = lVar7 + uVar9 * 0x120;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    (*pcVar1)(lVar2 + 0xc0);
  }
  pcVar1 = *(code **)(lVar7 + uVar9 * 0x120 + 0x28);
  if (pcVar1 != (code *)0x0) {
    lVar2 = lVar7 + uVar9 * 0x120;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    (*pcVar1)(lVar2 + 0x40);
  }
  plVar8 = (long *)(lVar7 + uVar9 * 0x120 + 0x18);
  lVar7 = *plVar8;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    *plVar8 = 0;
  }
  lVar7 = *(long *)(param_1 + 0x80) + -1;
  *(long *)(param_1 + 0x80) = lVar7;
  lVar6 = lVar6 - lVar7;
  uVar9 = *(long *)(param_1 + 0x70) + 1;
  *(ulong *)(param_1 + 0x70) = uVar9;
  if (lVar6 != 0) {
    uVar5 = lVar6 + uVar5;
    uVar3 = uVar5 >> 4;
    if ((uVar4 <= uVar3) && ((uVar5 & 0xf) != 0)) {
      uVar5 = *(long *)(param_1 + 8) + uVar4 * 8;
      do {
        uVar5 = uVar5 + 8;
      } while (uVar5 <= *(long *)(param_1 + 8) + uVar3 * 8);
    }
  }
  if (0x1f < uVar9) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),**(undefined8 **)(param_1 + 8),0x1200,0x10);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -0x10;
  }
  return;
}


