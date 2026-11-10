/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015890c; name: FUN_.text__0015890c
 */


undefined8 FUN__text__0015890c(undefined8 param_1,undefined2 *param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = FUN__text__00157130(*param_2,1);
  uVar1 = param_2[uVar2 & 1];
  if (((uVar1 < 0x100) &&
      ((*(uint *)(((ulong)(uVar1 >> 3) & 0x1ffc) + 0x724eb0) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) ||
     (((uVar1 & 0xffffffdf) == 0x59 &&
      ((uVar1 = (param_2 + (uVar2 & 1))[1], 0xff < uVar1 ||
       ((*(uint *)(((ulong)(uVar1 >> 3) & 0x1ffc) + 0x724eb0) >> (ulong)(uVar1 & 0x1f) & 1) == 0))))
     )) {
    return 1;
  }
  return 0;
}


