/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00659d20; name: FUN_.text__00659d20
 */


undefined8 * FUN__text__00659d20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN__text__00678414(1,0x1e8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xbab1e;
    iVar1 = FUN__text__00654c1c(puVar2 + 0x10);
    if (((iVar1 == 0) &&
        (iVar1 = FUN__text__00653dc4(puVar2 + 0x17,param_1,&LAB__text__0065cad0,&LAB__text__0065cae0
                                     ,&LAB__text__0065caf4), iVar1 == 0)) &&
       (iVar1 = FUN__text__00650e64(puVar2 + 0x1f,param_2), iVar1 == 0)) {
      FUN__text__00656b14(puVar2 + 4,&DAT__text__00659e2c);
      FUN__text__00656b14(puVar2 + 8,&DAT__text__00659e2c);
      puVar2[0x2d] = 5;
      puVar2[0x1d] = 2;
      puVar2[0x2a] = 0xffffffffffffffff;
    }
    else {
      FUN__text__006540c0(puVar2 + 0x17);
      FUN__text__006540c0(puVar2 + 0x10);
      FUN__text__00650ee0(puVar2 + 0x1f);
      FUN__text__00656c1c(puVar2 + 4,0);
      FUN__text__00656c1c(puVar2 + 8,0);
      FUN__text__006783e4(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


