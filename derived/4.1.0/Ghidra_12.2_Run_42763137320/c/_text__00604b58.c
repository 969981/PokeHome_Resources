/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00604b58; name: FUN_.text__00604b58
 */


uint FUN__text__00604b58(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_198 [360];
  
  FUN__text__00643f74(auStack_198);
  uVar1 = FUN__text__0060be40(param_1,auStack_198);
  if ((uVar1 & 1) != 0) {
    FUN__text__006305fc(param_1);
  }
  return uVar1 & 1;
}


