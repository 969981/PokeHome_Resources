/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068335c; name: FUN_.text__0068335c
 */


undefined8 FUN__text__0068335c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN__text__006809d4(param_3,0x30);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    uVar3 = FUN__text__006831bc((undefined8 *)(lVar2 + 8),param_2,param_3);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    FUN__text__006809e4(param_3,*param_1);
  }
  return 0xfffffc7b;
}


