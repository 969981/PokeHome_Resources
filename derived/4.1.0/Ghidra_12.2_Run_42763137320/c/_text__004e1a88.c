/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e1a88; name: FUN_.text__004e1a88
 */


undefined8 FUN__text__004e1a88(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN__text__004e2160(param_1 + 0x60,0xb);
  if ((((((uVar1 & 1) == 0) || (uVar1 = FUN__text__004e2160(param_1 + 0xd8,0xb), (uVar1 & 1) == 0))
       || (uVar1 = FUN__text__004e2160(param_1 + 0x150,0xb), (uVar1 & 1) == 0)) ||
      (((uVar1 = FUN__text__004e2160(param_1 + 0x1c8,0xb), (uVar1 & 1) == 0 ||
        (uVar1 = FUN__text__004e2160(param_1 + 0x240,0xb), (uVar1 & 1) == 0)) ||
       ((uVar1 = FUN__text__004e2160(param_1 + 0x2b8,0xb), (uVar1 & 1) == 0 ||
        ((uVar1 = FUN__text__004e2160(param_1 + 0x330,0xb), (uVar1 & 1) == 0 ||
         (uVar1 = FUN__text__004e2160(param_1 + 0x3a8,0xb), (uVar1 & 1) == 0)))))))) ||
     ((uVar1 = FUN__text__004e2160(param_1 + 0x420,0xb), (uVar1 & 1) == 0 ||
      ((((uVar1 = FUN__text__004e2160(param_1 + 0x498,0xb), (uVar1 & 1) == 0 ||
         (uVar1 = FUN__text__004e2160(param_1 + 0x510,0xb), (uVar1 & 1) == 0)) ||
        (uVar1 = FUN__text__004e2160(param_1 + 0x588,0xb), (uVar1 & 1) == 0)) ||
       (uVar1 = FUN__text__004e2160(param_1 + 0x600,0xb), (uVar1 & 1) == 0)))))) {
    return 0;
  }
  uVar2 = FUN__text__004e2160(param_1 + 0x678,0xb);
  return uVar2;
}


