/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00158250; name: FUN_.text__00158250
 */


bool FUN__text__00158250(undefined8 param_1,undefined2 *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  
  bVar5 = true;
  uVar4 = FUN__text__00157130(*param_2,1);
  puVar1 = param_2 + (uVar4 & 1);
  uVar2 = *puVar1;
  iVar3 = FUN__text__00158360(param_1,puVar1);
  if (iVar3 != 2) {
    if (iVar3 == 1) {
      bVar5 = false;
    }
    else if ((((0xff < uVar2) ||
              ((*(uint *)(((ulong)(uVar2 >> 3) & 0x1ffc) + 0x724eb0) >> (ulong)(uVar2 & 0x1f) & 1)
               == 0)) && (1 < uVar2 - 0x152)) && ((uVar2 != 0xc6 && (uVar2 != 0xe6)))) {
      if ((uVar2 & 0xffdf) != 0x59) {
        return false;
      }
      uVar2 = puVar1[1];
      if (uVar2 < 0x100) {
        return (*(uint *)(((ulong)(uVar2 >> 3) & 0x1ffc) + 0x724eb0) & 1 << (ulong)(uVar2 & 0x1f))
               == 0;
      }
    }
  }
  return bVar5;
}


