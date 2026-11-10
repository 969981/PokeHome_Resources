/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063897c; name: FUN_.text__0063897c
 */


uint FUN__text__0063897c(uint param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
                        uint param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = (((param_2 & 0xffff) * 2 + (param_3 & 0xffff) + ((param_4 & 0xfffc) >> 2)) *
          (param_1 & 0xff)) / 100 + 5;
  cVar2 = *(char *)((ulong)(param_6 & 0xffff) * 5 + 0x75accd);
  if (cVar2 == -1) {
    iVar3 = 0x5a;
  }
  else {
    if (cVar2 != '\x01') {
      return uVar1;
    }
    iVar3 = 0x6e;
  }
  return (uVar1 * iVar3 >> 2 & 0x3fff) / 0x19;
}


