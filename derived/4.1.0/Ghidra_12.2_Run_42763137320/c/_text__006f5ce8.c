/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5ce8; name: FUN_.text__006f5ce8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f5ce8(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x18) + 8);
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  (*DAT_00c60498)();
  (*(code *)*_DAT_008a6950)(*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_3 + 2),1);
  (*(code *)*_DAT_008a7488)
            (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 8),
             *(undefined4 *)(param_3 + 0xc));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN__text__006f22c0(*param_3);
  (*(code *)*_DAT_008a74a8)(uVar2,uVar1);
  *param_1 = 1;
  param_1[1] = param_1[1] & 0xfe;
  return;
}


