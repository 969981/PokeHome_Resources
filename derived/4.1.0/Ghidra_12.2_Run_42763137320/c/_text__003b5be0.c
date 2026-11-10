/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b5be0; name: FUN_.text__003b5be0
 */


void FUN__text__003b5be0(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if ((0 < iVar4) && (iVar3 = *(int *)(param_1 + 0xc), 0 < iVar3)) {
    iVar2 = 0;
    do {
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = (ulong)(uint)(iVar4 + iVar2 * iVar3);
            lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x40);
            lVar7 = *(long *)(lVar6 + uVar5 * 0x10);
          }
          else {
            uVar5 = (ulong)(uint)(iVar2 + *(int *)(param_1 + 0x10) * iVar4);
            lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x40);
            lVar7 = *(long *)(lVar6 + uVar5 * 0x10);
          }
          if (lVar7 == param_2) {
            puVar1 = (undefined8 *)(lVar6 + uVar5 * 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            iVar3 = *(int *)(param_1 + 0xc);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
        iVar4 = *(int *)(param_1 + 0x10);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return;
}


