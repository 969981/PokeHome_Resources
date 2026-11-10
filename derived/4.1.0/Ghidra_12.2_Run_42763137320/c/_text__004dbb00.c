/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dbb00; name: FUN_.text__004dbb00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004dbb00(long param_1,undefined8 param_2)

{
  int iVar1;
  long in_x5;
  
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined8 *)(param_1 + 0xec) = 0x2b;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0x1ffffffff;
  *(undefined8 *)(param_1 + 0x11c) = 0x2b;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0x134) = 0x1ffffffff;
  *(undefined8 *)(param_1 + 0x148) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x150) = 0;
  iVar1 = FUN__text__004dad50();
  if ((iVar1 == 1) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                        (*(long **)(param_1 + 0xd0),_DAT_008a47f0,param_1 + 0x10,
                         *(undefined8 *)(param_1 + 0x88),in_x5), iVar1 == 1)) {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(in_x5 + 4);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
  }
  return;
}


