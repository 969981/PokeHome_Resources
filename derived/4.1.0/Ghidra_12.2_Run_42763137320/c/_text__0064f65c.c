/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064f65c; name: FUN_.text__0064f65c
 */


undefined8 FUN__text__0064f65c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)(lVar3 + 0x1288);
  auVar5 = FUN__text__0066c6a8();
  uVar1 = FUN__text__0066c6d8(auVar5._0_8_,auVar5._8_8_,*puVar4,puVar4[1]);
  if ((int)uVar1 < 3) {
    uVar2 = 0;
  }
  else if (uVar1 < 0x33) {
    uVar2 = (uVar1 & 0xff) / 3;
  }
  else {
    uVar2 = 0x32;
    if (0xfa < uVar1) {
      uVar2 = 200;
    }
  }
  FUN__text__0065a050(lVar3,uVar2,1);
  return 0;
}


