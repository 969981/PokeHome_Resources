/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fce50; name: FUN_.text__003fce50
 */


long FUN__text__003fce50(long *param_1,int *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  
  bVar4 = *(byte *)(param_1 + 0x18);
  if ((uint)bVar4 < *(uint *)(param_1 + 0x15)) {
    uVar6 = bVar4 + 1;
    plVar7 = param_1 + 0x17;
    uVar2 = uVar6 & 3;
    if (2 < bVar4) {
      uVar6 = uVar6 & 0x1fc;
      do {
        uVar6 = uVar6 - 4;
        plVar7 = *(long **)**(undefined8 **)*plVar7;
      } while (uVar6 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      plVar7 = (long *)*plVar7;
    }
    if (*(long *)plVar7[1] + (ulong)*(uint *)(plVar7 + 2) == param_1[0xf]) {
      *(byte *)(param_1 + 0x18) = bVar4 + 1;
      param_1[0xf] = *(long *)plVar7[1] + (ulong)*(uint *)((long *)plVar7[1] + 3);
      *param_2 = *(int *)(plVar7[1] + 0x18) - *(int *)(plVar7 + 2);
      uVar6 = *(uint *)(param_1 + 0x12);
      lVar5 = *(long *)plVar7[1];
      uVar2 = *(uint *)((long *)plVar7[1] + 3);
      uVar1 = lVar5 + (ulong)*(uint *)(plVar7 + 2);
      iVar3 = (int)uVar1 - uVar6;
      if (lVar5 + (ulong)uVar2 <= (ulong)uVar6 || uVar6 <= uVar1) {
        iVar3 = *(uint *)(plVar7 + 2) - uVar2;
      }
      *(int *)(param_1 + 0x13) = iVar3 + (int)param_1[0x13];
      FUN__text__003fc6a8(param_1);
      return *(long *)(plVar7[1] + 8) + (ulong)*(uint *)(plVar7 + 2);
    }
    (**(code **)(*param_1 + 0x110))(param_1,0);
    FUN__text__003fc040(param_1);
  }
  *param_2 = 0;
  return 0;
}


