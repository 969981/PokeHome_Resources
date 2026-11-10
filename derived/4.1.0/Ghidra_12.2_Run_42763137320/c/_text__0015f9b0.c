/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015f9b0; name: FUN_.text__0015f9b0
 */


byte FUN__text__0015f9b0(long param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  bVar2 = FUN__text__001623fc(param_1 + 0x270);
  bVar3 = FUN__text__001623fc(param_1 + 0x3a0);
  bVar4 = FUN__text__001623fc(param_1 + 0x4d0);
  bVar5 = FUN__text__001623fc(param_1 + 0x600);
  bVar6 = FUN__text__001623fc(param_1 + 0x730);
  bVar7 = FUN__text__001623fc(param_1 + 0x860);
  bVar8 = FUN__text__001623fc(param_1 + 0x990);
  bVar1 = false;
  if (*(long *)(param_1 + 0xb18) != 0) {
    bVar1 = *(char *)(*(long *)(param_1 + 0xb18) + 0x170) != '\0';
  }
  return bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & bVar1;
}


