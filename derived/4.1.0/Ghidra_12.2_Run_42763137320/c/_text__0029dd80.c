/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029dd80; name: FUN_.text__0029dd80
 */


uint FUN__text__0029dd80(long param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_5a [26];
  
  uVar3 = FUN__text__00632ee0(param_2);
  cVar2 = *(char *)(param_1 + 0xb8);
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar4 = FUN__text__00634570(param_2);
  if ((iVar1 == iVar4) && (uVar5 = FUN__text__00633af8(param_2), uVar5 == (cVar2 == '\0'))) {
    FUN__text__00633af0(param_2,auStack_5a,0xd);
    uVar5 = FUN__text__005f3560(auStack_5a,param_1 + 0x94);
  }
  else {
    uVar5 = 0;
  }
  FUN__text__006331e0(param_2,uVar3 & 1);
  return uVar5 & 1;
}


