/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00460e84; name: FUN_.text__00460e84
 */


void FUN__text__00460e84(long *param_1,long *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN__text__004ce580(param_1 + 0x15);
  if (iVar3 == 1) {
    puVar4 = (undefined4 *)*param_2;
    uVar1 = *puVar4;
    *param_2 = (long)(puVar4 + 1);
    cVar2 = *(char *)(puVar4 + 1);
    *param_2 = (long)puVar4 + 5;
    (**(code **)(*param_1 + 0x1c0))(param_1,uVar1,cVar2 != '\0',0);
  }
  param_1[0x13] = param_1[0x13] | 0x1f000;
  return;
}


