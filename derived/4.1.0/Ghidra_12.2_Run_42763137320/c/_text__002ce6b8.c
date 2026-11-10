/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ce6b8; name: FUN_.text__002ce6b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ce6b8(undefined8 param_1,char *param_2,long *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  long lVar3;
  char *__dest_00;
  long lVar4;
  char acStack_b0 [128];
  
  sVar2 = strlen(param_2);
  lVar4 = *param_3;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x68);
  }
  __dest_00 = acStack_b0 + (0x80 - (sVar2 + lVar3 + 0x10 & 0xfffffffffffffff0));
  *__dest_00 = '\0';
  __dest = strcat(__dest_00,param_2);
  puVar1 = _DAT_0089f5d0;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x60);
  }
  strcat(__dest,(char *)*puVar1);
  FUN__text__00109fd4(param_1,__dest_00);
  return;
}


