/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001934c4; name: FUN_.text__001934c4
 */


undefined8 FUN__text__001934c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = FUN__text__00195358();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x18) == 0)) {
    *param_3 = 0;
    param_3[1] = 0;
    return 0;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  *param_3 = *(undefined8 *)(lVar2 + 8);
  param_3[1] = uVar1;
  return 1;
}


