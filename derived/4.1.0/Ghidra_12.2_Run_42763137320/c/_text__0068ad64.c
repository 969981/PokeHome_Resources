/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068ad64; name: FUN_.text__0068ad64
 */


long FUN__text__0068ad64(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN__text__006ebbe4(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar5 = FUN__text__006ec37c(param_1,&local_50);
  bVar3 = *(byte *)(param_2 + 0x15);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar1 = 0x40;
  if (*(char *)(param_2 + 0x16) != '\0') {
    iVar1 = 0x60;
  }
  lVar6 = FUN__text__006ec37c(param_1,&local_50);
  uVar7 = (lVar6 + (long)iVar1 * (long)iVar4) - 1U & -lVar6;
  uVar2 = 0;
  if (*(char *)(param_2 + 0x14) != '\0') {
    uVar2 = uVar7;
  }
  return uVar7 + ((lVar5 + 0x7fU & -lVar5) << ((ulong)bVar3 & 0x3f)) + uVar2;
}


