/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e5704; name: FUN_.text__001e5704
 */


uint FUN__text__001e5704(long param_1,int param_2)

{
  uint uVar1;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [96];
  
  FUN__text__0019c014(auStack_80);
  if (param_2 < 0) {
    uVar1 = FUN__text__0019c1d8(param_1 + 0xbc,auStack_80);
    return uVar1 & 1;
  }
  FUN__text__0019c014(auStack_e0);
  uVar1 = FUN__text__0019c300(param_1 + 0xbc,auStack_e0,param_2);
  return uVar1 & 1;
}


