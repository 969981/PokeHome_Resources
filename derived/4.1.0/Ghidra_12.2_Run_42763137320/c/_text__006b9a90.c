/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b9a90; name: FUN_.text__006b9a90
 */


void FUN__text__006b9a90(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  short *psVar4;
  undefined8 uVar5;
  short *psVar6;
  
  psVar6 = *(short **)(param_2 + 0xf8);
  if (*psVar6 == 2) {
    puVar2 = (undefined8 *)FUN__text__006a0f04(0x20);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar2;
    uVar5 = *(undefined8 *)(psVar6 + 0xc);
    iVar1 = FUN__text__006eb7ec(uVar5);
    puVar2 = (undefined8 *)FUN__text__006a0f04(0x48);
    if (puVar2 != (undefined8 *)0x0) {
      FUN__text__006eb878(puVar2,5,3,iVar1 + -1);
      *puVar2 = 0x89e098;
    }
    FUN__text__006c2ea8(puVar2,uVar5);
    *(undefined8 **)(*(long *)(param_1 + 0xf8) + 0x18) = puVar2;
    psVar4 = *(short **)(param_1 + 0xf8);
  }
  else {
    if (*psVar6 != 1) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return;
    }
    puVar2 = (undefined8 *)FUN__text__006a0f04(0x20);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = puVar2;
    lVar3 = FUN__text__006a0f04(0x50);
    if (lVar3 != 0) {
      FUN__text__006c1de4(0,0,lVar3,5,3,1);
    }
    FUN__text__006c1e84(lVar3,*(undefined8 *)(psVar6 + 0xc));
    *(long *)(*(long *)(param_1 + 0xf8) + 0x18) = lVar3;
    psVar4 = *(short **)(param_1 + 0xf8);
  }
  if (psVar4 != (short *)0x0) {
    *(undefined1 *)(param_1 + 0xf0) = 4;
    *psVar4 = *psVar6;
  }
  return;
}


