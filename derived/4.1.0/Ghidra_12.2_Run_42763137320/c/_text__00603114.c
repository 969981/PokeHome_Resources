/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00603114; name: FUN_.text__00603114
 */


ulong FUN__text__00603114(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN__text__0063e330(param_1,0);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN__text__0063e330(param_1,1);
  }
  else {
    uVar2 = FUN__text__0063784c(0,0,1);
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = FUN__text__0063e330(param_1,1);
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN__text__0063e330(param_1,2);
  }
  else {
    uVar2 = FUN__text__0063784c(uVar2,1,1);
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = FUN__text__0063e330(param_1,2);
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN__text__0063e330(param_1,3);
  }
  else {
    uVar2 = FUN__text__0063784c(uVar2,2,1);
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = FUN__text__0063e330(param_1,3);
  }
  if ((uVar1 & 1) == 0) {
    return uVar2;
  }
  uVar2 = FUN__text__0063784c(uVar2,3,1);
  return uVar2;
}


