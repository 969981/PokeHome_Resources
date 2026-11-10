/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006565a8; name: FUN_.text__006565a8
 */


undefined8 FUN__text__006565a8(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  
  lVar6 = *param_1;
  lVar1 = 0x108;
  if ((param_2 & 1) == 0) {
    lVar1 = 200;
  }
  iVar3 = thunk_FUN__text__0066c2d8(0x72064c,param_3,6);
  if (iVar3 == 0) {
    return 0x3d;
  }
  pcVar5 = (char *)(param_3 + 6);
  cVar2 = *pcVar5;
  while ((cVar2 != '\0' && (iVar3 = FUN__text__0065680c(), iVar3 != 0))) {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  uVar4 = FUN__text__006758ac(pcVar5,lVar6 + lVar1 + 0x1100);
  return uVar4;
}


