/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c7b30; name: FUN_.text__003c7b30
 */


void FUN__text__003c7b30(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x220);
  if (*(long *)(param_1 + 0x228) != 0) {
    lVar3 = *plVar2;
    while (lVar3 != *param_2) {
      plVar2 = plVar2 + 2;
      lVar3 = *plVar2;
    }
  }
  lVar3 = plVar2[1];
  uVar1 = param_3[1];
  *(undefined4 *)(lVar3 + 0x50) = *param_3;
  *(undefined4 *)(lVar3 + 0x54) = uVar1;
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 0x10;
  return;
}


