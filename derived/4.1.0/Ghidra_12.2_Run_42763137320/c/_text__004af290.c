/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af290; name: FUN_.text__004af290
 */


void FUN__text__004af290(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  
  if (1 < *param_1) {
    uVar4 = (ulong)(*param_1 - 1);
    do {
      lVar5 = 0;
      uVar6 = 0;
      bVar7 = false;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar5);
        if (*(uint *)((long)puVar1 + 0x14) < *(uint *)((long)puVar1 + 4)) {
          uVar2 = puVar1[2];
          uVar3 = puVar1[3];
          puVar1[2] = *puVar1;
          puVar1[3] = puVar1[1];
          bVar7 = true;
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar6 < uVar4);
      uVar4 = uVar4 - 1;
    } while (((int)uVar4 != 0) && (bVar7));
  }
  return;
}


