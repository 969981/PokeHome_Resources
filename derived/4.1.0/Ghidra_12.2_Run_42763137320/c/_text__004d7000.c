/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d7000; name: FUN_.text__004d7000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__004d7000(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  cVar4 = *param_1;
  if (lVar5 != 0) {
    if ((cVar4 == *(char *)(lVar5 + 0x48)) && (*(int *)(param_1 + 4) == *(int *)(lVar5 + 0x20))) {
      return lVar5;
    }
    FUN__text__004d7c0c(lVar5);
    FUN__text__00400fc0(0xe,lVar5);
    cVar4 = *param_1;
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  if (cVar4 == '\0') {
    return 0;
  }
  puVar3 = (undefined8 *)FUN__text__00400f80(0xe,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(puVar3 + 3) = 0;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 4) = uVar1;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    uVar1 = *_DAT_008a4b68;
    *(undefined1 *)(puVar3 + 9) = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined8 **)(param_1 + 8) = puVar3;
    iVar2 = FUN__text__004d7d80(puVar3,uVar1,*param_1);
    lVar5 = *(long *)(param_1 + 8);
    if (iVar2 == 1) {
      return lVar5;
    }
    if (lVar5 != 0) {
      FUN__text__004d7c0c(lVar5);
      FUN__text__00400fc0(0xe,lVar5);
    }
  }
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  return 0;
}


