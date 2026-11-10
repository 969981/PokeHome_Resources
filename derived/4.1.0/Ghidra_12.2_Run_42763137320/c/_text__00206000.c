/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00206000; name: FUN_.text__00206000
 */


undefined8 FUN__text__00206000(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar2 = FUN__text__00631174();
    if ((((uVar2 & 1) == 0) && (uVar2 = FUN__text__00633b34(param_1,2), (uVar2 & 1) == 0)) &&
       ((((((iVar1 = FUN__text__006312d0(param_1), iVar1 == 9 &&
            ((iVar1 = FUN__text__00631008(param_1), iVar1 == 0xe9 &&
             (uVar2 = FUN__text__00633ad0(param_1), (uVar2 & 1) == 0)))) ||
           ((iVar1 = FUN__text__006312d0(param_1), iVar1 == 9 &&
            ((iVar1 = FUN__text__00631008(param_1), iVar1 == 0x1da &&
             (uVar2 = FUN__text__00633ad0(param_1), (uVar2 & 1) == 0)))))) ||
          ((iVar1 = FUN__text__006312d0(param_1), iVar1 == 9 &&
           ((iVar1 = FUN__text__00631008(param_1), iVar1 == 0x30a &&
            (uVar2 = FUN__text__00633ad0(param_1), (uVar2 & 1) == 0)))))) ||
         ((iVar1 = FUN__text__006312d0(param_1), iVar1 == 9 &&
          ((iVar1 = FUN__text__00631008(param_1), iVar1 == 0x33b &&
           (uVar2 = FUN__text__00633ad0(param_1), (uVar2 & 1) == 0)))))) ||
        (((((iVar1 = FUN__text__006312d0(param_1), iVar1 == 9 &&
            ((iVar1 = FUN__text__00631008(param_1), iVar1 == 0x350 &&
             (uVar2 = FUN__text__00633ad0(param_1), (uVar2 & 1) == 0)))) ||
           ((iVar1 = FUN__text__006312d0(param_1), iVar1 == 9 &&
            ((iVar1 = FUN__text__00631008(param_1), iVar1 == 0x233 &&
             (uVar2 = FUN__text__00633ad0(param_1), (uVar2 & 1) == 0)))))) ||
          ((iVar1 = FUN__text__006312d0(param_1), iVar1 == 9 &&
           ((iVar1 = FUN__text__00631008(param_1), iVar1 == 0x33c &&
            (uVar2 = FUN__text__00633ad0(param_1), (uVar2 & 1) == 0)))))) ||
         (((iVar1 = FUN__text__006312d0(param_1), iVar1 == 9 &&
           ((iVar1 = FUN__text__00631008(param_1), iVar1 == 0x363 &&
            (uVar2 = FUN__text__00633ad0(param_1), (uVar2 & 1) == 0)))) ||
          ((iVar1 = FUN__text__006312d0(param_1), iVar1 == 9 &&
           ((iVar1 = FUN__text__00631008(param_1), iVar1 == 0x2a3 &&
            (uVar2 = FUN__text__00633ad0(param_1), (uVar2 & 1) == 0)))))))))))) {
      FUN__text__00630f6c(param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


