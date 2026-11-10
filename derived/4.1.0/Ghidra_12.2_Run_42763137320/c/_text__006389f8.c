/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006389f8; name: FUN_.text__006389f8
 */


uint FUN__text__006389f8(byte param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
                        uint param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = *(char *)((ulong)(param_6 & 0xffff) * 5 + 0x75acce);
  uVar2 = (uint)(((float)param_1 *
                 (float)((param_2 & 0xffff) * 2 + (param_3 & 0xffff) + ((param_4 & 0xfffc) >> 2))) /
                 100.0 + 5.0);
  if (cVar1 == -1) {
    iVar3 = 0x5a;
  }
  else {
    if (cVar1 != '\x01') {
      return uVar2;
    }
    iVar3 = 0x6e;
  }
  return (uVar2 * iVar3 >> 2 & 0x3fff) / 0x19;
}


