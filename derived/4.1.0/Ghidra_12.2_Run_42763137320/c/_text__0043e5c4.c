/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043e5c4; name: FUN_.text__0043e5c4
 */


undefined8 FUN__text__0043e5c4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  plVar1 = (long *)FUN__text__0043e2c0(param_1 + 0x58);
  uVar3 = 0;
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*plVar1 == 0) {
      *param_3 = 0;
      return 0;
    }
    uVar3 = *(undefined4 *)(*plVar1 + 0xcc);
    uVar2 = 1;
  }
  *param_3 = uVar3;
  return uVar2;
}


