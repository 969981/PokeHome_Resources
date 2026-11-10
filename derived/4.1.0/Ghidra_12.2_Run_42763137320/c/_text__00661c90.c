/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661c90; name: FUN_.text__00661c90
 */


undefined4 FUN__text__00661c90(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_24;
  
  local_24 = 0;
  uVar1 = 0;
  if (param_1[0x84] == 0x899f78 || param_1[0x84] == 0x89a000) {
    lVar3 = *(long *)(*param_1 + 0x1e8);
    if (*(long *)(lVar3 + 0x280) == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = param_1[0xaa];
      *(undefined8 *)(lVar3 + 0x280) = 0;
      FUN__text__0067fe0c(lVar2,*(undefined4 *)(lVar3 + 0x218));
      FUN__text__00661d1c(param_1,param_1 + 0xaa,&local_24);
      uVar1 = local_24;
    }
  }
  return uVar1;
}


