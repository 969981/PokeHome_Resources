/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c7960; name: FUN_.text__003c7960
 */


void FUN__text__003c7960(long param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  plVar1 = *(long **)(param_1 + 0x220);
  if (*(long *)(param_1 + 0x228) != 0) {
    lVar2 = *plVar1;
    while (lVar2 != *param_2) {
      plVar1 = plVar1 + 2;
      lVar2 = *plVar1;
    }
  }
  lVar2 = plVar1[1];
  uVar3 = *param_3;
  uVar4 = param_3[1];
  *(undefined4 *)(lVar2 + 0x38) = 0;
  *(undefined4 *)(lVar2 + 0x30) = uVar3;
  *(undefined4 *)(lVar2 + 0x34) = uVar4;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
  return;
}


