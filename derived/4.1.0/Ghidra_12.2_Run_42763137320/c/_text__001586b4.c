/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001586b4; name: FUN_.text__001586b4
 */


undefined8 FUN__text__001586b4(undefined8 param_1,undefined2 *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = FUN__text__00157130(*param_2,1);
  uVar2 = param_2[uVar4 & 1];
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = (param_2 + (uVar4 & 1))[1];
  uVar6 = (uint)uVar2;
  if (uVar2 < 0x100) {
    uVar4 = (ulong)(uVar2 >> 5);
    uVar5 = 1 << (ulong)(uVar6 & 0x1f);
    if ((*(uint *)(uVar4 * 4 + 0x724e50) & uVar5) != 0) {
      return 3;
    }
    if ((*(uint *)(uVar4 * 4 + 0x7250d0) & uVar5) != 0) {
      return 4;
    }
    if ((*(uint *)(uVar4 * 4 + 0x724eb0) & uVar5) != 0) {
      return 1;
    }
  }
  uVar5 = (uint)uVar3;
  if (uVar6 - 0x58 < 0x23 && (1L << ((ulong)(uVar6 - 0x58) & 0x3f) & 0x700000007U) != 0) {
    if (((((uVar2 & 0xffdf) == 0x59 && uVar5 != 0) && (uVar3 != 0x59)) && (uVar3 != 0x79)) &&
       ((0xff < uVar3 ||
        ((*(uint *)(((ulong)(uVar3 >> 3) & 0x1ffc) + 0x724eb0) >> (ulong)(uVar5 & 0x1f) & 1) == 0)))
       ) {
      return 1;
    }
  }
  else {
    if (uVar5 == 0) {
      return 0;
    }
    uVar6 = uVar6 & 0xffffffdf;
    uVar1 = uVar5 & 0xffffffdf;
    if ((uVar6 != 0x47) || (uVar1 != 0x4e)) {
      if ((uVar6 != 0x50) || (uVar1 != 0x4e && uVar1 != 0x53)) {
        if (uVar6 == 0x48) {
          return 1;
        }
        if (uVar6 != 0x53) {
          return 0;
        }
        if (uVar1 == 0x59) {
          return 0;
        }
        if ((uVar5 < 0x100) &&
           ((*(uint *)(((ulong)(uVar3 >> 3) & 0x1ffc) + 0x724eb0) >> (ulong)(uVar5 & 0x1f) & 1) != 0
           )) {
          return 0;
        }
      }
    }
  }
  return 2;
}


