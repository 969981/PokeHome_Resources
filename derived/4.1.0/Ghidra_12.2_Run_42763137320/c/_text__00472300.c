/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472300; name: FUN_.text__00472300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472300(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  nn::os::LockMutex(_DAT_008a4d18);
  if (DAT_00aea758 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN__text__00400f80(0,0x20);
    if (puVar2 == (undefined8 *)0x0) {
      FUN__text__004723f0();
      if (DAT_00aea758 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)FUN__text__00400f80(0,0x20);
        *puVar2 = DAT_00aea758;
        DAT_00aea758 = puVar2;
      }
    }
    else {
      *puVar2 = DAT_00aea758;
      DAT_00aea758 = puVar2;
    }
  }
  if (DAT_00aea750 == (undefined8 *)0x0) {
    DAT_00aea748 = DAT_00aea758;
  }
  else {
    *DAT_00aea750 = DAT_00aea758;
  }
  DAT_00aea750 = DAT_00aea758;
  uVar1 = *DAT_00aea758;
  *DAT_00aea758 = 0;
  DAT_00aea758 = (undefined8 *)uVar1;
  puVar2 = DAT_00aea750;
  DAT_00aea76c = DAT_00aea76c + 1;
  DAT_00aea750[1] = param_2;
  *(undefined4 *)(puVar2 + 2) = param_3;
  *(undefined4 *)((long)puVar2 + 0x14) = param_4;
  *(undefined4 *)(puVar2 + 3) = param_1;
  nn::os::UnlockMutex(_DAT_008a4d18);
  return;
}


